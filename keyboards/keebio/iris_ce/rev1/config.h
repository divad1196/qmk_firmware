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



// Home Row Mod
// https://precondition.github.io/home-row-mods#tapping-term
// https://docs.qmk.fm/mod_tap#mod-tap

#define TAPPING_TERM 180
#define QUICK_TAP_TERM 0

#define HOME_ESC LCTL_T(KC_ESC)

// Left-hand home row mods
#define HOME_A LGUI_T(KC_A)
#define HOME_S LALT_T(KC_S)
#define HOME_D LSFT_T(KC_D)
#define HOME_F LCTL_T(KC_F)

// Right-hand home row mods
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