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

#define TAP_CODE_DELAY 5

#define POINTING_DEVICE_AUTO_MOUSE_ENABLE
#define AUTO_MOUSE_DEFAULT_LAYER 1

#define DYNAMIC_KEYMAP_LAYER_COUNT 8

#define KEYBALL_CPI_DEFAULT 500

/// Scroll behavior
#define ENABLE_ACCUMULATED_SCROLLING
#define SCROLL_START_THRESHOLD 1
// TODO: improve `keyball_on_apply_motion_to_mouse_scroll` for smooth scrolling with small movements


#define MOUSE_LAYER 1  // replace with your actual mouse layer number
#define TG_MOUSE TG(MOUSE_LAYER)
#define MOUSE_MOTION_TIMEOUT 1000  // ms after which we disable mouse layer

#define KEYBALL_SCROLL_DIV_DEFAULT 3
#define KEYBALL_SCROLLBALL_INHIVITOR 50

/// To disable scroll snap feature, define 0 in your config.h
#define KEYBALL_SCROLLSNAP_ENABLE 2
#define KEYBALL_SCROLLSNAP_RESET_TIMER 100
#define KEYBALL_SCROLLSNAP_TENSION_THRESHOLD 12

/*
qmk compile -kb holykeebs/keyball44 -km divad1196
*/

#include "users/divad1196-hrm.h"
