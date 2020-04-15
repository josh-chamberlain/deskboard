#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0006

/* key matrix pins */
#define MATRIX_ROW_PINS { A10, A9, B7, B6, B5, B4 }
#define MATRIX_COL_PINS { B1, B2, B3, B0, A4, A5, A6, A7, A8, A15, A13, A14, B12, B11, B10, B9, B15, B14, B13}
// #define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Encoder pins */
// #define ENCODERS_PAD_A { A2 }
// #define ENCODERS_PAD_B { A1 }
// #define ENCODER_RESOLUTION 4
