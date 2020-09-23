#include "common.h"

Tpaged_isr paged_isr;

static void main_isr(void) { 
	if (paged_isr.f != nullptr) IN_SEGMENT(paged_isr.seg, PAGE_B, (*paged_isr.f)() ); 
}


static void CHPUT(char c) __z88dk_fastcall;

static void asm_placeholder() __naked {
    
  	__asm
_CHPUT:
    ld a, l
	jp 0x00A2      ; call CHPUT
	__endasm;	
}

static void puts(const char *str) __z88dk_fastcall {
	
    while (*str) CHPUT(*str++);
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


    for (uint8_t i=0; i<2; i++) {
		TMS99X8_memset(MODE2_ADDRESS_PG + address, 0x00, 32*8);
		TMS99X8_memset(MODE2_ADDRESS_CT + address, 0x07, 32*8);
		address += 32*8;
	}


    // Prepares the pattern table for 4x1 mode
    for (uint8_t i=0; i<10; i++) {
		TMS99X8_memset(MODE2_ADDRESS_PG + address, 0xF0, 32*8);
		address += 32*8;
	}
}

static void printCanvasFullWidth(Car *player, uint16_t address) {
	
	address += MODE2_ADDRESS_CT + 32*8*2;

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
		for (uint8_t rowTile=0; rowTile<6; rowTile++) {
			for (uint8_t colGroup=0; colGroup<4; colGroup++) {
				push8_double(pd);
				pd += 32;
			}
		}
	}
}

static void prepareCanvasHalfWidth(uint16_t address) {

    for (uint8_t i=0; i<2; i++) {
		TMS99X8_memset(MODE2_ADDRESS_PG + address, 0x00, 16*8);
		TMS99X8_memset(MODE2_ADDRESS_CT + address, 0x07, 16*8);
		address += 32*8;
	}

    // Prepares the pattern table for 4x1 mode
    for (uint8_t i=0; i<10; i++) {
		TMS99X8_memset(MODE2_ADDRESS_PG + address, 0xF0, 16*8);
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
	
	TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 9*32*8 + 7*8, scratchpad, 8);

	scratchpad[0] = 0b01011111;
	scratchpad[1] = 0b10101011;
	scratchpad[2] = 0b01010101;
	scratchpad[3] = 0b10101011;
	scratchpad[4] = 0b01011111;

	TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 9*32*8 + 8*8, scratchpad, 8);
}

