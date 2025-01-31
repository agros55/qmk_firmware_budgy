// Copyright 2021 Keyboard Dweebs (@doesntfazer)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum layer {
DVORAK,
SYMBOL,
NUMBER,
MOD,
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │  .  │  ,  │  W  │  P  │  Y  │       │  F  │  G  │  C  │  H  │  L  │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │  A  │  O  │  E  │  U  │  I  │       │  D  │  R  │  T  │ N/Ñ │  S  │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │  -  │  Q  │  J  │  K  │  X  │       │  B  │  M  │  '  │  V  │  Z  │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *                        ┌───┐                ┌───┐
      *                        │ Bsp ├───┐   ┌───┤ Ent │
      *                        └───┤ Tab │   │ Spc ├───┘
      *                               └───┘   └───┘
      */
    [DVORAK] = LAYOUT_split_3x5_2(
        KC_DOT,  KC_COMM, KC_W,    KC_P,    KC_Y,                               KC_F,    KC_G,    KC_C,    KC_H,    KC_L,
        KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                               KC_D,    KC_R,    KC_T,    NTIL,    KC_S,
        KC_Z,    KC_Q,    KC_J,    KC_K,    KC_X,                               KC_B,    KC_M,    ACENT,   KC_V,    KC_Z,
                                            KC_BSPC, KC_TAB,           KC_SPC,  KC_ENT
    )
};
