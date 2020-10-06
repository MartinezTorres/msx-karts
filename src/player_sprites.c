#include <common.h>

uint8_t player_left[3][32];
uint8_t player_center[3][32];
uint8_t player_right[3][32];
uint8_t player_cart[32];

	
static uint8_t reverse8(uint8_t i) __z88dk_fastcall {
   
   register uint8_t b = i;
   b = (b & 0xF0) >> 4 | (b & 0x0F) << 4;
   b = (b & 0xCC) >> 2 | (b & 0x33) << 2;
   b = (b & 0xAA) >> 1 | (b & 0x55) << 1;
   return b;
}

void init_player_sprites_int() {

	player_center[0][0] = 0b00000000; player_center[0][ 8] = 0b00000000; player_center[0][16] = 0b00000000; player_center[0][24] = 0b00000000;
	player_center[0][1] = 0b00000000; player_center[0][ 9] = 0b00000000; player_center[0][17] = 0b00000000; player_center[0][25] = 0b00000000;
	player_center[0][2] = 0b00000000; player_center[0][10] = 0b00000011; player_center[0][18] = 0b11000000; player_center[0][26] = 0b00000000;
	player_center[0][3] = 0b00000000; player_center[0][11] = 0b00001111; player_center[0][19] = 0b11110000; player_center[0][27] = 0b00000000;
	player_center[0][4] = 0b00000000; player_center[0][12] = 0b00111111; player_center[0][20] = 0b11111100; player_center[0][28] = 0b00000000;
	player_center[0][5] = 0b00000000; player_center[0][13] = 0b01111111; player_center[0][21] = 0b11111110; player_center[0][29] = 0b00000000;
	player_center[0][6] = 0b00000000; player_center[0][14] = 0b11111111; player_center[0][22] = 0b11111111; player_center[0][30] = 0b00000000;
	player_center[0][7] = 0b00000000; player_center[0][15] = 0b11111111; player_center[0][23] = 0b11111111; player_center[0][31] = 0b00000000;
	
	player_center[1][0] = 0b00000001; player_center[1][ 8] = 0b11111111; player_center[1][16] = 0b11111111; player_center[1][24] = 0b10000000;
	player_center[1][1] = 0b00000001; player_center[1][ 9] = 0b11111111; player_center[1][17] = 0b11111111; player_center[1][25] = 0b10000000;
	player_center[1][2] = 0b00000001; player_center[1][10] = 0b11111111; player_center[1][18] = 0b11111111; player_center[1][26] = 0b10000000;
	player_center[1][3] = 0b00000001; player_center[1][11] = 0b11111111; player_center[1][19] = 0b11111111; player_center[1][27] = 0b10000000;
	player_center[1][4] = 0b00000001; player_center[1][12] = 0b11111111; player_center[1][20] = 0b11111111; player_center[1][28] = 0b10000000;
	player_center[1][5] = 0b00000000; player_center[1][13] = 0b11111111; player_center[1][21] = 0b11111111; player_center[1][29] = 0b00000000;
	player_center[1][6] = 0b00000000; player_center[1][14] = 0b11111111; player_center[1][22] = 0b11111111; player_center[1][30] = 0b00000000;
	player_center[1][7] = 0b00000000; player_center[1][15] = 0b01111111; player_center[1][23] = 0b11111110; player_center[1][31] = 0b00000000;

	player_center[2][0] = 0b00000011; player_center[2][ 8] = 0b11001111; player_center[2][16] = 0b11110011; player_center[2][24] = 0b11000000;
	player_center[2][1] = 0b00000111; player_center[2][ 9] = 0b11100000; player_center[2][17] = 0b00000111; player_center[2][25] = 0b11100000;
	player_center[2][2] = 0b00001111; player_center[2][10] = 0b11111111; player_center[2][18] = 0b11111111; player_center[2][26] = 0b11110000;
	player_center[2][3] = 0b00001100; player_center[2][11] = 0b11111111; player_center[2][19] = 0b11111111; player_center[2][27] = 0b00110000;
	player_center[2][4] = 0b00001000; player_center[2][12] = 0b11111111; player_center[2][20] = 0b11111111; player_center[2][28] = 0b00010000;
	player_center[2][5] = 0b00000000; player_center[2][13] = 0b11110000; player_center[2][21] = 0b00001111; player_center[2][29] = 0b00000000;
	player_center[2][6] = 0b00000111; player_center[2][14] = 0b11000000; player_center[2][22] = 0b00000011; player_center[2][30] = 0b11100000;
	player_center[2][7] = 0b00001111; player_center[2][15] = 0b00111100; player_center[2][23] = 0b00111100; player_center[2][31] = 0b11110000;

	player_left[0][0] = 0b00000000; player_left[0][ 8] = 0b00000000; player_left[0][16] = 0b00000000; player_left[0][24] = 0b00000000;
	player_left[0][1] = 0b00000000; player_left[0][ 9] = 0b00000000; player_left[0][17] = 0b00000000; player_left[0][25] = 0b00000000;
	player_left[0][2] = 0b00000000; player_left[0][10] = 0b00001111; player_left[0][18] = 0b00000000; player_left[0][26] = 0b00000000;
	player_left[0][3] = 0b00000000; player_left[0][11] = 0b00111111; player_left[0][19] = 0b11000000; player_left[0][27] = 0b00000000;
	player_left[0][4] = 0b00000000; player_left[0][12] = 0b11111111; player_left[0][20] = 0b11110000; player_left[0][28] = 0b00000000;
	player_left[0][5] = 0b00000001; player_left[0][13] = 0b11111111; player_left[0][21] = 0b11111000; player_left[0][29] = 0b00000000;
	player_left[0][6] = 0b00000011; player_left[0][14] = 0b11111111; player_left[0][22] = 0b11111100; player_left[0][30] = 0b00000000;
	player_left[0][7] = 0b00000011; player_left[0][15] = 0b11111111; player_left[0][23] = 0b11111100; player_left[0][31] = 0b00000000;
	
	player_left[1][0] = 0b00000111; player_left[1][ 8] = 0b11111111; player_left[1][16] = 0b11111110; player_left[1][24] = 0b00000000;
	player_left[1][1] = 0b00000111; player_left[1][ 9] = 0b11111111; player_left[1][17] = 0b11111110; player_left[1][25] = 0b00000000;
	player_left[1][2] = 0b00000111; player_left[1][10] = 0b11111111; player_left[1][18] = 0b11111110; player_left[1][26] = 0b00000000;
	player_left[1][3] = 0b00000111; player_left[1][11] = 0b11111111; player_left[1][19] = 0b11111110; player_left[1][27] = 0b00000000;
	player_left[1][4] = 0b00000111; player_left[1][12] = 0b11111111; player_left[1][20] = 0b11111110; player_left[1][28] = 0b00000000;
	player_left[1][5] = 0b00000011; player_left[1][13] = 0b11111111; player_left[1][21] = 0b11111100; player_left[1][29] = 0b00000000;
	player_left[1][6] = 0b00000011; player_left[1][14] = 0b11111111; player_left[1][22] = 0b11111100; player_left[1][30] = 0b10000000;
	player_left[1][7] = 0b00000001; player_left[1][15] = 0b11111111; player_left[1][23] = 0b11111001; player_left[1][31] = 0b10000000;

	player_left[2][0] = 0b00000000; player_left[2][ 8] = 0b10111111; player_left[2][16] = 0b11011111; player_left[2][24] = 0b10000000;
	player_left[2][1] = 0b00000011; player_left[2][ 9] = 0b11000000; player_left[2][17] = 0b00111111; player_left[2][25] = 0b00000000;
	player_left[2][2] = 0b00000111; player_left[2][10] = 0b11111111; player_left[2][18] = 0b11111110; player_left[2][26] = 0b00000000;
	player_left[2][3] = 0b00001111; player_left[2][11] = 0b11111111; player_left[2][19] = 0b11111100; player_left[2][27] = 0b00000000;
	player_left[2][4] = 0b00001100; player_left[2][12] = 0b11111111; player_left[2][20] = 0b11111100; player_left[2][28] = 0b00000000;
	player_left[2][5] = 0b00001000; player_left[2][13] = 0b11110000; player_left[2][21] = 0b00001111; player_left[2][29] = 0b00000000;
	player_left[2][6] = 0b00000111; player_left[2][14] = 0b11000000; player_left[2][22] = 0b00000011; player_left[2][30] = 0b11100000;
	player_left[2][7] = 0b00001111; player_left[2][15] = 0b00111100; player_left[2][23] = 0b00111100; player_left[2][31] = 0b11110000;

	for (uint8_t i=0; i<3; i++) {
		for (uint8_t j=0; j<8; j++) {
			player_right[i][j     ] = reverse8(player_left[i][j + 24]);
			player_right[i][j +  8] = reverse8(player_left[i][j + 16]);
			player_right[i][j + 16] = reverse8(player_left[i][j +  8]);
			player_right[i][j + 24] = reverse8(player_left[i][j +  0]);
		}
	}

	player_cart[0] = 0b00111111; player_cart[ 8] = 0b01111110; player_cart[16] = 0b01111110; player_cart[24] = 0b11111100;
	player_cart[1] = 0b01111111; player_cart[ 9] = 0b11000011; player_cart[17] = 0b11000011; player_cart[25] = 0b11111110;
	player_cart[2] = 0b01111111; player_cart[10] = 0b00000000; player_cart[18] = 0b00000000; player_cart[26] = 0b11111110;
	player_cart[3] = 0b01111111; player_cart[11] = 0b00000000; player_cart[19] = 0b00000000; player_cart[27] = 0b11111110;
	player_cart[4] = 0b01111111; player_cart[12] = 0b00000000; player_cart[20] = 0b00000000; player_cart[28] = 0b11111110;
	player_cart[5] = 0b01111111; player_cart[13] = 0b00000000; player_cart[21] = 0b00000000; player_cart[29] = 0b11111110;
	player_cart[6] = 0b01111111; player_cart[14] = 0b00000000; player_cart[22] = 0b00000000; player_cart[30] = 0b11111110;
	player_cart[7] = 0b00111110; player_cart[15] = 0b11111111; player_cart[23] = 0b11111111; player_cart[31] = 0b01111100;
}
