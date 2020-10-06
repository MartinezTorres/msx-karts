#include <common.h>

#include <push8.h>

ANGLE_SEGMENTS
ANGLE_SINGLE
ANGLE_DOUBLE
SIN_COS

static void full_prepare_canvas_int(uint16_t address) __z88dk_fastcall {


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

void full_prepare_canvas(uint16_t address) __z88dk_fastcall __nonbanked {
	ML_EXECUTE_A(full, full_prepare_canvas_int(address) ) ;
}

static void full_display_canvas_int(Car *player, uint16_t address) {
	
	address += MODE2_ADDRESS_CT + 32*8*2;

	uint8_t imap = ((player->a+8)/16)&3;
	
	uint16_t ipx, ipy;
	if (imap==0) {
		ipy = player->y;
		ipx = player->x;
		ML_LOAD_SEGMENT_C(ML_SEGMENT_C(track1_png_a));
		ML_LOAD_SEGMENT_D(ML_SEGMENT_C(track1_png_a));
	} else if (imap==1) {
		ipy = player->x;
		ipx = 63*255-player->y;
		ML_LOAD_SEGMENT_C(ML_SEGMENT_C(track1_png_b));
		ML_LOAD_SEGMENT_D(ML_SEGMENT_C(track1_png_b));
	} else if (imap==2) {
		ipy = 63*255-player->y;
		ipx = 63*255-player->x;
		ML_LOAD_SEGMENT_C(ML_SEGMENT_C(track1_png_c));
		ML_LOAD_SEGMENT_D(ML_SEGMENT_C(track1_png_c));
	} else {
		ipy = 63*255-player->x;
		ipx = player->y;
		ML_LOAD_SEGMENT_C(ML_SEGMENT_C(track1_png_d));
		ML_LOAD_SEGMENT_D(ML_SEGMENT_C(track1_png_d));
	}
	
	pimg_start = &track1_png_a[2*(64*(ipy/256)+(ipx/256))];

		
	TMS99X8_setPtr(address);
	
	uint8_t angleSelector = ((ipy/64)&3)*4*16+((ipx/64)&3)*16+((player->a+8)&15);
	ML_LOAD_SEGMENT_B((const uint8_t)all_angle_segments[angleSelector]);

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


void full_display_canvas(Car *player, uint16_t address) __nonbanked {
	ML_EXECUTE_A(full, full_display_canvas_int(player,address) ) ;
}
		


