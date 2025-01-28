#include <common.h>

#include <push8.h>

ANGLE_SEGMENTS
ANGLE_SINGLE
ANGLE_DOUBLE
SIN_COS

static void half_prepare_canvas_int(uint16_t address) __z88dk_fastcall {

    for (uint8_t i=0; i<1; i++) {
		TMS99X8_memset(MODE2_ADDRESS_PG + address + i*32*8, 0x00, 16*8-16);
		TMS99X8_memset(MODE2_ADDRESS_CT + address + i*32*8, 0x07, 16*8-16);
	}

    // Prepares the pattern table for 4x1 mode
    for (uint8_t i=1; i<11; i++) {
		TMS99X8_memset(MODE2_ADDRESS_PG + address + i*32*8, 0xF0, 16*8-16);
	}

    for (uint8_t i=5; i<5+4; i++) {
		TMS99X8_memset(MODE2_ADDRESS_PG + address + i*32*8 + 5*8, 0xFF, 4*8-16);
	}
	
	init_player_sprites();
	
	TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 6*32*8 + 5*8, player_center[0], 4*8);
	TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 7*32*8 + 5*8, player_center[1], 4*8);
	TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 8*32*8 + 5*8, player_center[2], 4*8);
	TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 9*32*8 + 5*8, player_cart, 4*8);
}

void half_prepare_canvas(uint16_t address) __z88dk_fastcall __nonbanked {
	ML_EXECUTE_A(half, half_prepare_canvas_int(address) ) ;
}

static void half_display_canvas_pure(uint8_t angleSelector, uint8_t addressh, uint8_t addressl) {
	
	{
		ML_LOAD_SEGMENT_B((const uint8_t)all_angle_segments[angleSelector]);
	}

	{
		register const uint16_t *ps = (const uint16_t *)all_angle_single[angleSelector];
		REPEAT(4, 
			writeVDP1(addressl); writeVDP1(addressh); addressh++;
			ps += 64 + 8;
			ps = push14_single(ps);
			ps += 64 + 8;
			
		);
	}
	
	{
		register const uint16_t *pd = (const uint16_t *)all_angle_double[angleSelector];
		REPEAT(1, 
			writeVDP1(addressl); writeVDP1(addressh); addressh++;
			pd += 32+4;
			pd = push14_double(pd);
			pd += 32+4;
		);
		REPEAT(2, 
			writeVDP1(addressl); writeVDP1(addressh); addressh++;
			pd += 32+4;
			pd = push5_double(pd);
			pd = push4_double_black(pd);
			pd = push5_double(pd);
			pd += 32+4;
		);
		REPEAT(1, 
			writeVDP1(addressl); writeVDP1(addressh); addressh++;
			pd += 32+4;
			pd = push5_double(pd);
			pd = push4_double_sprite_top(pd);
			pd = push5_double(pd);
			pd += 32+4;
		);
		REPEAT(1, 
			writeVDP1(addressl); writeVDP1(addressh); addressh++;
			pd += 32+4;
			pd = push5_double(pd);
			pd = push4_double_sprite_bottom(pd);
			pd = push5_double(pd);
			pd += 32+4;
		);
		REPEAT(1, 
			writeVDP1(addressl); writeVDP1(addressh); addressh++;
			pd += 32+4;
			pd = push14_double(pd);
			pd += 32+4;
		);
	}
}


static void half_display_canvas_int(Player *player, uint16_t address) {

	if (player->leaning != player->display_leaning) {
		int8_t l = player->leaning;
		
		if (player->display_leaning != 0)  {
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 6*32*8 + 5*8, player_center[0], 4*8);
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 7*32*8 + 5*8, player_center[1], 4*8);
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 8*32*8 + 5*8, player_center[2], 4*8);
			player->display_leaning = 0;
		} else if (l==-1) {
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 6*32*8 + 5*8, player_left[0], 4*8);
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 7*32*8 + 5*8, player_left[1], 4*8);
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 8*32*8 + 5*8, player_left[2], 4*8);
			player->display_leaning = l;
		} else if (l==1) {
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 6*32*8 + 5*8, player_right[0], 4*8);
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 7*32*8 + 5*8, player_right[1], 4*8);
			TMS99X8_memcpy(MODE2_ADDRESS_PG + address + 8*32*8 + 5*8, player_right[2], 4*8);
			player->display_leaning = l;
		}
	}
	
	address += MODE2_ADDRESS_CT + 32*8*1;
	
	uint8_t imap = ((player->angle+8)/16)&3;
	
	uint8_t xx = player->x/256;
	uint8_t yy = (player->y/256);
	uint8_t ipx, ipy;
	if (imap==0) { // Looking to the left
		ipx = yy;
		ipy = xx;
		ML_LOAD_SEGMENT_C(ML_SEGMENT_C(track1_png_a));
		ML_LOAD_SEGMENT_D(ML_SEGMENT_C(track1_png_a));
	} else if (imap==1) { // Looking to the top
		ipx = 255-xx;
		ipy = yy;
		ML_LOAD_SEGMENT_C(ML_SEGMENT_C(track1_png_b));
		ML_LOAD_SEGMENT_D(ML_SEGMENT_C(track1_png_b));
	} else if (imap==2) {
		ipx = 255-yy;
		ipy = 255-xx;
		ML_LOAD_SEGMENT_C(ML_SEGMENT_C(track1_png_c));
		ML_LOAD_SEGMENT_D(ML_SEGMENT_C(track1_png_c));
	} else {
		ipx = xx;
		ipy = 255-yy;
		ML_LOAD_SEGMENT_C(ML_SEGMENT_C(track1_png_d));
		ML_LOAD_SEGMENT_D(ML_SEGMENT_C(track1_png_d));
	}
	
	tmp_car_color = player->color;
	pimg_start = &track1_png_a[2*(64*((uint8_t)(ipy/4))+((uint8_t)(ipx/4)))];

	// WRONG PART THIS
//	uint8_t angleSelector = ((player->a+8)&15); //((ipy/256)&3)*4*16+((ipx/256)&3)*16+((player->a+8)&15);
//	uint8_t angleSelector = ((ipy/256)&3)*4*16+((ipx/256)&3)*16+((player->a+8)&15);
//	uint8_t angleSelector = 8; //((ipy/256)&3)*4*16+((ipx/256)&3)*16;
	uint8_t angleSelector = (ipy&3)*4*16+(ipx&3)*16+((player->angle+8)&15);
	half_display_canvas_pure(angleSelector, (address>>8) | 0x40, address&0xFF);
}

void half_display_canvas(Player *player, uint16_t address) __nonbanked {
	ML_EXECUTE_A(half, half_display_canvas_int(player,address) ) ;
}
