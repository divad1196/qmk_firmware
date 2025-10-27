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
// #include "users/divad1196/mouse.h"
#include "users/divad1196/volume.h"

// enum LAYERS {
//     BASE_LAYER,
//     MOUSE_LAYER,
//     NUMPAD_LAYER,
//     SYMBOL_LAYER,
//     CFG_LAYER,
// }

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_universal(
    KC_DEL   , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     ,                                  KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , KC_BSPC  ,
    KC_TAB   , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                                  KC_Y     , KC_U     , KC_I     , KC_O     , KC_P     , KC_BSPC  ,
    HOME_ESC , HOME_A   , HOME_S   , HOME_D   , HOME_F   , KC_G     ,                                  KC_H     , HOME_J   , HOME_K   , HOME_L   , HOME_SCLN, KC_QUOT  ,
    KC_LSFT  , KC_Z     , KC_X     , KC_C     , KC_V     , KC_B     , KC_RBRC  ,              KC_NUHS, KC_N     , KC_M     , KC_COMM  , KC_DOT   , KC_SLSH  , KC_RSFT  ,
    _______  , KC_LCTL  , KC_LALT  , KC_LGUI,LT(3,_______),LT(1,KC_SPC),LT(4,_______),    KC_BSPC,LT(2,KC_ENT),LT(1,_______),_______, _______ , _______ , TG_MOUSE
  ),

  [1] = LAYOUT_universal(
    _______  , _______ , _______  , _______   , _______  ,_______,                                     _______  , _______  , _______  , _______  , _______  , _______  ,
    SSNP_FRE , KC_F1    , KC_F2    , KC_F3    , KC_F4    , KC_F5    ,                                  KC_F6    , KC_F7    , KC_F8    , KC_F9    , KC_F10   , KC_F11   ,
    SSNP_VRT , SCRL_TO  , SCRL_MO  , KC_UP    , KC_ENT   , KC_DEL   ,                                  KC_PGUP  , KC_BTN1  , KC_UP    , KC_BTN2  , KC_BTN3  , KC_F12   ,
    SSNP_HOR , _______  , KC_LEFT  , KC_DOWN  , KC_RGHT  , KC_BSPC  , _______  ,            _______ ,  KC_PGDN  , KC_LEFT  , KC_DOWN  , KC_RGHT  , _______  , _______  ,
    _______  , _______  , KC_0     , KC_DOT   , _______  , _______  , _______  ,              TO(0) , SCRL_TO   , _______  , _______  , _______  , _______  , _______
  ),

  [2] = LAYOUT_universal(
    _______  , _______ , _______  , _______   , _______  ,_______,                                     _______  , _______  , _______  , _______  , _______  , _______   ,
    _______  ,S(KC_QUOT), KC_7     , KC_8     , KC_9     , _______  ,                                  KC_CIRC  , KC_AMPR  , KC_ASTR  , KC_LPRN  , KC_RPRN  , KC_BSPC   ,
    _______  ,S(KC_SCLN), KC_4     , KC_5     , KC_6     ,S(KC_SCLN),                                  KC_MINS  , KC_EQL   , KC_LBRC  , KC_RBRC  , KC_BSLS  , KC_GRV    ,
    _______  ,S(KC_MINS), KC_1     , KC_2     , KC_3     ,S(KC_MINS), S(KC_8)  ,             _______ , KC_UNDS  , KC_PLUS  , KC_LCBR  , KC_RCBR  , KC_PIPE  , KC_TILD   ,
    _______  , _______  , KC_0     , KC_DOT   , _______  , _______  , _______  ,             KC_DEL  , _______  , _______  , _______  , _______  , _______  , _______
  ),

  [3] = LAYOUT_universal(
    _______  , _______ , _______  , _______   , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______   ,
    KC_TAB   , KC_EXLM , KC_AT    , KC_HASH   , KC_DLR   , KC_PERC  ,                                  KC_CIRC  , KC_AMPR  , KC_ASTR  , KC_LPRN  , KC_RPRN  , KC_BSPC   ,
    KC_LCTL  , _______ , _______  , _______   , _______  , _______  ,                                  KC_MINS  , KC_EQL   , KC_LBRC  , KC_RBRC  , KC_BSLS  , KC_GRV    ,
    KC_LSFT  , _______ , _______  , _______   , _______  , _______  , _______  ,             _______ , KC_UNDS  , KC_PLUS  , KC_LCBR  , KC_RCBR  , KC_PIPE  , KC_TILD   ,
    _______  , _______ , _______  , _______   , _______  , _______  , _______  ,             KC_DEL  , _______  , _______  , _______  , _______  , _______  , _______
  ),

  [4] = LAYOUT_universal(
    _______  , _______ , _______  , _______   , _______  ,_______,                                     _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______ , _______  , _______   , _______  , _______  ,                                  _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , AML_TO   , AML_I50  , AML_D50  , _______  , SCRL_DVI  ,                                 _______  , _______  , _______  , _______  , _______  , _______  ,
    _______  , _______  , _______  , _______  , _______  , SCRL_DVD  , EE_CLR   ,            EE_CLR  , CPI_D1K  , CPI_D100 , CPI_I100 , CPI_I1K  , KBC_SAVE , KBC_RST  ,
    _______  , _______  , QK_BOOT  , _______  , _______  , _______   , _______  ,            _______  , _______  , _______  , _______  , _______  , QK_BOOT , _______
  ),
};
// clang-format on

