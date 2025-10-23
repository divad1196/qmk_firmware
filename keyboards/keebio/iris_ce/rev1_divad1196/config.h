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
// #define TG_HOME TG(1)
// #define TRI_LAYER_LOWER_LAYER 2
// #define TRI_LAYER_UPPER_LAYER 3
// #define TRI_LAYER_ADJUST_LAYER 4

// Default values
#define TRI_LAYER_LOWER_LAYER 1
#define TRI_LAYER_UPPER_LAYER 2
#define TRI_LAYER_ADJUST_LAYER 3

#include "users/divad1196/hrm.h"

#define LT_ENTER LT(TRI_LAYER_UPPER_LAYER, KC_ENT)
#define LT_SPACE LT(TRI_LAYER_LOWER_LAYER, KC_SPC)
