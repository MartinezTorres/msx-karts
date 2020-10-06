#include <common.h>

#include <push8.h>

ANGLE_SEGMENTS
ANGLE_SINGLE
ANGLE_DOUBLE
SIN_COS

static void half_prepare_canvas_int(uint16_t address) __z88dk_fastcall {

    for (uint8_t i=0; i<2; i++) {
		TMS99X8_memset(MODE2_ADDRESS_PG + address + i*32*8, 0x00, 16*8-16);
		TMS99X8_memset(MODE2_ADDRESS_CT + address + i*32*8, 0x07, 16*8-16);
	}

    // Prepares the pattern table for 4x1 mode
    for (uint8_t i=2; i<12; i++) {
		TMS99X8_memset(MODE2_ADDRESS_PG + address + i*32*8, 0xF0, 16*8-16);
	}

    for (uint8_t i=6; i<6+4; i++) {
		TMS99X8_memset(MODE2_ADDRESS_PG + address + i*32*8 + 5*8, 0xFF, 4*8-16);
	}
	
	init_player_sprites();
	
	TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 7*32*8 + 5*8, player_center[0], 4*8);
	TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 8*32*8 + 5*8, player_center[1], 4*8);
	TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 9*32*8 + 5*8, player_center[2], 4*8);
	TMS99X8_memcpy(MODE2_ADDRESS_PG + address +10*32*8 + 5*8, player_cart, 4*8);
}

void half_prepare_canvas(uint16_t address) __z88dk_fastcall __nonbanked {
	ML_EXECUTE_A(half, half_prepare_canvas_int(address) ) ;
}

static uint16_t address_pure;
static const uint16_t *pd_pure;

static void half_display_canvas_pure() {

	{
		
		REPEAT(1, 
			TMS99X8_setPtr(address_pure); address_pure += 32*8;
			pd_pure += 32+4;
			push7_double(pd_pure);
			pd_pure += 32-4;
			push7_double(pd_pure);
			pd_pure += 32-4;
			pd_pure += 32+4;
		);
		REPEAT(2, 
			TMS99X8_setPtr(address_pure); address_pure += 32*8;
			pd_pure += 32+4;
			push5_double(pd_pure);
			pd_pure += 24-4;
			push4_double_black(pd_pure);
			pd_pure += 16;
			push5_double(pd_pure);
			pd_pure += 24-4;
			pd_pure += 32+4;
		);
		REPEAT(1, 
			TMS99X8_setPtr(address_pure); address_pure += 32*8;
			pd_pure += 32+4;
			push5_double(pd_pure);
			pd_pure += 24-4;
			push4_double_sprite_top_blue(pd_pure);
			pd_pure += 16;
			push5_double(pd_pure);
			pd_pure += 24-4;
			pd_pure += 32+4;
		);
		REPEAT(1, 
			TMS99X8_setPtr(address_pure); address_pure += 32*8;
			pd_pure += 32+4;
			push5_double(pd_pure);
			pd_pure += 24-4;
			push4_double_sprite_bottom_blue(pd_pure);
			pd_pure += 16;
			push5_double(pd_pure);
			pd_pure += 24-4;
			pd_pure += 32+4;
		);
		REPEAT(1, 
			TMS99X8_setPtr(address_pure); address_pure += 32*8;
			pd_pure += 32+4;
			push7_double(pd_pure);
			pd_pure += 32-4;
			push7_double(pd_pure);
			pd_pure += 32-4;
			pd_pure += 32+4;
		);
	}
}


static void half_display_canvas_int(Car *player, uint16_t address) {

	if (player->leaning != player->display_leaning) {
		int8_t l = player->leaning;
		
		if (player->display_leaning != 0)  {
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 7*32*8 + 5*8, player_center[0], 4*8);
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 8*32*8 + 5*8, player_center[1], 4*8);
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 9*32*8 + 5*8, player_center[2], 4*8);
			player->display_leaning = 0;
		} else if (l==-1) {
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 7*32*8 + 5*8, player_left[0], 4*8);
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 8*32*8 + 5*8, player_left[1], 4*8);
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 9*32*8 + 5*8, player_left[2], 4*8);
			player->display_leaning = l;
		} else if (l==1) {
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 7*32*8 + 5*8, player_right[0], 4*8);
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 8*32*8 + 5*8, player_right[1], 4*8);
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 9*32*8 + 5*8, player_right[2], 4*8);
			player->display_leaning = l;
		}
	}
	
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

		
	uint8_t angleSelector = ((ipy/64)&3)*4*16+((ipx/64)&3)*16+((player->a+8)&15);
	ML_LOAD_SEGMENT_B((const uint8_t)all_angle_segments[angleSelector]);

	{
		const uint16_t *ps = (const uint16_t *)all_angle_single[angleSelector];
		REPEAT(4, 
			TMS99X8_setPtr(address); address += 32*8;
			ps += 64 + 8;
			push7_single(ps);
			ps += 64 - 8;
			push7_single(ps);
			ps += 64 - 8;
			ps += 64 + 8;
			
		);
	}
	
	address_pure = address;
	pd_pure = (const uint16_t *)all_angle_double[angleSelector];
	half_display_canvas_pure();
}

void half_display_canvas(Car *player, uint16_t address) __nonbanked {
	ML_EXECUTE_A(half, half_display_canvas_int(player,address) ) ;
}
