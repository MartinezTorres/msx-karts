NAME := msx-karts

.PHONY: all clean
.SECONDARY:  

all: rom 

##########################################################
### BINARY DEPENDENCIES AND FLAGS

# AWK
AWK = gawk

# C
#SDCC = /home/manel/tools/sdcc-4.1.14
#SDCC = tools/sdcc-4.2.0
#SDCC = tools/sdcc-4.1.0
SDCC = tools/sdcc-4.5.0-rc2

CCZ80 = $(SDCC)/bin/sdcc
#MAX_ALLOCS = 100000
MAX_ALLOCS = 500
MAX_ALLOCS = 100000
CCZ80FLAGS = --std-sdcc11 -mz80 --disable-warning 110 --disable-warning 126 --no-std-crt0 --out-fmt-ihx --max-allocs-per-node $(MAX_ALLOCS) --allow-unsafe-read --nostdlib --no-xinit-opt --opt-code-speed --reserve-regs-iy -I$(SDCC)/device/include

# ASM
ASM = $(SDCC)/bin/sdasz80
ASM_FLAGS = -ogslp

#LLVM_C BACKEND
LLVM_CBE = ext/llvm-cbe/build/tools/llvm-cbe/llvm-cbe 
LLVM_CBE_FLAGS = --cbe-declare-locals-late

#CLANG
CLANG = clang
CLANG_FLAGS = -S -emit-llvm -Os -target avr -Wno-avr-rtlib-linking-quirks -Wall -Wextra

#DLANG
DLANG = ldmd2 
DLANG_FLAGS = -mtriple=avr-unknown-unknown -O -betterC -output-ll 

#FORTRAN
FORTRAN = flang-7
FORTRAN_FLAGS =  -S -emit-llvm

#RUST
RUST = rustc
RUST_FLAGS = --emit=llvm-ir -C opt-level=3 -C embed-bitcode=no --target avr-unknown-gnu-atmega328 -L dependency=ext/rust/target/avr-unknown-gnu-atmega328/release/deps -L dependency=ext/rust/target/release/deps --extern 'noprelude:compiler_builtins=ext/rust/target/avr-unknown-gnu-atmega328/release/deps/libcompiler_builtins-595f7853df622835.rlib' --extern 'noprelude:core=rust/target/avr-unknown-gnu-atmega328/release/deps/libcore-308ea1ee9c6bc641.rlib' -Z unstable-options -Cpanic=abort

#ZIG
ZIG = ext/zig-linux-x86_64-0.9.0/zig
ZIG_FLAGS = build-obj -fno-stage1 -fLLVM -O ReleaseSmall -target avr-freestanding-eabi  


# LINKER
MEGALINKER = ~/repos/manel/msx/megalinker/megalinker

# OPENMSX
OPENMSX_BIN = openmsx
OPENMSX_DEF = $(OPENMSX_BIN)                          $(OPENMSX_PARAM) -carta 
OPENMSX1    = $(OPENMSX_BIN) -machine C-BIOS_MSX1     $(OPENMSX_PARAM) -carta 
OPENMSX1_JP = $(OPENMSX_BIN) -machine C-BIOS_MSX1_JP  $(OPENMSX_PARAM) -carta 
OPENMSX2    = $(OPENMSX_BIN) -machine C-BIOS_MSX2     $(OPENMSX_PARAM) -carta 
OPENMSX2P   = $(OPENMSX_BIN) -machine C-BIOS_MSX2+_JP $(OPENMSX_PARAM) -carta 
OPENMSXTR   = $(OPENMSX_BIN) -machine Panasonic_FS-A1GT $(OPENMSX_PARAM) -carta 

MSG = "\033[1;32m[$(@)]\033[1;31m\033[0m"


##########################################################
### COLLECT SOURCES

#recursive wildcard
rwildcard=$(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2) $(filter $(subst *,%,$2),$d))

INCLUDES        += -Iinc -Isrc
HEADERS         += $(call rwildcard, src/ inc/, *.h) 

SOURCES_C       += $(call rwildcard, src/, *.c)
SOURCES_S       += $(call rwildcard, src/, *.s) 
SOURCES_ASM     += $(call rwildcard, src/, *.asm) 

SOURCES_CPP     += $(call rwildcard, src/, *.cpp)
SOURCES_CC      += $(call rwildcard, src/, *.cc)
SOURCES_FORTRAN += $(call rwildcard, src/, *.f)
SOURCES_DLANG   += $(call rwildcard, src/, *.d)
SOURCES_RUST    += $(call rwildcard, src/, *.rs)
SOURCES_ZIG     += $(call rwildcard, src/, *.zig)

##########################################################
### CREATE OBJECT FILES
OBJ    += $(addprefix tmp/,$(SOURCES_S:.s=.rel))
OBJ    += $(addprefix tmp/,$(SOURCES_ASM:.asm=.rel))
OBJ    += $(addprefix tmp/,$(SOURCES_C:.c=.rel))


###### SDCC NATIVE: ASM
tmp/%.rel: %.s $(HEADERS) 
	@echo -n $(MSG)
	@mkdir -p $(@D)
	@$(ASM) $(ASM_FLAGS) $@ $<
	@echo " "`grep "size" tmp/$*.sym | $(AWK) 'strtonum("0x"$$4) {print $$2": "strtonum("0x"$$4)" bytes"}'` 

