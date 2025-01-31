// Copyright 2021 Keyboard Dweebs (@doesntfazer)
// SPDX-License-Identifier: GPL-2.0-or-later
#include QMK_KEYBOARD_H

enum layer {
  DVORAK,
  NUMBER,
  SYMBOL,
  MOD,
};

#define PIPE KC_GRV  // |
#define QUOT KC_MINS // '
#define IQUE KC_EQL  // ¿
#define ACENT KC_LBRC // ´ (dead)
#define PLUS KC_RBRC // +
#define NTIL KC_SCLN // Ñ
#define LCBR KC_QUOT // {
#define RCBR KC_NUHS // }
#define LABK KC_NUBS // <
#define GUION KC_SLSH // -
#define GRADO S(PIPE) // °
#define EXLM S(KC_1)    // !
#define DQUO S(KC_2)    // "
#define NUMB S(KC_3)    // #
#define DLR  S(KC_4)    // $
#define PERC S(KC_5)    // %
#define AMPR S(KC_6)    // &
#define SLSH S(KC_7)    // /
#define LPRN S(KC_8)    // (
#define RPRN S(KC_9)    // )
#define EQL  S(KC_0)    // =
#define QUES S(QUOT) // ?
#define IEXL S(IQUE) // ¡
#define DIAE S(ACENT) // ¨ (dead)
#define ASTR S(PLUS) // *
#define LBRC S(LCBR) // [
#define RBRC S(RCBR) // ]
#define RABK S(LABK) // >
#define SCLN S(COMM) // ;
#define COLN S(DOT)  // :
#define UNDS S(GUION) // _
#define NOT  ALGR(PIPE) // ¬
#define BSLS ALGR(QUOT) // (backslash)
#define AT   ALGR(KC_Q)    // @
#define TILD ALGR(PLUS) // ~
#define CIRC ALGR(LCBR) // ^
#define GRV  ALGR(KC_NUHS) // `

// Tap Dance declarations
enum {
    TD_NTIL,
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
// Tap once for Escape, twice for Caps Lock
      [TD_NTIL] = ACTION_TAP_DANCE_DOUBLE(KC_N, NTIL),
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * DVORAK
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │  .  │  ,  │  W  │  P  │  Y  │       │  F  │  G  │  C  │  H  │  L  │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │  A  │  O  │  E  │  U  │  I  │       │  D  │  R  │  T  │ N/Ñ │  S  │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │  -  │  Q  │  J  │  K  │  X  │       │  B  │  M  │  '  │  V  │  Z  │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *                        ┌───┐                 ┌───┐
      *                        │ Bsp ├───┐   ┌───┤ Ent │
      *                        └───┤ Tab │   │ Spc ├───┘
      *                               └───┘   └───┘
      */
    [DVORAK] = LAYOUT_split_3x5_2(
        KC_DOT,  KC_COMM, KC_W,    KC_P,    KC_Y,                               KC_F,    KC_G,    KC_C,    KC_H,    KC_L,
        KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                               KC_D,    KC_R,    KC_T,    TD(TD_NTIL),    KC_S,
        GUION,   KC_Q,    KC_J,    KC_K,    KC_X,                               KC_B,    KC_M,    ACENT,   KC_V,    KC_Z,
                                            KC_BSPC, KC_TAB,           KC_SPC,  KC_ENT
    ),
    /*
      * NUMBER
      * ┌───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┐
      * │  .  │  ,  │  W  │  P  │  Y  │       │  F  │  7  │  8  │  9 │  L  │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │  A  │  O  │  E  │  U  │  I  │       │  D  │  4  │  5 │ N/Ñ │  S  │
      * ├───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┤
      * │  -  │  Q  │  J  │  K  │  X  │       │  B  │  M  │  '  │  V  │  Z  │
      * └───┴───┴───┴───┴───┘       └───┴───┴───┴───┴───┘
      *                        ┌───┐                 ┌───┐
      *                        │ Bsp ├───┐   ┌───┤ Ent │
      *                        └───┤ Tab │   │ Spc ├───┘
      *                               └───┘   └───┘
      */
    [NUMBER] = LAYOUT_split_3x5_2(
        KC_DOT,  KC_COMM, KC_W,    KC_P,    KC_Y,                               KC_F,    KC_G,    KC_C,    KC_H,    KC_L,
        KC_A,    KC_O,    KC_E,    KC_U,    KC_I,                               KC_D,    KC_R,    KC_T,    TD(TD_NTIL),    KC_S,
        GUION,   KC_Q,    KC_J,    KC_K,    KC_X,                               KC_B,    KC_M,    ACENT,   KC_V,    KC_Z,
                                            KC_BSPC, KC_TAB,           KC_SPC,  KC_ENT
    )
};
