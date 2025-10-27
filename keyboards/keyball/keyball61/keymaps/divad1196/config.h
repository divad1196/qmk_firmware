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

/*
qmk compile -kb keyball/keyball61 -km divad1196
*/


#include "users/divad1196/hrm.h"

// https://docs.qmk.fm/feature_macros#tap-code-delay-kc-delay
#define TAP_CODE_DELAY 5


// The following is conflicting with my custom code
#include "users/divad1196/keyball.h"


// https://docs.qmk.fm/feature_layers
// https://docs.qmk.fm/features/leader_key
// https://docs.qmk.fm/features/combo
//

// ==================================================================================
#define AUTO_MOUSE_DEFAULT_LAYER MOUSE_LAYER
// #define POINTING_DEVICE_AUTO_MOUSE_ENABLE


// ==================================================================================
// https://docs.qmk.fm/features/pointing_device

// TODO: Use the following to fix the trackball orientation ?
// https://docs.qmk.fm/features/pointing_device#split-keyboard-configuration
// #define SPLIT_POINTING_ENABLE

// #define POINTING_DEVICE_LEFT
// #define POINTING_DEVICE_RIGHT
// #define POINTING_DEVICE_COMBINED
// #define POINTING_DEVICE_ROTATION_90_RIGHT
// #define POINTING_DEVICE_ROTATION_180_RIGHT
// #define POINTING_DEVICE_ROTATION_270_RIGHT
// #define POINTING_DEVICE_INVERT_X_RIGHT
// #define POINTING_DEVICE_INVERT_Y_RIGHT
