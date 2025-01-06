/*
Copyright 2022 @Yowkees
Copyright 2022 MURAOKA Taro (aka KoRoN, @kaoriya)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

#include "quantum.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // keymap for default (VIA)
  [0] = LAYOUT_universal(
    KC_TAB, KC_Q , KC_W, KC_E, KC_R, KC_T,                                  KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
    CTL_T(KC_ESC), KC_A , KC_S, KC_D, KC_F, KC_G,                           KC_H, KC_J, KC_K, KC_L, KC_SCLN, LT(1,KC_QUOT),
    KC_LSFT, KC_Z , KC_X, KC_C, KC_V, KC_B,                                 KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
    _______, _______, KC_LGUI, LT(2,KC_LNG2),LT(1,KC_SPC),                  LT(4, KC_ENT), LT(3,KC_LNG1), _______, _______, KC_RALT
    // tab, q, w, e, r, t,                                                  y, u, i, o, p, bspc
    // esc, a, s, d, f, g,                                                  h, j, k, l, ;, hold:layer5 tap:'
    // shift, z, x, c, v, b,                                                n, m, ,, ., /, rshift
    // command, hold:layer2 tap:lng2, hold:layer1 tap:lng1, space,          hold:layer4 tap:ent, hold:layer2 tap:lng1, alt
  ),

  [1] = LAYOUT_universal(
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                   _______, KC_MS_BTN1, KC_MS_BTN2, SCRL_MO, KC_MS_BTN3, _______,
    _______, _______, _______, _______, _______, _______,                   _______, KC_MS_BTN4, KC_MS_BTN5, _______, _______, _______,
    _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______
    // ___, ___, ___, ___, ___, ___,                                        ___, ___, ___, ___, ___, ___,
    // ___, ___, ___, ___, ___, ___,                                        ___, mouse btn1, mouse btn2, scroll mode, mouse btn3, ___,
    // ___, ___, ___, ___, ___, ___,                                        ___, mouse btn4, mouse btn5, ___, ___, ___,
    // ___, ___, ___, ___, ___, ___,                                        ___, ___, ___, ___, ___, ___,
  ),

  [2] = LAYOUT_universal(
    KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
    _______, _______, _______, _______, _______, _______,                   KC_BSLS, KC_PLUS, KC_PEQL, KC_LCBR, KC_RCBR, KC_MINS,
    _______, _______, _______, _______, _______, _______,                   KC_PIPE, _______, _______, KC_LBRC, KC_RBRC, KC_UNDS,
    _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______
    // ~, !, @, #, $, %,                                                    ^, &, *, (, ), ___
    // ___, ___, ___, ___, ___, ___,                                        \, +, =, {, }, -
    // ___, ___, ___, ___, ___, ___,                                        |, ___, ___, [, ], _
  ),

  [3] = LAYOUT_universal(
    KC_GRV, KC_P1, KC_P2, KC_P3, KC_P4, KC_P5,                              KC_P6, KC_P7, KC_P8, KC_P9, KC_P0, _______,
    _______, _______, _______, _______, _______, _______,                   KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, C(KC_LEFT), C(KC_RIGHT),
    _______, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,                             KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, _______,
    _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______
    // `, 1, 2, 3, 4, 5,                                                     6, 7, 8, 9, 0, ___
    // ___, ___, ___, ___, ___, ___,                                        left, down, up, right, left, right
    // ___, f1, f2, f3, f4, f5,                                              f6, f7, f8, f9, f10, ___
    // ___, ___, ___, ___, ___, ___,                                        ___, ___, ___, ___, ___, ___,
  ),

  [4] = LAYOUT_universal(
    KBC_RST, KBC_SAVE, CPI_I100, CPI_D100, CPI_I1K, CPI_D1K,                SCRL_TO, SCRL_MO, SCRL_DVI, SCRL_DVD, AML_TO, _______,
    _______, AML_I50, AML_D50, SSNP_VRT, SSNP_HOR, SSNP_FRE,                _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______
    // kb 0, kb 1, kb 2, kb 3, kb 4, kb 5,                                  kb 6, kb 7, kb 8, kb 9, kb 10, kb 11,
    // ___, kb 11, kb 12, kb 13, kb 14, kb 15,                              ___, ___, ___, ___, ___, ___,
    // ___, ___, ___, ___, ___, ___,                                        ___, ___, ___, ___, ___, ___,
    // ___, ___, ___, ___, ___, ___,                                        ___, ___, ___, ___, ___, ___,
  ),

  // MEMO: layer5の導線が無いけど一旦このままにして使って不要なら削除する
  [5] = LAYOUT_universal(
    _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______, _______,                   _______, KC_MS_BTN1, KC_MS_BTN2, _______, KC_MS_BTN3, _______,
    _______, _______, _______, _______, _______, _______,                   _______, KC_MS_BTN4, KC_MS_BTN5, _______, _______, _______,
    _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______
    // ___, ___, ___, ___, ___, ___,                                        ___, ___, ___, ___, ___, ___,
    // ___, ___, ___, ___, ___, ___,                                        ___, mouse btn1, mouse btn2, scroll mode, mouse btn3, ___,
    // ___, ___, ___, ___, ___, ___,                                        ___, mouse btn4, mouse btn5, ___, ___, ___,
    // ___, ___, ___, ___, ___, ___,                                        ___, ___, ___, ___, ___, ___,
  ),

  // layerを追加するときはこれをコピーして使う
  // _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  // _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  // _______, _______, _______, _______, _______, _______,                   _______, _______, _______, _______, _______, _______,
  // _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______

};
// clang-format on

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 5
    keyball_set_scroll_mode(get_highest_layer(state) == 5);
    return state;
}

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif
