#include "common.h"

#ifdef __SDCC

static const uint16_t * push16_single(const uint16_t *ps) __z88dk_fastcall __naked {
	UNUSED(ps);
	__asm
		ld iy, #0
		add iy, sp
		ld sp, hl
		ld de, (_pimg_start)
		
		ld c, #0x98
	__endasm;
	REPEAT(16*8, 
		__asm__("		pop hl");
		__asm__("		add hl, de");
		__asm__("		outi");
	);
	__asm
		ld hl, #0
		add hl, sp
		ld sp,iy
		ret
	__endasm;
}


static const uint16_t * push14_single(const uint16_t *ps) __z88dk_fastcall __naked {
	UNUSED(ps);
	__asm
		ld iy, #0
		add iy, sp
		ld sp, hl
		ld de, (_pimg_start)
		
		ld c, #0x98
	__endasm;
	REPEAT(14*8, 
		__asm__("		pop hl");
		__asm__("		add hl, de");
		__asm__("		outi");
	);
	__asm
		ld hl, #0
		add hl, sp
		ld sp,iy
		ret
	__endasm;
}

static const uint16_t * push8_single(const uint16_t *ps) __z88dk_fastcall __naked {
	UNUSED(ps);
	__asm
		ld iy, #0
		add iy, sp
		ld sp, hl
		ld de, (_pimg_start)
		
		ld c, #0x98
	__endasm;
	REPEAT(64, 
		__asm__("		pop hl");
		__asm__("		add hl, de");
		__asm__("		outi");
	);
	__asm
		ld hl, #0
		add hl, sp
		ld sp,iy
		ret
	__endasm;
}
	
static const uint16_t * push7_single(const uint16_t *ps) __z88dk_fastcall __naked {
	UNUSED(ps);
	__asm
		ld iy, #0
		add iy, sp
		ld sp, hl
		ld de, (_pimg_start)
		
		ld c, #0x98
	__endasm;
	REPEAT(64-8, 
		__asm__("		pop hl");
		__asm__("		add hl, de");
		__asm__("		outi");
	);
	__asm
		ld hl, #0
		add hl, sp
		ld sp,iy
		ret
	__endasm;
}

