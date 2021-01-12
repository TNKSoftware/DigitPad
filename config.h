#pragma once

#include "config_common.h"

#define VENDOR_ID       0x5453 // "TS"
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define MANUFACTURER    TNKSoftware
#define PRODUCT         DigitPad
#define DESCRIPTION     12key Programmable Pad 

#define MATRIX_ROWS 3
#define MATRIX_COLS 4

#define MATRIX_ROW_PINS { D1, D0, D4 }
#define MATRIX_COL_PINS { C6, D7, E6, B4 }
#define UNUSED_PINS

#define DIODE_DIRECTION ROW2COL

#define BACKLIGHT_LEVELS 0

#define DEBOUNCE 5

#define LOCKING_SUPPORT_ENABLE

#define LOCKING_RESYNC_ENABLE

#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