#ifdef OLED_ENABLE

#    include "lib/oledkit/oledkit.h"

void oledkit_render_info_user(void) {
    keyball_oled_render_keyinfo();
    keyball_oled_render_ballinfo();
    keyball_oled_render_layerinfo();
}
#endif


layer_state_t layer_state_set_user(layer_state_t state) {
    keyball_set_volume_mode(get_highest_layer(state) == 3);
    keyball_set_scroll_mode(get_highest_layer(state) == 4);
    return state;
}

void pointing_device_init_user(void) {
    // https://docs.qmk.fm/features/pointing_device#how-to-enable
    // set_auto_mouse_layer(<mouse_layer>); // only required if AUTO_MOUSE_DEFAULT_LAYER is not set to index of <mouse_layer>
    // set_auto_mouse_enable(true);         // always required before the auto mouse feature will work
}

// ==============================================================================================================================

/*
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
#if defined(MOUSE_LAYER) && defined(MOUSE_EXTEND_ON_USE)
    if (record->event.pressed) {
        if (layer_state_is(MOUSE_LAYER)) {
            mouse_layer_extend_timer();
        }
    }
#endif

    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
    // Auto enable scroll mode when the highest layer is 3
    keyball_set_scroll_mode(get_highest_layer(state) == 3);
#ifdef MOUSE_LAYER
    if (!layer_state_cmp(state, MOUSE_LAYER)) {
        toggle_mouse_layer_off();
    }
#endif
    return state;
}

bool report2motion(report_mouse_t mouse_report) {
    return (mouse_report.x != 0 || mouse_report.y != 0 || mouse_report.v != 0 || mouse_report.h != 0);
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
#ifdef MOUSE_LAYER
    bool motion = report2motion(mouse_report);
    refresh_mouse_layer(motion);
#endif
    return mouse_report;
}
*/


// ==============================================================================================================================


void apply_motion_to_volume(int32_t norm) {
    // #define MOTION_VOLUME_COOLDOWN_THRESHOLD 10
    // #define MOTION_VOLUME_COOLDOWN 50 // Try 50ms, then adjust (shorter = faster steps)
    // apply_volume_with_cooldown(norm, MOTION_VOLUME_COOLDOWN_THRESHOLD, MOTION_VOLUME_COOLDOWN);

    #define MOTION_VOLUME_ACCEL_THRESHOLD 30 // Use a slightly higher base threshold
    #define MOTION_VOLUME_ACCEL_FACTOR 5 // Higher factor means faster acceleration
    apply_volume_with_acceleration(norm, MOTION_VOLUME_ACCEL_THRESHOLD, MOTION_VOLUME_ACCEL_FACTOR);
}


// ==============================================================================================================================

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