tmp/%.rel: %.asm $(HEADERS) 
	@echo -n $(MSG)
	@mkdir -p $(@D)
	@$(ASM) $(ASM_FLAGS) $@ $<
	@echo " "`grep "size" tmp/$*.sym | $(AWK) 'strtonum("0x"$$4) {print $$2": "strtonum("0x"$$4)" bytes"}'` 

###### SDCC NATIVE: C
tmp/%.rel: %.c $(HEADERS)
	@echo -n $(MSG)
	@mkdir -p $(@D)
	@$(CCZ80) -c -D MSX $(INCLUDES) $(CCZ80FLAGS) $< -o $@
	@echo " "`grep "size" tmp/$*.sym | $(AWK) 'strtonum("0x"$$4) {print $$2": "strtonum("0x"$$4)" bytes"}'` 


###### LLVM COMMON PIPELINE:
tmp/%.cbe.c: tmp/%.ll
	@echo -n $(MSG)
	@mkdir -p $(@D)
	@$(LLVM_CBE) --cbe-declare-locals-late $< -o $@
	@echo 
	
tmp/%.cbe.sed.c: tmp/%.cbe.c
	@echo -n $(MSG)
	@mkdir -p $(@D)
	@(SED) 's/static __forceinline/inline/g' $< > $@
	@(SED) '/__noreturn void rust_begin_unwind(struct l_struct_core_KD__KD_panic_KD__KD_PanicInfo\* llvm_cbe_info)/{:a;N;/__builtin_unreachable/{N;N;d};/  }/b;ba}' -i $@
	@echo 

tmp/%.rel: tmp/%.cbe.sed.c
	@echo -n $(MSG)
	@mkdir -p $(@D)
	@$(CCZ80) -D__HIDDEN__= -D__attribute__\(a\)= -D__builtin_unreachable\(\)=while\(1\)\; -c -D MSX $(INCLUDES) $(CCFLAGS_MSX) $< -o $@
	@echo " "`grep "size" tmp/$*.sym | $(AWK) 'strtonum("0x"$$4) {print $$2": "strtonum("0x"$$4)" bytes"}'` 


###### LLVM FRONTENDS:

# CPP
tmp/%.ll: %.cpp $(HEADERS) 
	@echo -n $(MSG)
	@mkdir -p $(@D)
	@$(CLANG) $(CLANG_FLAGS) $< -o $@
	@echo 

tmp/%.ll: %.cc $(HEADERS) 
	@echo -n $(MSG)
	@mkdir -p $(@D)
	@$(CLANG) -$(CLANG_FLAGS) $< -o $@
	@echo 

# FORTRAN
tmp/%.ll: %.f $(HEADERS) 
	@echo -n $(MSG)
	@mkdir -p $(@D)
	@$(FORTRAN) $(FORTRAN_FLAGS) $< -o $@
	@echo 

# D
tmp/%.ll: %.d $(HEADERS) 
	@echo -n $(MSG)
	@mkdir -p $(@D)
	@$(DLANG) $(DLANG_FLAGS) $< -of $@
	@echo 

# RUST
tmp/%.ll: %.rs $(HEADERS) 
	@echo -n $(MSG)
	@mkdir -p $(@D)
	@$(RUSTC) $(RUST_FLAGS) $< -o $@
	@echo 

# ZIG
tmp/%.ll: %.zig $(HEADERS) 
	@echo -n $(MSG)
	@mkdir -p $(@D)
	@$(ZIG) $(ZIG_FLAGS) -femit-llvm-ir=$@ $<
	@echo 


##########################################################
### LINKING AND CREATING A ROM

out/%_[ASCII8].rom: $(OBJ) tmp/mapper/ascii8.rel
	@echo $(MSG)
	@mkdir -p $(@D)
	@$(MEGALINKER) $(OBJ) tmp/mapper/ascii8.rel $@

out/%_[Generic8].rom: $(OBJ) tmp/mapper/generic8.rel
	@echo $(MSG)
	@mkdir -p $(@D)
	@$(MEGALINKER) $(OBJ) tmp/mapper/generic8.rel $@

rom: out/$(NAME)_[ASCII8].rom out/$(NAME)_[Generic8].rom

##########################################################
### EXECUTING SUCH ROM

msx: out/$(NAME)_[ASCII8].rom
	@echo $(MSG)
	$(OPENMSX_DEF) $< || true

msx1: out/$(NAME)_[ASCII8].rom
	@echo $(MSG)
	$(OPENMSX1) $< || true

msx1jp: out/$(NAME)_[ASCII8].rom
	@echo $(MSG)
	@$(OPENMSX1_JP) $< || true

msx2: out/$(NAME)_[ASCII8].rom
	@echo $(MSG)
	@$(OPENMSX2) $< || true

msx2p: out/$(NAME)_[ASCII8].rom
	@echo $(MSG)
	@$(OPENMSX2P) $< || true

msxtr: out/$(NAME)_[ASCII8].rom
	@echo $(MSG)
	@$(OPENMSXTR) $< || true
	
##########################################################
### UTILITIES SECTION

INCLUDE := util
tmp/%: %.cc
	@echo $(MSG)
	@mkdir -p $(@D)
	@$(CXX) -o $@ $< $(shell echo `grep -m1 "^// FLAGS:" $< | cut -d: -f2-`)

run-%: tmp/util/% 
	@$<

clean:
	@echo -n "Cleaning... "
	@rm -rf tmp out
	@echo "Done!"
