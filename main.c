#include <gb/gb.h>
#include "alpha.c"
#include "helloWorld.c"
#include "blankScreen.c"
#include "sprites.c"

void init();
void checkInput();
void updateSwitches();

UINT8 player[2]; // `UINT8` is used instead of `int` U = UNSIGNED

void main() {

	init();
	
	while(1) {
		checkInput();
		updateSwitches(); // Make sure the SHOW_SPRITES and SHOW_BKG switches are on each loop
		wait_vbl_done();  // Avoids corrupting visual memory
		// Game code here
	}
}

void init() {
	DISPLAY_ON;		    // Turn on the display
	NR52_REG = 0x8F;	// Turn on the sound
	NR51_REG = 0x11;	// Enable the sound channels
	NR50_REG = 0x77;	// Increase the volume to its max
	set_bkg_data(0, 47, alpha); // Sets background tiles, all 48.
	// set_bkg_tiles(xpos, ypos, length, height);
	set_bkg_tiles(4, 8, 10, 2, helloWorld); // Adds my tiles in helloWorld.c
	set_bkg_tiles(0, 0, 20, 18, blankScreen);
	// Load the the 'sprites' tiles into sprite memory
	set_sprite_data(0, 1, sprites);
	set_sprite_tile(0, 0);
	
	player[0] = 80; // 0 = xpos
	player[1] = 72; // 1 = ypos
}

void updateSwitches() {
	HIDE_WIN;
	SHOW_SPRITES;
	SHOW_BKG;
}

void checkInput() {

    if (joypad() & J_B) {
		set_bkg_tiles(0, 0, 20, 18, blankScreen);
    }
	if (joypad() & J_UP) {
		player[1]--;
	}
	if (joypad() & J_DOWN) {
		player[1]++;
	}
	if (joypad() & J_LEFT) {
		player[0]--;
	}	
	if (joypad() & J_RIGHT) {
		player[0]++;
	}
	
	// Move the sprite in the first movable sprite list (0)
	// to xpos (player[0]) and ypos (player[1]).
	move_sprite(0, player[0], player[1]);

}