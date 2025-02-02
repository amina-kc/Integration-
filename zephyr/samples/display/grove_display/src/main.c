/*
 * Copyright (c) 2015 Intel Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>

#include <sys/printk.h>

#include <device.h>
#include <drivers/i2c.h>

#include <display/grove_lcd.h>
#include<display/stm32f7-otm8009a.h>

/**
 * @file Display a counter through I2C and Grove LCD.
 */

/* sleep time in msec */
#define SLEEPTIME  100

u8_t clamp_rgb(int val)
{
	if (val > 255) {
		return 255;
	} else if (val < 0) {
		return 0;
	} else {
		return val;
	}
}

void main(void)
{
	otm8009a_init();
	struct device *glcd;
	char str[20];
	int rgb[] = { 0x0, 0x0, 0x0 };
	u8_t rgb_chg[3];
	const u8_t rgb_step = 16U;
	u8_t set_config;
	int i, j, m;
	int cnt;

	glcd = device_get_binding(GROVE_LCD_NAME);
	if (!glcd) {
		printk("Grove LCD: Device not found.\n");
		return;
	}

	/* Now configure the LCD the way we want it */

	set_config = GLCD_FS_ROWS_2
		     | GLCD_FS_DOT_SIZE_LITTLE
		     | GLCD_FS_8BIT_MODE;

	glcd_function_set(glcd, set_config);

	set_config = GLCD_DS_DISPLAY_ON | GLCD_DS_CURSOR_ON | GLCD_DS_BLINK_ON;

	glcd_display_state_set(glcd, set_config);

	/* Setup variables /*/
	for (i = 0; i < sizeof(str); i++) {
		str[i] = '\0';
	}

	/* Starting counting */
	cnt = 0;

	while (1) {
		glcd_cursor_pos_set(glcd, 0, 0);

		/* RGB values are from 0 - 511.
		 * First half means incrementally brighter.
		 * Second half is opposite (i.e. goes darker).
		 */

		/* Update the RGB values for backlight */
		m = (rgb[2] > 255) ? (512 - rgb[2]) : (rgb[2]);
		rgb_chg[2] = clamp_rgb(m);

		m = (rgb[1] > 255) ? (512 - rgb[1]) : (rgb[1]);
		rgb_chg[1] = clamp_rgb(m);

		m = (rgb[0] > 255) ? (512 - rgb[0]) : (rgb[0]);
		rgb_chg[0] = clamp_rgb(m);

		glcd_color_set(glcd, rgb_chg[0], rgb_chg[1], rgb_chg[2]);

		/* Display the counter
		 *
		 * well... sprintf() might be easier,
		 * but this is more fun.
		 */
		m = cnt;
		i = 1000000000;
		j = 0;
		while (i > 0) {
			str[j] = '0' + (m / i);

			m = m % i;
			i = i / 10;
			j++;
		}
		cnt++;

		glcd_print(glcd, str, j);

		/* Rotate RGB values */
		rgb[2] += rgb_step;
		if (rgb[2] > 511) {
			rgb[2] = 0;
			rgb[1] += rgb_step;
		}
		if (rgb[1] > 511) {
			rgb[1] = 0;
			rgb[0] += rgb_step;
		}
		if (rgb[0] > 511) {
			rgb[0] = 0;
		}

		/* wait a while */
		k_sleep(SLEEPTIME);
	}
}
