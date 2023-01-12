/* SPDX-License-Identifier: GPL-2.0-or-later */

#include "minnow.h"

led_config_t g_led_config = {
    {
        // Key Matrix to LED Index
        {      0, NO_LED,      1, NO_LED,      2,              3, NO_LED,      4, NO_LED,      5 },
        { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
        { NO_LED, NO_LED, NO_LED, NO_LED, NO_LED,         NO_LED, NO_LED, NO_LED, NO_LED, NO_LED },
        {     11, NO_LED,     10, NO_LED,      9, NO_LED,      8, NO_LED,      7, NO_LED,      6 }
    },
    {
        // LED Index to Physical Position
        { 20,  0 }, { 60,  0 }, { 100,  0 }, { 124,  0 }, { 164,  0 }, { 204,  0 },
        { 20, 64 }, { 60, 64 }, { 100, 64 }, { 124, 64 }, { 164, 64 }, { 204, 64 }
    },
    {
        // LED Index to Flag
        1, 1, 1, 1, 1, 1,
        1, 1, 1, 1, 1, 1
    }
};
