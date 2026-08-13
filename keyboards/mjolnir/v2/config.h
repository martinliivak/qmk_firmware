// Copyright 2026 QMK
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

#define SERIAL_USART_FULL_DUPLEX   // Enable full duplex operation mode.
#define SERIAL_USART_TX_PIN GP0    // USART TX pin
#define SERIAL_USART_RX_PIN GP1    // USART RX pin

// PMW3360 config
//#define PMW33XX_LIFTOFF_DISTANCE 0x00
#define PMW33XX_CS_PIN GP21
#define SPI_MISO_PIN GP23
#define SPI_MOSI_PIN GP20
#define SPI_SCK_PIN GP22

#define POINTING_DEVICE_INVERT_X
#define PMW33XX_CPI 1000