static void printCanvasHalfWidth(Car *player, uint16_t address) {
	
	address += MODE2_ADDRESS_CT + 32*8*2;
	
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

		for (uint8_t rowTile=0; rowTile<2; rowTile++) {
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

void updateCar(Car *car, uint8_t k) {

	if (k & J_LEFT) { 
		
		car->a+=63;
	}
	if (k & J_RIGHT) { 
		
		car->a+=1;
	}
	car->a = (car->a&63);
	if (k & J_UP) { 
		
		car->vx += sin[car->a]>>3;
		car->vy += cos[car->a]>>3;
		//playervx += std::round(12*sin(playera/64. * 2 * M_PI));
		//playervy += std::round(12*cos(playera/64. * 2 * M_PI));
	}
	if (k & J_DOWN) { 

		if (car->vx>0) {
			car->vx -= (car->vx+7)/8;
		} else {
			car->vx -= (car->vx-7)/8;
		}
		if (car->vy>0) {
			car->vy -= (car->vy+7)/8;
		} else {
			car->vy -= (car->vy-7)/8;
		}

	}

	mapper_load_segment(MODULE_SEGMENT(track1_png_a, PAGE_C),PAGE_C);
	
	{
		uint8_t road = track1_png_a[2*(64*(car->y/256)+(car->x/256))]&0xF;
		if (road<2) {
			car->vx = -car->vx;
			car->vy = -car->vy;
		}
	}
	
	

	if (car->vx>0) {
		car->vx -= (car->vx+15)/16;
	} else {
		car->vx -= (car->vx-15)/16;
	}
	if (car->vy>0) {
		car->vy -= (car->vy+15)/16;
	} else {
		car->vy -= (car->vy-15)/16;
	}

	car->x += car->vx;
	car->y += car->vy;	
}

void play1() {

	initCanvas();

	{
		
		player0.x = 32*256;
		player0.y = 32*256;
		player0.vx = 0;
		player0.vy = 0;
		player0.a = 0;
	}
	
	
	prepareCanvasFullWidth(0x0600);
	
	while (true) {
		
		printCanvasFullWidth(&player0, 0x600);

		uint8_t k = keyboard_line_read(8);
		updateCar(&player0,k);
	}
}


void play2() {

	initCanvas();

	{
		
		player0.x = 32*256;
		player0.y = 32*256;
		player0.vx = 0;
		player0.vy = 0;
		player0.a = 0;

		player1 = player0;
	}
	
	
	prepareCanvasFullWidth(0x000);
	prepareCanvasFullWidth(0xC00);
	
	while (true) {
		
		printCanvasFullWidth(&player0, 0x000);
		printCanvasFullWidth(&player1, 0xC00);

		{
		
			uint8_t k = keyboard_line_read(8);
			updateCar(&player0,k);
		}

		{
			uint8_t k = 0;
			uint8_t l2 = keyboard_line_read(2);
			uint8_t l3 = keyboard_line_read(3);
			uint8_t l5 = keyboard_line_read(5);
			
			if (l2 & 0x40) k+=J_LEFT;
			if (l3 & 0x02) k+=J_RIGHT;
			if (l5 & 0x10) k+=J_UP;
			if (l5 & 0x01) k+=J_DOWN;
			updateCar(&player1,k);
		}		
	}
}

void play3() {

	initCanvas();

	{
		
		player0.x = 32*256;
		player0.y = 32*256;
		player0.vx = 0;
		player0.vy = 0;
		player0.a = 0;

		player1 = player0;
		player2 = player0;
	}
	
	
	prepareCanvasHalfWidth(0x000);
	prepareCanvasHalfWidth(0x080);
	prepareCanvasHalfWidth(0xC40);
	
	while (true) {
		
		printCanvasHalfWidth(&player0, 0x000);
		printCanvasHalfWidth(&player0, 0x000);
		printCanvasHalfWidth(&player1, 0x080);
		printCanvasHalfWidth(&player2, 0xC40);

//		wait_frame();

		uint8_t l2 = keyboard_line_read(2);
		uint8_t l3 = keyboard_line_read(3);
		uint8_t l4 = keyboard_line_read(4);
		uint8_t l5 = keyboard_line_read(5);
		uint8_t l8 = keyboard_line_read(8);

		{
		
			uint8_t k = l8;
			updateCar(&player0,k);
		}

		{
			uint8_t k = 0;
			
			if (l2 & 0x40) k+=J_LEFT;
			if (l3 & 0x02) k+=J_RIGHT;
			if (l5 & 0x10) k+=J_UP;
			if (l5 & 0x01) k+=J_DOWN;
			updateCar(&player1,k);
		}		

		{
			uint8_t k = 0;
			
			if (l3 & 0x80) k+=J_LEFT;
			if (l4 & 0x02) k+=J_RIGHT;
			if (l3 & 0x40) k+=J_UP;
			if (l4 & 0x01) k+=J_DOWN;
			updateCar(&player2,k);
		}		
	}
}

void play4() {

	initCanvas();

	{
		
		player0.x = 32*256;
		player0.y = 32*256;
		player0.vx = 0;
		player0.vy = 0;
		player0.a = 0;

		player1 = player0;
		player2 = player0;
		player3 = player0;
	}
	
	
	prepareCanvasHalfWidth(0x000);
	prepareCanvasHalfWidth(0x080);
	prepareCanvasHalfWidth(0xC00);
	prepareCanvasHalfWidth(0xC80);
	
	while (true) {
		
		printCanvasHalfWidth(&player0, 0x000);
		printCanvasHalfWidth(&player1, 0x080);
		printCanvasHalfWidth(&player2, 0xC00);
		printCanvasHalfWidth(&player3, 0xC80);

//		wait_frame();

		uint8_t l2 = keyboard_line_read(2);
		uint8_t l3 = keyboard_line_read(3);
		uint8_t l4 = keyboard_line_read(4);
		uint8_t l5 = keyboard_line_read(5);
		uint8_t l8 = keyboard_line_read(8);

		{
		
			uint8_t k = l8;
			updateCar(&player0,k);
		}

		{
			uint8_t k = 0;
			
			if (l2 & 0x40) k+=J_LEFT;
			if (l3 & 0x02) k+=J_RIGHT;
			if (l5 & 0x10) k+=J_UP;
			if (l5 & 0x01) k+=J_DOWN;
			updateCar(&player1,k);
		}		

		{
			uint8_t k = 0;
			
			if (l3 & 0x80) k+=J_LEFT;
			if (l4 & 0x02) k+=J_RIGHT;
			if (l3 & 0x40) k+=J_UP;
			if (l4 & 0x01) k+=J_DOWN;
			updateCar(&player2,k);
		}		

		{
			uint8_t k = 0;
			
			if (l3 & 0x08) k+=J_LEFT;
			if (l3 & 0x20) k+=J_RIGHT;
			if (l5 & 0x02) k+=J_UP;
			if (l3 & 0x01) k+=J_DOWN;
			updateCar(&player3,k);
		}		
	}
}




int main(void) {

    // Normal initialization routine
    msxhal_init(); // Bare minimum initialization of the msx support 
    DI(); // This game has normally disabled interrupts. 

	
  //msxhal_request60Hz();
  //msxhal_enableR800();

    paged_isr.f = nullptr;
    msxhal_install_isr(main_isr);      

	enable_keyboard_routine=0;

	puts("Press 1-4:");
	while (true) {
		uint8_t k = keyboard_line_read(0);
		if (k==0x02) { play1(); }
		if (k==0x04) { play2(); }
		if (k==0x08) { play3(); }
		if (k==0x10) { play4(); }
		wait_frame();
	}
    return 0;
}
