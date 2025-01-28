#pragma once

#include <megalinker.h>

#include <hal/msxhal.h>
#include <hal/tms99X8.h>


#include "tracks/tracks_common.h"
#include "tracks/angles_common.h"


typedef struct {

	uint8_t turn_speed;
	uint8_t traction;
	uint8_t weight;
	uint8_t power;
	uint8_t torque;

} VehicleDescription;

typedef struct {
	uint16_t x, y;
	int16_t vx, vy;

	uint8_t angle;
	uint16_t angle_fine;

	uint16_t engine_revolution;

	uint16_t color;
	int8_t leaning, display_leaning;

	uint8_t is_active;
} Player;

static Player __at (0xD000) players[4] ;


enum    { J_RIGHT=0x80,J_DOWN=0x40,J_UP=0x20,J_LEFT=0x10,J_DEL=0x08,J_INS=0x04,J_HOME=0x02,J_SPACE=0x01 };


// car physics
void updateCarControls0(uint8_t k);
void updateCarControls1(uint8_t k);
void updateCarControls2(uint8_t k);
void updateCarControls3(uint8_t k);

void updateCarPhysics();


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
void half_display_canvas(Player *player, uint16_t address);

// full module
void full_prepare_canvas(uint16_t address) __z88dk_fastcall;
void full_display_canvas(Player *player, uint16_t address);


void init_player_sprites_int();
INLINE void init_player_sprites() { ML_EXECUTE_D(player_sprites, init_player_sprites_int(); ); }
