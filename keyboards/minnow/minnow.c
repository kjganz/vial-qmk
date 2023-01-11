/* SPDX-License-Identifier: GPL-2.0-or-later */

#include "vial_rp2040.h"

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  {      1, NO_LED,      2, NO_LED,      3,      4, NO_LED,      5, NO_LED,      6 },
  { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
  {     12, NO_LED,     11, NO_LED,     10, NO_LED,      9, NO_LED,      8, NO_LED,      7 }
}, {
  // LED Index to Physical Position
  { 20,  0 }, { 60,  0 }, { 100,  0 }, { 124,  0 }, { 164,  0 }, { 204,  0 },
  { 20, 64 }, { 60, 64 }, { 100, 64 }, { 124, 64 }, { 164, 64 }, { 204, 64 },
}, {
  // LED Index to Flag
  LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW,
  LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW, LED_FLAG_UNDERGLOW
} };
