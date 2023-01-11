/* SPDX-License-Identifier: GPL-2.0-or-later */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_1, KC_2,
        KC_3, KC_4
    ),

    [1] = LAYOUT(
        KC_A, KC_B,
        KC_C, KC_D
    ),

    [2] = LAYOUT(
        KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS
    ),

    [3] = LAYOUT(
        KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
    [1] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI),           ENCODER_CCW_CW(RGB_SAD, RGB_SAI)  },
    [2] = { ENCODER_CCW_CW(RGB_VAD, RGB_VAI),           ENCODER_CCW_CW(RGB_SPD, RGB_SPI)  },
    [3] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD),          ENCODER_CCW_CW(KC_RIGHT, KC_LEFT) },
};
#endif
