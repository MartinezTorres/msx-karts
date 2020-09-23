#include "common.h"

Tpaged_isr paged_isr;

static void main_isr(void) { 
	if (paged_isr.f != nullptr) IN_SEGMENT(paged_isr.seg, PAGE_B, (*paged_isr.f)() ); 
}

T_SA SA;
static uint8_t scratchpad[256];
void initCanvas() {

    // Activates mode 2 and clears the screen (in black)
    TMS99X8_activateMode2(MODE2_ALL_ROWS); 

    // Disables individually all sprites
    for (uint8_t n=0; n<32; n++) { SA[n].y = 209; }
    TMS99X8_writeSpriteAttributes(0,SA);
    
    // Enables 16 pixel sprites
    TMS99X8.sprites16 = true;
    TMS99X8_syncFlags();

    // Places the tiles in a way that are consecutive
    {
        uint8_t i=0;
        do {
            scratchpad[i] = i;
        } while (++i != 0);
    }
    
    TMS99X8_memcpy(MODE2_ADDRESS_PN0 + 0x0000, (const uint8_t *)scratchpad, 256);    
    TMS99X8_memcpy(MODE2_ADDRESS_PN0 + 0x0100, (const uint8_t *)scratchpad, 256);    
    TMS99X8_memcpy(MODE2_ADDRESS_PN0 + 0x0200, (const uint8_t *)scratchpad, 256);    

    // Prepares the pattern table for 4x1 mode
	TMS99X8_memset(MODE2_ADDRESS_PG, 0x00, sizeof(T_PG));

	TMS99X8_memset(MODE2_ADDRESS_CT, FWhite + BTransparent, sizeof(T_CT));
}

#include "tracks/tracks_common.h"
#include "tracks/angles_common.h"


ANGLE_SEGMENTS
ANGLE_SINGLE
ANGLE_DOUBLE
SIN_COS

typedef struct {
	uint16_t x, y;
	int16_t vx, vy;
	uint8_t a;
} Car;

static Car player0, player1, player2, player3;


static const uint8_t *pimg_start;
static uint16_t temp_sp, temp_hl;



static void push8_double_shadow_left(const uint16_t *pd) __z88dk_fastcall {
	const uint8_t *pimg = pimg_start;
	for (int colTile=0; colTile<7; colTile++) {
		for (int row=0; row<4; row++) {
			pimg += *pd++;	
			TMS99X8_write(*pimg);
			NOP();
			NOP();
			NOP();
			NOP();
			NOP();
			NOP();
			TMS99X8_write(*pimg);
			NOP();
			NOP();
			NOP();
			NOP();
		}
	}

	for (int row=0; row<4; row++) {
		pimg += *pd++;	
		TMS99X8_write(*pimg & 0xF0);
		NOP();
		NOP();
		NOP();
		NOP();
		NOP();
		NOP();
		TMS99X8_write(*pimg & 0xF0);
		NOP();
		NOP();
		NOP();
		NOP();
	}
}

static void push8_double_shadow_right(const uint16_t *pd) __z88dk_fastcall {
	const uint8_t *pimg = pimg_start;

	for (int row=0; row<4; row++) {
		pimg += *pd++;	
		TMS99X8_write(*pimg & 0xF0);
		NOP();
		NOP();
		NOP();
		NOP();
		NOP();
		NOP();
		NOP();
		NOP();
		TMS99X8_write(*pimg & 0xF0);
		NOP();
		NOP();
	}
	
	for (int colTile=1; colTile<8; colTile++) {
		for (int row=0; row<4; row++) {
			pimg += *pd++;	
			TMS99X8_write(*pimg);
			NOP();
			NOP();
			NOP();
			NOP();
			NOP();
			NOP();
			NOP();
			NOP();
			TMS99X8_write(*pimg);
			NOP();
			NOP();
		}
	}
}

#ifdef MSX
static void push8_single(const uint16_t *ps) __z88dk_fastcall; 


static void push8_double(const uint16_t *pd) __z88dk_fastcall;

