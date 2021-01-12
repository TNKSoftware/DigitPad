#include QMK_KEYBOARD_H

#define LED1 D3
#define LED2 D2


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_KP_1, KC_KP_2, KC_KP_3, \
		KC_KP_4, KC_KP_5, KC_KP_6, \
		KC_KP_7, KC_KP_8, KC_KP_9, \
		KC_KP_DOT, KC_KP_0, KC_KP_ENTER \
	),
	[1] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, \
		KC_TRNS, KC_TRNS, KC_TRNS, \
		KC_TRNS, KC_TRNS, KC_TRNS, \
		KC_TRNS, KC_TRNS, KC_TRNS \
	),
	[2] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, \
		KC_TRNS, KC_TRNS, KC_TRNS, \
		KC_TRNS, KC_TRNS, KC_TRNS, \
		KC_TRNS, KC_TRNS, KC_TRNS \
	),
	[3] = LAYOUT(
		KC_TRNS, KC_TRNS, KC_TRNS, \
		KC_TRNS, KC_TRNS, KC_TRNS, \
		KC_TRNS, KC_TRNS, KC_TRNS, \
		KC_TRNS, KC_TRNS, KC_TRNS \
	)
};

void keyboard_post_init_user(void) {
	setPinOutput(LED1);
	setPinOutput(LED2);
}

layer_state_t layer_state_set_user(layer_state_t state) {
	bool l1 = false, l2 = false;
	if(layer_state_cmp(state, 1)){
		l1 = true;
	}else if(layer_state_cmp(state, 2)){
		l2 = true;
	}else if(layer_state_cmp(state, 3)){
		l1 = true;
		l2 = true;
	}

	writePin(LED1, l1);
	writePin(LED2, l2);

    return state;
}