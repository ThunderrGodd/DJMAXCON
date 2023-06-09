// Copyright 2023 ThunderrGodd (@ThunderrGodd)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define ENCODER_RESOLUTION 2


#define RGB_DI_PIN GP9
#define RGB_MATRIX_LED_COUNT 11
#define DRIVER_LED_TOTAL 11
#define WS2812_PIO_USE_PIO1
	

#define FORCE_NKRO
#define USB_POLLING_INTERVAL_MS 1
#define DEBOUNCE 4


/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
