#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x5453 // "TS"
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    TNKSoftware
#define PRODUCT         DigitPad
#define DESCRIPTION     12key Programmable Pad 
/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 4

/* key matrix pins */
#define MATRIX_ROW_PINS { D1, D0, D4 }
#define MATRIX_COL_PINS { C6, D7, E6, B4 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* number of backlight levels */

#define BACKLIGHT_LEVELS 0

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
