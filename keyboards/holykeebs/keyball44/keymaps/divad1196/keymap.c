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
    KC_TAB   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                        KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_DEL   ,
    HOME_ESC , HOME_A   , HOME_S   , HOME_D   , HOME_F   , KC_G     ,                                        KC_H     , HOME_J   , HOME_K   , HOME_L   , HOME_SCLN, KC_QUOT  ,
    KC_LSFT  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     ,                                        KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_RSFT  ,
                KC_LALT,KC_LGUI,LCTL_T(_______)    ,LT(1,KC_SPC),LT(3,KC_RALT),                  KC_BSPC,LT(2,KC_ENT), _______,     _______  , SCRL_TO
  ),

  [1] = LAYOUT_universal(
    SSNP_FRE ,  KC_F1   , KC_F2    , KC_F3   , KC_F4    , KC_F5    ,                                         KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   ,
    SSNP_VRT ,  SCRL_TO , SCRL_MO  , KC_UP   , KC_ENT   , KC_DEL   ,                                         KC_PGUP  , KC_BTN1  , KC_UP    , KC_BTN2  , KC_BTN3  , KC_F12   ,
    SSNP_HOR ,  _______ , KC_LEFT  , KC_DOWN , KC_RGHT  , KC_BSPC  ,                                         KC_PGDN  , KC_LEFT  , KC_DOWN  , KC_RGHT  , _______  , _______  ,
                  _______  , _______ , _______  ,         _______  , _______  ,                   TO(0)  , SCRL_TO  , _______       , _______  , _______
  ),

  [2] = LAYOUT_universal(
    _______  ,S(KC_QUOT), KC_7     , KC_8    , KC_9     , S(KC_8)  ,                                         S(KC_9)  , S(KC_1)  , S(KC_6)  , KC_LBRC  , S(KC_4)  , _______  ,
    _______  ,S(KC_SCLN), KC_4     , KC_5    , KC_6     , KC_RBRC  ,                                         KC_NUHS  , KC_MINS  , S(KC_EQL), S(KC_3)  , KC_QUOT  , S(KC_2)  ,
    _______  ,S(KC_MINS), KC_1     , KC_2    , KC_3     ,S(KC_RBRC),                                        S(KC_NUHS),S(KC_INT1), KC_EQL   ,S(KC_LBRC),S(KC_SLSH),S(KC_INT3),
                  KC_0     , KC_DOT  , _______  ,         _______  , _______  ,                   KC_DEL   , _______  , _______       , _______  , _______
  ),

  [3] = LAYOUT_universal(
    _______  , AML_TO   , AML_I50  , AML_D50  , _______  , _______  ,                                        _______  , _______  , _______  , _______ , _______ , _______  ,
    _______  , _______  , _______  , _______  , _______  , SCRL_DVI ,                                        _______  , _______  , _______  , _______ , _______  , _______  ,
    _______ , _______  , _______  , _______  , _______  , SCRL_DVD ,                                        CPI_D1K  , CPI_D100 , CPI_I100 , CPI_I1K  , _______  , KBC_SAVE ,
                  QK_BOOT  , KBC_RST  , _______  ,        _______  , _______  ,                   _______  , _______  , _______       , _______  , QK_BOOT
  ),

  [4] = LAYOUT_universal(
    _______  , _______   , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______ , _______ , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______ ,                                        _______  , _______  , _______  , _______ , _______  , _______  ,
    _______ , _______  , _______  , _______  , _______  , _______ ,                                        _______  , _______ , _______ , _______  , _______  , _______ ,
                  _______  , _______  , _______  ,        _______  , _______  ,                   _______  , _______  , _______       , _______  , _______
  ),

  [5] = LAYOUT_universal(
    _______  , _______   , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______ , _______ , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______ ,                                        _______  , _______  , _______  , _______ , _______  , _______  ,
    _______ , _______  , _______  , _______  , _______  , _______ ,                                        _______  , _______ , _______ , _______  , _______  , _______ ,
                  _______  , _______  , _______  ,        _______  , _______  ,                   _______  , _______  , _______       , _______  , _______
  ),

  [6] = LAYOUT_universal(
    _______  , _______   , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______ , _______ , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______ ,                                        _______  , _______  , _______  , _______ , _______  , _______  ,
    _______ , _______  , _______  , _______  , _______  , _______ ,                                        _______  , _______ , _______ , _______  , _______  , _______ ,
                  _______  , _______  , _______  ,        _______  , _______  ,                   _______  , _______  , _______       , _______  , _______
  ),

  [7] = LAYOUT_universal(
    _______  , _______   , _______  , _______  , _______  , _______  ,                                        _______  , _______  , _______  , _______ , _______ , _______  ,
    _______  , _______  , _______  , _______  , _______  , _______ ,                                        _______  , _______  , _______  , _______ , _______  , _______  ,
    _______ , _______  , _______  , _______  , _______  , _______ ,                                        _______  , _______ , _______ , _______  , _______  , _______ ,
                  _______  , _______  , _______  ,        _______  , _______  ,                   _______  , _______  , _______       , _______  , _______
  ),
};
// clang-format on



#ifdef MOUSE_LAYER
    static uint16_t last_motion = 0;
    static bool mouse_layer_auto = false;
    #ifndef MOUSE_MOTION_TIMEOUT
        #define MOUSE_MOTION_TIMEOUT 500
    #endif
#endif


layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    keyball_set_scroll_mode(get_highest_layer(state) == 3);
#ifdef MOUSE_LAYER
    if (!layer_state_cmp(state, MOUSE_LAYER)) {
        mouse_layer_auto = false;
    }
#endif
    return state;
}

void auto_toggle_mouse_layer_on(void) {
#ifdef MOUSE_LAYER
    last_motion = timer_read();
    if (!layer_state_is(MOUSE_LAYER)) {
        layer_on(MOUSE_LAYER);
        mouse_layer_auto = true;
    }
#endif
}
void auto_toggle_mouse_layer_off(void) {
#ifdef MOUSE_LAYER
    if (mouse_layer_auto && layer_state_is(MOUSE_LAYER)) {
        layer_off(MOUSE_LAYER);
    }
    mouse_layer_auto = false;
#endif
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
#ifdef MOUSE_LAYER
    bool motion = (mouse_report.x != 0 || mouse_report.y != 0 || mouse_report.v != 0 || mouse_report.h != 0);
    if (motion) {
        auto_toggle_mouse_layer_on();
    } else {
        // No motion — check if it's time to turn off the layer
        if (timer_elapsed(last_motion) > MOUSE_MOTION_TIMEOUT) {
            auto_toggle_mouse_layer_off();
        }
    }
#endif
    return mouse_report;
}

// https://docs.qmk.fm/tap_hold#hold-on-other-key-press
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HOME_ESC:
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}

// https://docs.qmk.fm/tap_hold#tapping-term
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HOME_ESC:
            // return TAPPING_TERM + 1250;
            return 150;
#ifdef HRM_TAPPING_TERM
        case HOME_A:
        case HOME_S:
        case HOME_D :
        case HOME_F:
        case HOME_J:
        case HOME_K:
        case HOME_L:
        case HOME_SCLN:
            return HRM_TAPPING_TERM;
#endif
        default:
            return TAPPING_TERM;
    }
}

// RETRO_TAPPING_PER_KEY
bool get_retro_tapping(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case HOME_ESC:
            return false;
        // Detect all Layer-Tap keys (LT(layer, key))
        case QK_LAYER_TAP ... QK_LAYER_TAP_MAX:
            // Disable retro-tap for any LT(...)
            return false;
        default:
            return true;
    }
}


#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif
