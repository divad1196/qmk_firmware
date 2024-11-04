// Copyright 2023 Danny Nguyen (danny@keeb.io)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define USB_VBUS_PIN GP0
#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP12
#define SERIAL_USART_RX_PIN GP13
#define SERIAL_USART_PIN_SWAP
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U
#define I2C_DRIVER I2CD2
#define I2C1_SDA_PIN GP10
#define I2C1_SCL_PIN GP11


// https://docs.qmk.fm/features/tri_layer#keycodes
#define TG_HOME TG(1)
#define TRI_LAYER_LOWER_LAYER 2
#define TRI_LAYER_UPPER_LAYER 3
#define TRI_LAYER_ADJUST_LAYER 4


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


// https://docs.qmk.fm/keycodes_basic#basic-keycodes

#define HOME_ESC LCTL_T(KC_ESC)
// https://docs.qmk.fm/features/space_cadet#keycodes
// https://github.com/qmk/qmk_firmware/blob/master/docs/keycodes.md#space-cadet-space-cadet
// https://docs.qmk.fm/keycodes_us_ansi_shifted#keycodes
#define C_LSFT SC_LSPO // LSFT_T(KC_LPRN) // 
#define C_RSFT SC_RSPC // RSFT_T(KC_RPRN) // 

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

// // Left-hand home row mods
// #define HOME_A LCTL_T(KC_A)
// #define HOME_S LALT_T(KC_S)
// #define HOME_D LSFT_T(KC_D)
// #define HOME_F LGUI_T(KC_F)

// // Right-hand home row mods
// #define HOME_J LALT_T(KC_J)
// #define HOME_K RSFT_T(KC_K)
// #define HOME_L (KC_L)RCTL_T
// #define HOME_SCLN RGUI_T(KC_SCLN)