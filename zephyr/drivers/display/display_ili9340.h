/*
 * Copyright (c) 2017 Jan Van Winkel <jan.van_winkel@dxplore.eu>
 * Copyright (c) 2019 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef ZEPHYR_DRIVERS_DISPLAY_DISPLAY_ILI9340_H_
#define ZEPHYR_DRIVERS_DISPLAY_DISPLAY_ILI9340_H_

#include <zephyr.h>

#define ILI9340_CMD_SOFTWARE_RESET 0x01
#define ILI9340_CMD_ENTER_SLEEP 0x10
#define ILI9340_CMD_EXIT_SLEEP 0x11
#define ILI9340_CMD_GAMMA_SET 0x26
#define ILI9340_CMD_DISPLAY_OFF 0x28
#define ILI9340_CMD_DISPLAY_ON 0x29
#define ILI9340_CMD_COLUMN_ADDR 0x2a
#define ILI9340_CMD_PAGE_ADDR 0x2b
#define ILI9340_CMD_MEM_WRITE 0x2c
#define ILI9340_CMD_MEM_ACCESS_CTRL 0x36
#define ILI9340_CMD_PIXEL_FORMAT_SET 0x3A
#define ILI9340_CMD_FRAME_CTRL_NORMAL_MODE 0xB1
#define ILI9340_CMD_DISPLAY_FUNCTION_CTRL 0xB6
#define ILI9340_CMD_POWER_CTRL_1 0xC0
#define ILI9340_CMD_POWER_CTRL_2 0xC1
#define ILI9340_CMD_VCOM_CTRL_1 0xC5
#define ILI9340_CMD_VCOM_CTRL_2 0xC7
#define ILI9340_CMD_POSITIVE_GAMMA_CORRECTION 0xE0
#define ILI9340_CMD_NEGATIVE_GAMMA_CORRECTION 0xE1

#define ILI9341_CMD_POWER_CTRL_A 0xCB
#define ILI9341_CMD_POWER_CTRL_B 0xCF
#define ILI9341_CMD_DRVR_TIMING_CTRL_A_I 0xE8
#define ILI9341_CMD_DRVR_TIMING_CTRL_A_E 0xE9
#define ILI9341_CMD_DRVR_TIMING_CTRL_B 0xEA
#define ILI9341_CMD_POWER_ON_SEQ_CTRL 0xED
#define ILI9341_CMD_ENABLE_3G 0xF2
#define ILI9341_CMD_PUMP_RATIO_CTRL 0xF7

#define ILI9340_DATA_MEM_ACCESS_CTRL_MY 0x80
#define ILI9340_DATA_MEM_ACCESS_CTRL_MX 0x40
#define ILI9340_DATA_MEM_ACCESS_CTRL_MV 0x20
#define ILI9340_DATA_MEM_ACCESS_CTRL_ML 0x10
#define ILI9340_DATA_MEM_ACCESS_CTRL_BGR 0x08
#define ILI9340_DATA_MEM_ACCESS_CTRL_MH 0x04

#define ILI9340_DATA_PIXEL_FORMAT_RGB_18_BIT 0x60
#define ILI9340_DATA_PIXEL_FORMAT_RGB_16_BIT 0x50
#define ILI9340_DATA_PIXEL_FORMAT_MCU_18_BIT 0x06
#define ILI9340_DATA_PIXEL_FORMAT_MCU_16_BIT 0x05

struct ili9340_data;

/**
 * Send data to ILI9340 display controller
 *
 * @param data Device data structure
 * @param cmd Command to send to display controller
 * @param tx_data Data to transmit to the display controller
 * In case no data should be transmitted pass a NULL pointer
 * @param tx_len Number of bytes in tx_data buffer
 *
 */
void ili9340_transmit(struct ili9340_data *data, u8_t cmd, void *tx_data,
		      size_t tx_len);

/**
 * Perform LCD specific initialization
 *
 * @param data Device data structure
 */
void ili9340_lcd_init(struct ili9340_data *data);
void otm8009a_init(struct device *dev);

#endif /* ZEPHYR_DRIVERS_DISPLAY_DISPLAY_ILI9340_H_ */
