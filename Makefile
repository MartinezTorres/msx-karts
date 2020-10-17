NAME := msx-karts

CCZ80 = ~/sdcc-4.0.0/bin/sdcc
ASM = ~/sdcc-4.0.0/bin/sdasz80
MEGALINKER = ~/repos/manel/msx/megalinker/megalinker

OPENMSX_BIN = openmsx
OPENMSX_DEF = $(OPENMSX_BIN)                          $(OPENMSX_PARAM) -carta 
OPENMSX1    = $(OPENMSX_BIN) -machine C-BIOS_MSX1     $(OPENMSX_PARAM) -carta 
OPENMSX1_JP = $(OPENMSX_BIN) -machine C-BIOS_MSX1_JP  $(OPENMSX_PARAM) -carta 
OPENMSX2    = $(OPENMSX_BIN) -machine C-BIOS_MSX2     $(OPENMSX_PARAM) -carta 
OPENMSX2P   = $(OPENMSX_BIN) -machine C-BIOS_MSX2+_JP $(OPENMSX_PARAM) -carta 
OPENMSXTR   = $(OPENMSX_BIN) -machine Panasonic_FS-A1GT $(OPENMSX_PARAM) -carta 

MAX_ALLOCS = 5000
CCFLAGS_MSX   = -mz80 --disable-warning 110 --disable-warning 126 --no-std-crt0 --out-fmt-ihx --max-allocs-per-node $(MAX_ALLOCS) --allow-unsafe-read --nostdlib --no-xinit-opt --opt-code-speed --reserve-regs-iy

MSG = "\033[1;32m[$(@)]\033[1;31m\033[0m"

#recursive wildcard
rwildcard=$(foreach d,$(wildcard $1*),$(call rwildcard,$d/,$2) $(filter $(subst *,%,$2),$d))

INCLUDES      += -Iinc -Isrc
HEADERS       += $(call rwildcard, src/ inc/, *.h) 
SOURCES_C     += $(call rwildcard, src/, *.c)
SOURCES_ASM   += $(call rwildcard, src/, *.s)

.PHONY: all clean
.SECONDARY:  

all: rom 

##########################################################
### MSX SECTION
OBJ_ASM    = $(addprefix tmp/,$(SOURCES_ASM:.s=.rel))
OBJ_C      = $(addprefix tmp/,$(SOURCES_C:.c=.rel))


tmp/%.rel: %.s $(HEADERS) 
	@echo $(MSG)
	@mkdir -p $(@D)
	@$(ASM) -ogslp $@ $<
	@echo " "`grep "size" tmp/$*.sym | awk 'strtonum("0x"$$4) {print $$2": "strtonum("0x"$$4)" bytes"}'` 

tmp/%.rel: %.c $(HEADERS)
	@echo -n $(MSG)
	@mkdir -p $(@D)
	@$(CCZ80) -c -D MSX $(INCLUDES) $(CCFLAGS_MSX) $< -o $@
	@echo " "`grep "size" tmp/$*.sym | awk 'strtonum("0x"$$4) {print $$2": "strtonum("0x"$$4)" bytes"}'` 

out/%_[ASCII8].rom: $(OBJ_C) $(OBJ_ASM) tmp/mapper/ascii8.rel
	@echo $(MSG)
	@mkdir -p $(@D)
	@$(MEGALINKER) $(OBJ_C) $(OBJ_ASM) tmp/mapper/ascii8.rel $@

out/%_[Generic8].rom: $(OBJ_C) $(OBJ_ASM) tmp/mapper/generic8.rel
	@echo $(MSG)
	@mkdir -p $(@D)
	@$(MEGALINKER) $(OBJ_C) $(OBJ_ASM) tmp/mapper/generic8.rel $@

rom: out/$(NAME)_[ASCII8].rom out/$(NAME)_[Generic8].rom

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

%: util/%.cc bin/% 
	@echo $(MSG)
	@true

clean:
	@echo -n "Cleaning... "
	@rm -rf tmp out
	@echo "Done!"