static void push8_placeholder() {
	
	
	__asm
	_push8_single:
		ld (_temp_hl),hl
		ld (_temp_sp),sp
		ld sp, (_temp_hl)
		ld hl, (_pimg_start)
		
		ld c, #0x98
				
		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi
		
		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi
		
		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi
		
		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi
		
		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi
		
		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi
		
		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi
		
		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi
		
		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi
		
		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi
		
		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi
		
		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi
		
		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi
		
		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi
		
		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi
		
		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi

		pop de
		add hl, de
		outi		

		ld sp,(_temp_sp)
		ret

	_push8_double:
		ld (_temp_hl),hl
		ld (_temp_sp),sp
		ld sp, (_temp_hl)
		ld hl, (_pimg_start)
		
		pop de
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a
		
		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a
		
		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a
		
		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a
		
		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a
		
		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a
		
		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a
		
		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a
		
		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a
		
		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a
		
		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a
		
		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a
		
		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		pop de
		nop
		out (#0x98), a
		add hl, de
		ld a, (hl)
		out (#0x98), a

		ld sp,(_temp_sp)

		out (#0x98), a

		ret
	__endasm;
	
}



#else

static void push8_single(const uint16_t *ps) __z88dk_fastcall {
	const uint8_t *pimg = pimg_start;
	for (int colTile=0; colTile<8; colTile++) {
		for (int row=0; row<8; row++) {
			pimg += *ps++;	
			TMS99X8_write(*pimg);
			pimg++;
		}
	}
}

static void push8_double(const uint16_t *pd) __z88dk_fastcall {
	const uint8_t *pimg = pimg_start;
	for (int colTile=0; colTile<8; colTile++) {
		for (int row=0; row<4; row++) {
			pimg += *pd++;	
			TMS99X8_write(*pimg);
			NOP();
			NOP();
			TMS99X8_write(*pimg);
		}
	}
}

#endif

static void prepareCanvasFullWidth(uint16_t address) {

	address += MODE2_ADDRESS_PG;

    // Prepares the pattern table for 4x1 mode
    for (uint8_t i=0; i<12; i++) {
		TMS99X8_memset(address, 0xF0, 32*8);
		address += 32*8;
	}
}

static void printCanvasFullWidth(Car *player, uint16_t address) {
	
	uint8_t imap = ((player->a+8)/16)&3;
	
	uint16_t ipx, ipy;
	if (imap==0) {
		ipy = player->y;
		ipx = player->x;
		mapper_load_segment(MODULE_SEGMENT(track1_png_a, PAGE_C),PAGE_C);
		mapper_load_segment(MODULE_SEGMENT(track1_png_a, PAGE_C),PAGE_D);
	} else if (imap==1) {
		ipy = player->x;
		ipx = 63*255-player->y;
		mapper_load_segment(MODULE_SEGMENT(track1_png_b, PAGE_C),PAGE_C);
		mapper_load_segment(MODULE_SEGMENT(track1_png_b, PAGE_C),PAGE_D);
	} else if (imap==2) {
		ipy = 63*255-player->y;
		ipx = 63*255-player->x;
		mapper_load_segment(MODULE_SEGMENT(track1_png_c, PAGE_C),PAGE_C);
		mapper_load_segment(MODULE_SEGMENT(track1_png_c, PAGE_C),PAGE_D);
	} else if (imap==3) {
		ipy = 63*255-player->x;
		ipx = player->y;
		mapper_load_segment(MODULE_SEGMENT(track1_png_d, PAGE_C),PAGE_C);
		mapper_load_segment(MODULE_SEGMENT(track1_png_d, PAGE_C),PAGE_D);		
	}
	
	pimg_start = &track1_png_a[2*(64*(ipy/256)+(ipx/256))];

		
	TMS99X8_setPtr(address);
	
	uint8_t angleSelector = ((ipy/64)&3)*4*16+((ipx/64)&3)*16+((player->a+8)&15);
	mapper_load_segment((const uint8_t)all_angle_segments[angleSelector],PAGE_B);

	{
		const uint16_t *ps = (const uint16_t *)all_angle_single[angleSelector];
		for (uint8_t rowTile=0; rowTile<4; rowTile++) {
			for (uint8_t colGroup=0; colGroup<4; colGroup++) {
				push8_single(ps);
				ps += 64;
			}
		}
	}
	
	{
		const uint16_t *pd = (const uint16_t *)all_angle_double[angleSelector];
		for (uint8_t rowTile=0; rowTile<8; rowTile++) {
			for (uint8_t colGroup=0; colGroup<4; colGroup++) {
				push8_double(pd);
				pd += 32;
			}
		}
	}
}

static void prepareCanvasHalfWidth(uint16_t address) {

	address += MODE2_ADDRESS_PG;

    // Prepares the pattern table for 4x1 mode
    for (uint8_t i=0; i<12; i++) {
		TMS99X8_memset(address, 0xF0, 16*8);
		address += 32*8;
	}
	
	address -= 12*32*8;
	//address += 7*32*8 + 5*8;
	scratchpad[0] = 0b11110101;
	scratchpad[1] = 0b10101010;
	scratchpad[2] = 0b01010101;
	scratchpad[3] = 0b10101010;
	scratchpad[4] = 0b11110101;
	scratchpad[5] = 0b11111111;
	scratchpad[6] = 0b11111111;
	scratchpad[7] = 0b11111111;
	
	TMS99X8_memcpy(address + 7*32*8 + 7*8, scratchpad, 8);

	scratchpad[0] = 0b01011111;
	scratchpad[1] = 0b10101011;
	scratchpad[2] = 0b01010101;
	scratchpad[3] = 0b10101011;
	scratchpad[4] = 0b01011111;

	TMS99X8_memcpy(address + 7*32*8 + 8*8, scratchpad, 8);
}

static void printCanvasHalfWidth(Car *player, uint16_t address) {
	
	address += MODE2_ADDRESS_CT;
	
	uint8_t imap = ((player->a+8)/16)&3;
	
	uint16_t ipx, ipy;
	if (imap==0) {
		ipy = player->y;
		ipx = player->x;
		mapper_load_segment(MODULE_SEGMENT(track1_png_a, PAGE_C),PAGE_C);
		mapper_load_segment(MODULE_SEGMENT(track1_png_a, PAGE_C),PAGE_D);
	} else if (imap==1) {
		ipy = player->x;
		ipx = 63*255-player->y;
		mapper_load_segment(MODULE_SEGMENT(track1_png_b, PAGE_C),PAGE_C);
		mapper_load_segment(MODULE_SEGMENT(track1_png_b, PAGE_C),PAGE_D);
	} else if (imap==2) {
		ipy = 63*255-player->y;
		ipx = 63*255-player->x;
		mapper_load_segment(MODULE_SEGMENT(track1_png_c, PAGE_C),PAGE_C);
		mapper_load_segment(MODULE_SEGMENT(track1_png_c, PAGE_C),PAGE_D);
	} else if (imap==3) {
		ipy = 63*255-player->x;
		ipx = player->y;
		mapper_load_segment(MODULE_SEGMENT(track1_png_d, PAGE_C),PAGE_C);
		mapper_load_segment(MODULE_SEGMENT(track1_png_d, PAGE_C),PAGE_D);		
	}
	
	pimg_start = &track1_png_a[2*(64*(ipy/256)+(ipx/256))];

		
	uint8_t angleSelector = ((ipy/64)&3)*4*16+((ipx/64)&3)*16+((player->a+8)&15);
	mapper_load_segment((const uint8_t)all_angle_segments[angleSelector],PAGE_B);

	{
		const uint16_t *ps = (const uint16_t *)all_angle_single[angleSelector];
		for (uint8_t rowTile=0; rowTile<4; rowTile++) {
			TMS99X8_setPtr(address); address += 32*8;
			ps += 64;
			for (uint8_t colGroup=1; colGroup<3; colGroup++) {
				push8_single(ps);
				ps += 64;
			}
			ps += 64;
			
		}
	}
	
	{
		const uint16_t *pd = (const uint16_t *)all_angle_double[angleSelector];
		for (uint8_t rowTile=0; rowTile<3; rowTile++) {
			TMS99X8_setPtr(address); address += 32*8;
			pd += 32;
			for (uint8_t colGroup=1; colGroup<3; colGroup++) {
				push8_double(pd);
				pd += 32;
			}
			pd += 32;
		}

			TMS99X8_setPtr(address); address += 32*8;
			pd += 32;
			push8_double_shadow_left(pd);
			pd += 32;
			push8_double_shadow_right(pd);
			pd += 32;
			pd += 32;

		for (uint8_t rowTile=0; rowTile<4; rowTile++) {
			TMS99X8_setPtr(address); address += 32*8;
			pd += 32;
			for (uint8_t colGroup=1; colGroup<3; colGroup++) {
				push8_double(pd);
				pd += 32;
			}
			pd += 32;
		}
	}
}

void initInfoSprites_int() {

    static const uint8_t SPRITES[][32] = {{
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
    }, {
        0b01111000,
        0b10000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00000000,
        0b00000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b01000000,

        0b00000010,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000000,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000001,
        0b00011110,
    }, {
        0b00011111,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b10000000,

        0b10000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b00000000,
        0b00000000,
        0b00000001,

        0b10000000,
        0b00000000,
        0b00000000,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000001,

        0b00000001,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b11111000,
    }, {
        0b00000001,
        0b00000000,
        0b00000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b10000000,

        0b10000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00011111,

        0b11111000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000001,

        0b00000001,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000000,
        0b00000000,
        0b10000000,
    }, {
        0b01000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b00000000,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b10000000,
        0b01111000,

        0b00011110,
        0b00000001,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00000000,
        0b00000000,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000010,
    }, {
        0b11111111,
        0b11000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b10000000,

        0b10000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b10000000,
        0b11000000,
        0b11111111,

        0b11111111,
        0b00000011,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000001,

        0b00000001,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000001,
        0b00000011,
        0b11111111,
    }, {
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b10111111,
        0b10111111,
        0b10111111,
        0b10111111,

        0b10111111,
        0b10111111,
        0b10111111,
        0b10111111,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,

        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b11111000,
        0b11111110,
        0b11111111,
        0b11111111,

        0b11111111,
        0b11111111,
        0b11111110,
        0b11111000,
        0b00000000,
        0b00000000,
        0b00000000,
        0b00000000,
    }};
 
	yield();
    TMS99X8_setPtr(MODE2_ADDRESS_SG);
	yield();
    TMS99X8_memcpy32(SPRITES[0]);
	yield();
    TMS99X8_memcpy32(SPRITES[1]);
	yield();
    TMS99X8_memcpy32(SPRITES[2]);
	yield();
    TMS99X8_memcpy32(SPRITES[3]);
	yield();
    TMS99X8_memcpy32(SPRITES[4]);
	yield();
    TMS99X8_memcpy32(SPRITES[5]);
	yield();
    TMS99X8_memcpy32(SPRITES[6]);
}



uint8_t keyboard_line_read(uint8_t line) __z88dk_fastcall;

inline static void keyboard_line_read_placeholder(void) {
	
	__asm
	_keyboard_line_read:

		in a,(#0xAA)
		and #0xF0       ; only change bits 0-3
		or l            ; row 8
		out (#0xAA),a
		in a,(#0xA9)    ; read row into A
		xor #0xFF
		ld l,a

		ret
	__endasm;
}


int main(void) {

    // Normal initialization routine
    msxhal_init(); // Bare minimum initialization of the msx support 
    DI(); // This game has normally disabled interrupts. 

	
  //msxhal_request60Hz();
  //msxhal_enableR800();

    paged_isr.f = nullptr;
    msxhal_install_isr(main_isr);      

	initCanvas();

	{
		
		player0.x = 32*256;
		player0.y = 32*256;
		player0.vx = 0;
		player0.vy = 0;
		player0.a = 0;

		player1 = player0;
	}
	
	enable_keyboard_routine=0;
	
	prepareCanvasHalfWidth(0x000);
	prepareCanvasHalfWidth(0xC80);
	
	while (true) {
		
//		printCanvasFullWidth(MODE2_ADDRESS_CT+0x000);
//		printCanvasFullWidth(MODE2_ADDRESS_CT+0xC00);
		printCanvasHalfWidth(&player0, 0x000);
//		printCanvasHalfWidth(&player1, 0x080);
//		printCanvasHalfWidth(&player2, 0xC00);
		printCanvasHalfWidth(&player1, 0xC80);

//		wait_frame();

		{
		
			uint8_t k = keyboard_line_read(8);
			if (k & J_LEFT) { 
				
				player0.a+=63;
			}
			if (k & J_RIGHT) { 
				
				player0.a+=1;
			}
			player0.a = (player0.a&63);
			if (k & J_UP) { 
				
				player0.vx += sin[player0.a]>>3;
				player0.vy += cos[player0.a]>>3;
				//playervx += std::round(12*sin(playera/64. * 2 * M_PI));
				//playervy += std::round(12*cos(playera/64. * 2 * M_PI));
			}
			if (k & J_DOWN) { 

				if (player0.vx>0) {
					player0.vx -= (player0.vx+7)/8;
				} else {
					player0.vx -= (player0.vx-7)/8;
				}
				if (player0.vy>0) {
					player0.vy -= (player0.vy+7)/8;
				} else {
					player0.vy -= (player0.vy-7)/8;
				}

			}

			mapper_load_segment(MODULE_SEGMENT(track1_png_a, PAGE_C),PAGE_C);
			
			{
				uint8_t road = track1_png_a[2*(64*(player0.y/256)+(player0.x/256))]&0xF;
				if (road<2) {
					player0.vx = -player0.vx;
					player0.vy = -player0.vy;
				}
			}
			
			

			if (player0.vx>0) {
				player0.vx -= (player0.vx+15)/16;
			} else {
				player0.vx -= (player0.vx-15)/16;
			}
			if (player0.vy>0) {
				player0.vy -= (player0.vy+15)/16;
			} else {
				player0.vy -= (player0.vy-15)/16;
			}

			player0.x += player0.vx;
			player0.y += player0.vy;
		}

		{
			uint8_t l2 = keyboard_line_read(2);
			uint8_t l3 = keyboard_line_read(3);
			uint8_t l5 = keyboard_line_read(5);
			
			if (l2 & 0x40) { 
				
				player1.a+=63;
			}
			if (l3 & 0x02) { 
				
				player1.a+=1;
			}
			player1.a = (player1.a&63);
			if (l5 & 0x10) { 
				
				player1.vx += sin[player1.a]>>3;
				player1.vy += cos[player1.a]>>3;
				//playervx += std::round(12*sin(playera/64. * 2 * M_PI));
				//playervy += std::round(12*cos(playera/64. * 2 * M_PI));
			}
			if (l5 & 0x01) { 

				if (player1.vx>0) {
					player1.vx -= (player1.vx+7)/8;
				} else {
					player1.vx -= (player1.vx-7)/8;
				}
				if (player1.vy>0) {
					player1.vy -= (player1.vy+7)/8;
				} else {
					player1.vy -= (player1.vy-7)/8;
				}

			}

			mapper_load_segment(MODULE_SEGMENT(track1_png_a, PAGE_C),PAGE_C);
			
			{
				uint8_t road = track1_png_a[2*(64*(player1.y/256)+(player1.x/256))]&0xF;
				if (road<2) {
					player1.vx = -player1.vx;
					player1.vy = -player1.vy;
				}
			}
			
			

			if (player1.vx>0) {
				player1.vx -= (player1.vx+15)/16;
			} else {
				player1.vx -= (player1.vx-15)/16;
			}
			if (player1.vy>0) {
				player1.vy -= (player1.vy+15)/16;
			} else {
				player1.vy -= (player1.vy-15)/16;
			}

			player1.x += player1.vx;
			player1.y += player1.vy;
		}		
	}

    return 0;
}
