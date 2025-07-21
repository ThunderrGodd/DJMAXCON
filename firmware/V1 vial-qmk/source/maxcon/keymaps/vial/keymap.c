#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	LAYOUT(
		KC_TAB, 			KC_ENTER, 			KC_ESC,					
		KC_LSFT, KC_A, KC_R, KC_S, 	KC_E, KC_I, KC_O, KC_RSFT,
					KC_T, 			KC_N
		)
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    { ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(KC_UP, KC_DOWN) }
};