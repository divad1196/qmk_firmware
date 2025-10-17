/*
This is the c configuration file for the keymap

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

#pragma once

#ifdef RGBLIGHT_ENABLE
#    define RGBLIGHT_EFFECT_BREATHING
#    define RGBLIGHT_EFFECT_RAINBOW_MOOD
#    define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#    define RGBLIGHT_EFFECT_SNAKE
#    define RGBLIGHT_EFFECT_KNIGHT
#    define RGBLIGHT_EFFECT_CHRISTMAS
#    define RGBLIGHT_EFFECT_STATIC_GRADIENT
#    define RGBLIGHT_EFFECT_RGB_TEST
#    define RGBLIGHT_EFFECT_ALTERNATING
#    define RGBLIGHT_EFFECT_TWINKLE
#endif

#define TAP_CODE_DELAY 5

#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
#define AUTO_MOUSE_DEFAULT_LAYER 2


/*
qmk compile -kb keebio/iris_ce/rev1_divad1196 -km divad1196
qmk compile -kb keyball/keyball61 -km divad1196
*/

// Home Row Mod
// https://precondition.github.io/home-row-mods#tapping-term
// https://docs.qmk.fm/mod_tap#mod-tap

#define TAPPING_TERM 400  // because we use PERMISSIVE_HOLD
#define QUICK_TAP_TERM 0
// https://docs.qmk.fm/tap_hold#retro-tapping
#define RETRO_TAPPING
// https://docs.qmk.fm/tap_hold#permissive-hold
#define PERMISSIVE_HOLD

// https://docs.qmk.fm/tap_hold#hold-on-other-key-press
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

// https://docs.qmk.fm/tap_hold#tapping-term
#define TAPPING_TERM_PER_KEY

// https://docs.qmk.fm/tap_hold#retro-tapping
#define RETRO_TAPPING_PER_KEY

#define LT_ENTER LT(TRI_LAYER_UPPER_LAYER, KC_ENT)
#define LT_SPACE LT(TRI_LAYER_LOWER_LAYER, KC_SPC)

// https://docs.qmk.fm/keycodes_basic#basic-keycodes

#define HOME_ESC LCTL_T(KC_ESC)
// https://docs.qmk.fm/features/space_cadet#keycodes
// https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md#space-cadet-space-cadet
// https://docs.qmk.fm/keycodes_us_ansi_shifted#keycodes
#define C_LSFT LSFT_T(KC_NO) // SC_LSPO // LSFT_T(KC_LPRN) //
#define C_RSFT RSFT_T(KC_BSLS) // SC_RSPC // RSFT_T(KC_RPRN) //

// // Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LSFT_T(KC_D)
#define HOME_F LCTL_T(KC_F)

// // Right-hand home row mods
#define HOME_J RCTL_T(KC_J)
#define HOME_K RSFT_T(KC_K)
#define HOME_L LALT_T(KC_L)
#define HOME_SCLN RGUI_T(KC_SCLN)