static const uint16_t * push16_double(const uint16_t *ps) __z88dk_fastcall __naked {
	UNUSED(ps);
	__asm
		ld iy, #0
		add iy, sp
		ld sp, hl
		ld de, (_pimg_start)
		
		pop hl
		add hl, de
		ld a, (hl)
		out (#0x98), a

	__endasm;
	REPEAT(16*4-1, 
		__asm__("		pop hl");
		__asm__("		nop");
		__asm__("		out (#0x98), a");
		__asm__("		add hl, de");
		__asm__("		ld a, (hl)");
		__asm__("		out (#0x98), a");
	);
	
	__asm
		ld hl, #0
		add hl, sp
		out (#0x98), a
		ld sp,iy
		ret
	__endasm;	
}


static const uint16_t * push14_double(const uint16_t *ps) __z88dk_fastcall __naked {
	UNUSED(ps);
	__asm
		ld iy, #0
		add iy, sp
		ld sp, hl
		ld de, (_pimg_start)
		
		pop hl
		add hl, de
		ld a, (hl)
		out (#0x98), a

	__endasm;
	REPEAT(14*4-1, 
		__asm__("		pop hl");
		__asm__("		nop");
		__asm__("		out (#0x98), a");
		__asm__("		add hl, de");
		__asm__("		ld a, (hl)");
		__asm__("		out (#0x98), a");
	);
	
	__asm
		ld hl, #0
		add hl, sp
		out (#0x98), a
		ld sp,iy
		ret
	__endasm;	
}


static const uint16_t * push8_double(const uint16_t *ps) __z88dk_fastcall __naked {
	UNUSED(ps);
	__asm
		ld iy, #0
		add iy, sp
		ld sp, hl
		ld de, (_pimg_start)
		
		pop hl
		add hl, de
		ld a, (hl)
		out (#0x98), a

	__endasm;
	REPEAT(32-1, 
		__asm__("		pop hl");
		__asm__("		nop");
		__asm__("		out (#0x98), a");
		__asm__("		add hl, de");
		__asm__("		ld a, (hl)");
		__asm__("		out (#0x98), a");
	);
	
	__asm
		ld hl, #0
		add hl, sp
		out (#0x98), a
		ld sp,iy
		ret
	__endasm;	
}


	
static const uint16_t * push7_double(const uint16_t *ps) __z88dk_fastcall __naked {
	UNUSED(ps);
	__asm
		ld iy, #0
		add iy, sp
		ld sp, hl
		ld de, (_pimg_start)
	
		pop hl
		add hl, de
		ld a, (hl)
		out (#0x98), a

	__endasm;
	REPEAT(32-1-4, 
		__asm__("		pop hl");
		__asm__("		nop");
		__asm__("		out (#0x98), a");
		__asm__("		add hl, de");
		__asm__("		ld a, (hl)");
		__asm__("		out (#0x98), a");
	);
		
	__asm
		ld hl, #0
		add hl, sp
		out (#0x98), a
		ld sp,iy
		ret
	__endasm;	
}



static const uint16_t * push6_double(const uint16_t *pd) __z88dk_fastcall __naked {

	UNUSED(pd);
	__asm
		ld iy, #0
		add iy, sp
		ld sp, hl
		ld de, (_pimg_start)
	
		pop hl
		add hl, de
		ld a, (hl)
		out (#0x98), a
	__endasm;
	REPEAT(32-1-8, 
		__asm__("		pop hl");
		__asm__("		nop");
		__asm__("		out (#0x98), a");
		__asm__("		add hl, de");
		__asm__("		ld a, (hl)");
		__asm__("		out (#0x98), a");
	);
	__asm
		ld hl, #0
		add hl, sp
		out (#0x98), a
		ld sp,iy
		ret
	__endasm;		
}

static const uint16_t * push5_double(const uint16_t *pd) __z88dk_fastcall __naked {

	UNUSED(pd);
	__asm
		ld iy, #0
		add iy, sp
		ld sp, hl
		ld de, (_pimg_start)
		
		pop hl
		add hl, de
		ld a, (hl)
		out (#0x98), a
	__endasm;
	REPEAT(32-1-12, 
		__asm__("		pop hl");
		__asm__("		nop");
		__asm__("		out (#0x98), a");
		__asm__("		add hl, de");
		__asm__("		ld a, (hl)");
		__asm__("		out (#0x98), a");
	);
	__asm
		ld hl, #0
		add hl, sp
		out (#0x98), a
		ld sp,iy
		ret
	__endasm;		
	
}

static const uint16_t * push4_double_black(const uint16_t *pd) __z88dk_fastcall __naked {

	UNUSED(pd);
	__asm
		ld iy, #0
		add iy, sp
		ld sp, hl
		ld de, (_pimg_start)
	
		pop hl
		add hl, de
		ld a, (hl)
		and #0x0F
		out (#0x98), a
	__endasm;

	REPEAT(16-1, 
		__asm__("		pop hl");
		__asm__("		add hl, de");
		__asm__("		out (#0x98), a");
		__asm__("		ld a, (hl)");
		__asm__("		and #0x0F");
		__asm__("		out (#0x98), a");
	);

	__asm
		ld hl, #0
		add hl, sp
		out (#0x98), a
		ld sp,iy
		ret
	__endasm;		
}

static const uint16_t * push4_double_sprite_top(const uint16_t *pd) __z88dk_fastcall __naked {

	UNUSED(pd);
	__asm
		ld iy, #0
		add iy, sp
		ld sp, hl
		ld de, (_pimg_start)

		ld bc, (_tmp_car_color)

	////////////////////////////////////////////////////////////////////
	// FIRST TILE
	
	pop hl
	add hl, de
	ld a, (hl)
	and #0x0F
	out (#0x98), a
	
	pop hl
	add hl, de
	out (#0x98), a
	ld a, (hl)
	and #0x0F
	out (#0x98), a

	pop hl
	add hl, de
	out (#0x98), a
	ld a, (hl)
	and #0x0F
	out (#0x98), a

	pop hl
	add hl, de
	out (#0x98), a
	ld a, (hl)
	and #0x0F
	out (#0x98), a


	pop hl
	add a, #0xD0        ; set magenta
	out (#0x98), a   ; magenta
	
	////////////////////////////////////////////////////////////////////
	// SECOND TILE
	
	ld a, b          ; set blue
	nop
	nop
	out (#0x98), a   ; blue
	pop hl
	add hl, de
	out (#0x98), a   ; blue
	ld a, (hl)
	and #0x0F
	out (#0x98), a   ; black + background
	pop hl
	add hl, de
	out (#0x98), a   ; black + background
	ld a, (hl)
	and #0x0F
	out (#0x98), a   ; black + background
	pop hl
	ld a, c      ; set dark red
	out (#0x98), a   ; dark red
	nop
	nop
	nop
	out (#0x98), a   ; dark read
	pop hl
	ld a, b      ; set gray
	out (#0x98), a   ; gray

	////////////////////////////////////////////////////////////////////
	// THIRD TILE
	
	ld a, b          ; set blue
	nop
	nop
	out (#0x98), a   ; blue
	pop hl
	add hl, de
	out (#0x98), a   ; blue
	ld a, (hl)
	and #0x0F
	out (#0x98), a   ; black + background
	pop hl
	add hl, de
	out (#0x98), a   ; black + background
	ld a, (hl)
	and #0x0F
	out (#0x98), a   ; black + background
	pop hl
	ld a, c      ; set dark red
	out (#0x98), a   ; dark red
	nop
	nop
	nop
	out (#0x98), a   ; dark red
	pop hl
	add hl, de
	ld a, b      ; set dark red
	out (#0x98), a   ; dark red

	////////////////////////////////////////////////////////////////////
	// FOURTH TILE

	ld a, (hl)
	and #0x0F
	out (#0x98), a

	pop hl
	add hl, de
	out (#0x98), a
	ld a, (hl)
	and #0x0F
	out (#0x98), a

	pop hl
	add hl, de
	out (#0x98), a
	ld a, (hl)
	and #0x0F
	out (#0x98), a


	pop hl
	add hl, de
	out (#0x98), a
	ld a, (hl)
	and #0x0F
	out (#0x98), a


	ld hl, #0
	add a, #0xD0        ; set magenta
	out (#0x98), a   ; magenta
	add hl, sp
	ld sp,iy
	ret
__endasm;	
	
}


static const uint16_t * push4_double_sprite_bottom(const uint16_t *pd) __z88dk_fastcall __naked {

	UNUSED(pd);
	__asm
		ld iy, #0
		add iy, sp
		ld sp, hl
		ld de, (_pimg_start)
		ld bc, (_tmp_car_color)

	////////////////////////////////////////////////////////////////////
	// FIRST TILE
	
	pop hl
	add hl, de
	ld a, (hl)
	and #0x0F
	out (#0x98), a
	
	pop hl
	add hl, de
	add a, #0xD0        ; set magenta
	out (#0x98), a    ; magenta
	ld a, (hl)
	and #0x0F
	out (#0x98), a

	pop hl
	add hl, de
	out (#0x98), a
	ld a, (hl)
	and #0x0F
	out (#0x98), a

	pop hl
	add hl, de
	out (#0x98), a
	ld a, (hl)
	and #0x0F
	out (#0x98), a


	pop hl
	nop
	out (#0x98), a
	
	////////////////////////////////////////////////////////////////////
	// SECOND TILE
	
	ld a, c          ; set gray
	nop
	nop
	out (#0x98), a   ; gray
	pop hl
	ld a, c          ; set gray
	out (#0x98), a   ; gray
	ld a, b          ; set blue
	nop
	nop
	out (#0x98), a   ; blue
	pop hl
	ld a, c          ; set gray
	out (#0x98), a   ; gray
	ld a, b          ; set blue
	nop
	nop
	out (#0x98), a   ; blue
	pop hl
	ld a, b          ; set gray
	out (#0x98), a   ; gray
	ld a, c          ; set blue
	nop
	nop
	out (#0x98), a   ; blue
	pop hl
	nop
	ld a, c          ; set blue
	out (#0x98), a   ; gray

	////////////////////////////////////////////////////////////////////
	// THIRD TILE
	
	ld a, c      ; set gray
	nop
	nop
	out (#0x98), a   ; gray
	pop hl
	ld a, c      ; set gray
	out (#0x98), a   ; gray
	ld a, b          ; set blue
	nop
	nop
	out (#0x98), a   ; blue
	pop hl
	ld a, c          ; set gray
	out (#0x98), a   ; gray
	ld a, b          ; set blue
	nop
	nop
	out (#0x98), a   ; blue
	pop hl
	ld a, b          ; set gray
	out (#0x98), a   ; gray
	ld a, c          ; set blue
	nop
	nop
	out (#0x98), a   ; blue
	pop hl
	add hl, de
	ld a, c          ; set blue
	out (#0x98), a   ; gray

	////////////////////////////////////////////////////////////////////
	// FOURTH TILE

	ld a, (hl)
	and #0x0F
	out (#0x98), a
	
	pop hl
	add hl, de
	add a, #0xD0        ; set magenta
	out (#0x98), a    ; magenta
	ld a, (hl)
	and #0x0F
	out (#0x98), a

	pop hl
	add hl, de
	out (#0x98), a
	ld a, (hl)
	and #0x0F
	out (#0x98), a

	pop hl
	add hl, de
	out (#0x98), a
	ld a, (hl)
	and #0x0F
	out (#0x98), a

	ld hl, #0
	add hl, sp
	out (#0x98), a
	ld sp,iy
	ret
__endasm;	
	
}




#else

static void push8_single(const uint16_t *ps) __z88dk_fastcall {
	const uint8_t *pimg = pimg_start;
	for (int colTile=0; colTile<8; colTile++) {
		for (int row=0; row<8; row++) {
			pimg += *ps++;	
			TMS99X8_write(*(pimg + *ps++));
			pimg++;
		}
	}
}

static void push8_double(const uint16_t *pd) __z88dk_fastcall {
	const uint8_t *pimg = pimg_start;
	for (int colTile=0; colTile<8; colTile++) {
		for (int row=0; row<4; row++) {
			TMS99X8_write(*(pimg + *pd++));
			NOP();
			NOP();
			TMS99X8_write(*(pimg + *pd++));
		}
	}
}


#endif
