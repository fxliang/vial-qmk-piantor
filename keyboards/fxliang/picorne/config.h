// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include "config_common.h"

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 1000U

#define SERIAL_USART_FULL_DUPLEX
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

#define SPLIT_LED_STATE_ENABLE
#define LED_CAPS_LOCK_PIN	GP25
#define LED_PIN_ON_STATE	1

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

#define SPLIT_HAND_PIN GP24
#define SPLIT_TRANSPORT_MIRROR
#define DIRECT_PINS { \
    { GP7, GP6, GP5, GP4, GP3, GP2}, \
    { GP13, GP12, GP11, GP10, GP9, GP8}, \
    { GP16, GP15, GP14, GP17, GP18, GP19}, \
    { GP20, GP21, GP22, NO_PIN, NO_PIN, NO_PIN} \
}

#define DIRECT_PINS_RIGHT { \
    { GP2, GP3, GP4, GP5, GP6, GP7}, \
    { GP8, GP9, GP10, GP11, GP12, GP13}, \
    { GP19, GP18, GP17, GP14, GP15, GP16 }, \
    { GP22, GP21, GP20, NO_PIN, NO_PIN, NO_PIN} \
}

#define BOOTMAGIC_LITE_ROW    0
#define BOOTMAGIC_LITE_COLUMN 5

// When USB_VBUS_PIN is not defined, SPLIT_USB_DETECT is used.
// #define USB_VBUS_PIN GP24 // for Raspberry Pi Pico
