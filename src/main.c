#include <common.h>

SIN_COS


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


static T_SA SA;
static void initCanvas() {

    // Activates mode 2 and clears the screen (in black)
    TMS99X8_activateMode2(); 

    // Places the tiles in a way that are consecutive
    {
        uint8_t i=0;
        do {
            scratchpad[i] = i;
        } while (++i != 0);
    }
    
    TMS99X8_memcpy_fast(MODE2_ADDRESS_PN0 + 0x0000, (const uint8_t *)scratchpad, 256);    
    TMS99X8_memcpy_fast(MODE2_ADDRESS_PN0 + 0x0100, (const uint8_t *)scratchpad, 256);    
    TMS99X8_memcpy_fast(MODE2_ADDRESS_PN0 + 0x0200, (const uint8_t *)scratchpad, 256);    

    // Prepares the pattern table for 4x1 mode
	TMS99X8_memset_fast(MODE2_ADDRESS_PG, 0x00, sizeof(T_PG));

	TMS99X8_memset_fast(MODE2_ADDRESS_CT, FWhite + BTransparent, sizeof(T_CT));

   	TMS99X8_setFlags(TMS99X8_M2 | TMS99X8_ENABLE | TMS99X8_GINT | TMS99X8_SI | TMS99X8_MEM416K);
}

static Car player0, player1, player2, player3;

enum    { J_RIGHT=0x80,J_DOWN=0x40,J_UP=0x20,J_LEFT=0x10,J_DEL=0x08,J_INS=0x04,J_HOME=0x02,J_SPACE=0x01 };

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

	car->leaning = 0;

	if (k & J_LEFT) { 
		
		car->a+=63;
		car->leaning = -1;

	}
	if (k & J_RIGHT) { 
		
		car->a+=1;
		car->leaning = 1;
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

	ML_LOAD_MODULE_C(track1_png_a);
	
	{
		uint8_t road = track1_png_a[2*(64*((car->y+128)/256)+((car->x+128)/256))]&0xF;
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
		player0.display_leaning = 0;
	}
	
	
	full_prepare_canvas(0x0600);
	
	while (true) {
		
		full_display_canvas(&player0, 0x600);

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
		player0.display_leaning = 0;

		player1 = player0;
	}
	
	
	full_prepare_canvas(0x000);
	full_prepare_canvas(0xC00);
	
	while (true) {
		
		full_display_canvas(&player0, 0x000);
		full_display_canvas(&player1, 0xC00);

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
		player0.display_leaning = 0;

		player1 = player0;
		player2 = player0;
	}
	
	
	half_prepare_canvas(0x000);
	half_prepare_canvas(0x080);
	half_prepare_canvas(0xC40);
	
	while (true) {
		
		half_display_canvas(&player0, 0x000);
		half_display_canvas(&player0, 0x000);
		half_display_canvas(&player1, 0x080);
		half_display_canvas(&player2, 0xC40);

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
		player0.display_leaning = 0;
		player0.color = 256*BLightBlue + BDarkBlue;

		player1 = player0;
		player1.color = 256*BLightRed + BMediumRed;

		player2 = player0;
		player2.color = 256*BLightYellow + BDarkYellow;

		player3 = player0;
		player3.color = 256*BWhite + BGray;
	}
	
	
	half_prepare_canvas(0x000);
	half_prepare_canvas(0x090);
	half_prepare_canvas(0xD00);
	half_prepare_canvas(0xD90);
	
	while (true) {
		
		half_display_canvas(&player0, 0x000);
		half_display_canvas(&player1, 0x090);
		half_display_canvas(&player2, 0xD00);
		half_display_canvas(&player3, 0xD90);

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

int main(void) __nonbanked {

//	msxhal_request60Hz();
    DI(); // This game has normally disabled interrupts. 

	ML_EXECUTE_A(main, 
		puts("Press 1-4:");
		while (true) {
			uint8_t k;
			
				k = keyboard_line_read(0);
				if (k==0x02) { play1(); }
				if (k==0x04) { play2(); }
				if (k==0x08) { play3(); }
				if (k==0x10) { play4(); }
			wait_frame();
		}
	);
    return 0;
}
