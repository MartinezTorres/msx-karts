#pragma once

#include <megalinker.h>

#include <hal/msxhal.h>
#include <hal/tms99X8.h>


#include "tracks/tracks_common.h"
#include "tracks/angles_common.h"


typedef struct {
	uint16_t x, y;
	int16_t vx, vy;
	uint8_t a;
	uint16_t color;
	int8_t leaning, display_leaning;
} Car;


// ram module;
extern const uint8_t *pimg_start;
extern uint8_t scratchpad[256];
extern uint16_t tmp_car_color;

extern uint8_t player_left[3][32];
extern uint8_t player_center[3][32];
extern uint8_t player_right[3][32];
extern uint8_t player_cart[32];

// half module
void half_prepare_canvas(uint16_t address) __z88dk_fastcall;
void half_display_canvas(Car *player, uint16_t address);

// full module
void full_prepare_canvas(uint16_t address) __z88dk_fastcall;
void full_display_canvas(Car *player, uint16_t address);


void init_player_sprites_int();
INLINE void init_player_sprites() {
	ML_EXECUTE_D(player_sprites, init_player_sprites_int(); );
}
