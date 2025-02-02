/*
 * Copyright (c) 2018 Yurii Hamann
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32F7_H_
#define ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32F7_H_

/**
 * @file Header for STM32F7 pin multiplexing helper
 */

/* Port A */
#define STM32F7_PINMUX_FUNC_PA0_PWM2_CH1 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA0_PWM5_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA0_USART2_CTS    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA0_UART4_TX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA0_ADC123_IN0	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PA1_PWM2_CH2 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA1_PWM5_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA1_USART2_RTS    \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA1_UART4_RX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PA1_ETH         \
	(STM32_PINMUX_ALT_FUNC_11 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F7_PINMUX_FUNC_PA1_LTDC_R2 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PA1_ADC123_IN1	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PA2_PWM2_CH3 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA2_PWM5_CH3 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA2_PWM9_CH1 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA2_USART2_TX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA2_ETH         \
	(STM32_PINMUX_ALT_FUNC_11 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F7_PINMUX_FUNC_PA2_LTDC_R1 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PA2_ADC123_IN2	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PA3_PWM2_CH4 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA3_PWM5_CH4 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA3_PWM9_CH2 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA3_USART2_RX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PA3_ETH         \
	(STM32_PINMUX_ALT_FUNC_11 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F7_PINMUX_FUNC_PA3_LTDC_B5 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PA3_ADC123_IN3	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PA4_SPI1_NSS \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PA4_LTDC_VSYNC \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PA4_ADC12_IN4	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PA5_PWM2_CH1 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA5_PWM8_CH1N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA5_SPI1_SCK \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PA5_LTDC_R4 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PA5_ADC12_IN5	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PA6_PWM3_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA6_PWM13_CH1 \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA6_SPI1_MISO \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PA6_LTDC_G2 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PA6_ADC12_IN6	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PA7_PWM1_CH1N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA7_PWM3_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA7_PWM8_CH1N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA7_ETH         \
	(STM32_PINMUX_ALT_FUNC_11 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F7_PINMUX_FUNC_PA7_PWM14_CH1 \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA7_SPI1_MOSI \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PA7_ADC12_IN7	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PA8_PWM1_CH1 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA8_I2C3_SCL    \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32F7_PINMUX_FUNC_PA8_LTDC_R6 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PA9_PWM1_CH2 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA9_USART1_TX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA9_SPI2_SCK   \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PA10_PWM1_CH3 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA10_USART1_RX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PA11_PWM1_CH4 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA11_USART1_CTS  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA11_OTG_FS_DM  \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PA11_LTDC_R4 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PA12_SPI2_SCK   \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PA12_USART1_RTS  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA12_OTG_FS_DP  \
	(STM32_PINMUX_ALT_FUNC_10 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PA12_LTDC_R5 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PA15_PWM2_CH1 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PA15_USART4_RTS \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

/* Port B */
#define STM32F7_PINMUX_FUNC_PB0_PWM1_CH2N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB0_PWM3_CH3 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB0_PWM8_CH2N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB0_UART4_CTS   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB0_LTDC_R3 \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PB0_ADC12_IN8	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PB1_PWM1_CH3N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB1_PWM3_CH4 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB1_PWM8_CH3N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB1_LTDC_R6 \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PB1_ADC12_IN9	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PB3_PWM2_CH2 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PB4_PWM3_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB4_SPI1_MISO  \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PB4_SPI2_NSS \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PB5_PWM3_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB5_SPI1_MOSI  \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PB6_PWM4_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB6_USART1_TX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB6_I2C1_SCL    \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32F7_PINMUX_FUNC_PB6_USART1_TX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PB7_PWM4_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB7_I2C1_SDA    \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32F7_PINMUX_FUNC_PB7_USART1_RX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PB8_PWM4_CH3 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB8_PWM10_CH1 \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB8_I2C1_SCL    \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32F7_PINMUX_FUNC_PB8_LTDC_B6 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PB9_PWM4_CH4 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB9_PWM11_CH1 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB9_I2C1_SDA    \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32F7_PINMUX_FUNC_PB9_SPI2_NSS \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PB9_LTDC_B7 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PB10_PWM2_CH3 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB10_I2C2_SCL    \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32F7_PINMUX_FUNC_PB10_USART3_TX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB10_SPI2_SCK  \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PB10_LTDC_G4 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PB11_PWM2_CH4 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB11_I2C2_SDA    \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32F7_PINMUX_FUNC_PB11_USART3_RX	\
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PB11_ETH        \
	(STM32_PINMUX_ALT_FUNC_11 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F7_PINMUX_FUNC_PB11_LTDC_G5 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PB12_SPI2_NSS	\
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PB13_PWM1_CH1N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB13_UART3_CTS	\
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PB13_ETH        \
	(STM32_PINMUX_ALT_FUNC_11 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F7_PINMUX_FUNC_PB13_SPI2_SCK	\
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PB14_PWM1_CH2N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB14_PWM8_CH2N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB14_UART3_RTS	\
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PB14_PWM12_CH1 \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB14_SPI2_MISO	\
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PB15_PWM1_CH3N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB15_PWM8_CH3N \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB15_PWM12_CH2 \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PB15_SPI2_MOSI	\
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PB14_SPI2_MISO  \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PB15_SPI2_MOSI  \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)

/* Port C */
#define STM32F7_PINMUX_FUNC_PC0_LTDC_R5 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PC0_ADC123_IN10	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PC1_ETH         \
	(STM32_PINMUX_ALT_FUNC_11 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F7_PINMUX_FUNC_PC1_SPI2_MOSI	\
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PC1_ADC123_IN11	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PC2_SPI2_MISO	\
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PC2_ADC123_IN12	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PC3_SPI2_MOSI	\
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PC3_ADC123_IN13	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PC4_ETH         \
	(STM32_PINMUX_ALT_FUNC_11 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F7_PINMUX_FUNC_PC4_ADC12_IN14	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PC5_ETH         \
	(STM32_PINMUX_ALT_FUNC_11 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F7_PINMUX_FUNC_PC5_ADC12_IN15	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PC6_PWM3_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PC6_PWM8_CH1 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PC6_USART6_TX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PC6_LTDC_HSYNC \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PC7_PWM3_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PC7_PWM8_CH2 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PC7_USART6_RX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PC7_LTDC_G6 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PC8_PWM3_CH3 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PC8_PWM8_CH3 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PC8_UART5_RTS  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PC9_PWM3_CH4 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PC9_PWM8_CH4 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PC9_I2C3_SDA   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32F7_PINMUX_FUNC_PC9_UART5_CTS  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PC10_USART3_TX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PC10_LTDC_R2 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PC10_UART4_TX  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PC11_USART3_RX  \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PC11_UART4_RX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PC12_UART5_TX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

/* Port D */
#define STM32F7_PINMUX_FUNC_PD0_CAN_RX \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUPDR_PULL_UP)
#define STM32F7_PINMUX_FUNC_PD1_CAN_TX \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PD2_UART5_RX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PD3_USART2_CTS   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PD3_SPI2_SCK     \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PD3_LTDC_G7 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PD4_USART2_RTS   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PD5_USART2_TX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PD6_USART2_RX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PD6_LTDC_B2 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PD8_USART3_TX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PD9_USART3_RX   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PD10_LTDC_B3 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PD11_USART3_CTS   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PD12_PWM4_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PD12_USART3_RTS   \
	(STM32_PINMUX_ALT_FUNC_7 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PD13_PWM4_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PD14_PWM4_CH3 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PD14_UART8_CTS  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PD15_PWM4_CH4 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PD15_UART8_RTS  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

/* Port E */
#define STM32F7_PINMUX_FUNC_PE0_UART8_RX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PE1_UART8_TX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PE4_LTDC_B0 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PE5_PWM9_CH1 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PE5_LTDC_G0 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PE6_PWM9_CH2 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PE6_LTDC_G1 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PE7_UART7_RX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PE8_PWM1_CH1N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PE8_UART7_TX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PE9_PWM1_CH1 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PE9_UART7_RTS   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PE10_PWM1_CH2N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PE10_UART7_CTS  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PE11_PWM1_CH2 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PE11_LTDC_G3 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PE12_PWM1_CH3N \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PE12_LTDC_B4 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PE13_PWM1_CH3 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PE13_LTDC_DE \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PE14_PWM1_CH4 \
	(STM32_PINMUX_ALT_FUNC_1 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PE14_LTDC_CLK \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PE15_LTDC_R7 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

/* Port F */
#define STM32F7_PINMUX_FUNC_PF0_I2C2_SDA   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32F7_PINMUX_FUNC_PF1_I2C2_SCL   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32F7_PINMUX_FUNC_PF3_ADC3_IN9	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PF4_ADC3_IN14	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PF5_ADC3_IN15	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PF6_PWM10_CH1 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PF6_UART7_RX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PF6_ADC3_IN4	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PF7_PWM11_CH1 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PF7_UART7_TX    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PF7_ADC3_IN5	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PF8_UART7_RTS    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PF8_PWM13_CH1 \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PF8_ADC3_IN6	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PF9_UART7_CTS    \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PF9_PWM14_CH1 \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PF9_ADC3_IN7	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PF10_ADC3_IN8	\
	STM32_MODER_ANALOG_MODE

#define STM32F7_PINMUX_FUNC_PF10_LTDC_DE \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

/* Port G */
#define STM32F7_PINMUX_FUNC_PG6_LTDC_R7 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PG7_LTDC_CLK \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PG8_USART6_RTS   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PG9_USART6_RX   \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PG10_LTDC_G3 \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PG10_LTDC_B2 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PG11_ETH        \
	(STM32_PINMUX_ALT_FUNC_11 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F7_PINMUX_FUNC_PG11_LTDC_B3 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PG12_USART6_RTS  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PG12_LTDC_B4 \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PG12_LTDC_B1 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PG13_USART6_CTS  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PG13_ETH        \
	(STM32_PINMUX_ALT_FUNC_11 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F7_PINMUX_FUNC_PG13_LTDC_R0 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PG14_USART6_TX  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PG14_ETH        \
	(STM32_PINMUX_ALT_FUNC_11 | STM32_PUSHPULL_NOPULL | \
	 STM32_OSPEEDR_VERY_HIGH_SPEED)
#define STM32F7_PINMUX_FUNC_PG14_LTDC_B0 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PG15_USART6_CTS  \
	(STM32_PINMUX_ALT_FUNC_8 | STM32_PUSHPULL_PULLUP)

/* Port H */
#define STM32F7_PINMUX_FUNC_PH2_LTDC_R0 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PH3_LTDC_R1 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PH4_I2C2_SCL   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32F7_PINMUX_FUNC_PH5_I2C2_SDA   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32F7_PINMUX_FUNC_PH6_PWM12_CH1 \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_PULLUP)

#define STM32F7_PINMUX_FUNC_PH7_I2C3_SCL   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)

#define STM32F7_PINMUX_FUNC_PH8_I2C3_SDA   \
	(STM32_PINMUX_ALT_FUNC_4 | STM32_OPENDRAIN_PULLUP)
#define STM32F7_PINMUX_FUNC_PH8_LTDC_R2 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PH9_PWM12_CH2 \
	(STM32_PINMUX_ALT_FUNC_9 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PH9_LTDC_R3 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PH10_PWM5_CH1 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PH10_LTDC_R4 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PH11_PWM5_CH2 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PH11_LTDC_R5 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PH12_PWM5_CH3 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PH12_LTDC_R6 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PH13_LTDC_G2 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PH14_LTDC_G3 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PH15_LTDC_G4 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

/* Port I */
#define STM32F7_PINMUX_FUNC_PI0_PWM5_CH4 \
	(STM32_PINMUX_ALT_FUNC_2 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PI0_SPI2_NSS \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PI0_LTDC_G5 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PI1_SPI2_SCK \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PI1_LTDC_G6 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PI2_PWM8_CH4 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PI2_SPI2_MISO \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)
#define STM32F7_PINMUX_FUNC_PI2_LTDC_G7 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PI3_SPI2_MOSI \
	(STM32_PINMUX_ALT_FUNC_5 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PI4_LTDC_B4 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PI5_PWM8_CH1 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PI5_LTDC_B5 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PI6_PWM8_CH2 \
	(STM32_PINMUX_ALT_FUNC_3 | STM32_PUSHPULL_PULLUP)
#define STM32F7_PINMUX_FUNC_PI6_LTDC_B6 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PI7_LTDC_B7 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PI9_LTDC_VSYNC \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PI10_LTDC_HSYNC \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PI12_LTDC_HSYNC \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PI13_LTDC_VSYNC \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PI14_LTDC_CLK \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PI15_LTDC_R0 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

/* Port J */
#define STM32F7_PINMUX_FUNC_PJ0_LTDC_R1 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PJ1_LTDC_R2 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PJ2_LTDC_R3 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PJ2_DSI_TE_EXTERNAL \
	(STM32_PINMUX_ALT_FUNC_13 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PJ3_LTDC_R4 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PJ4_LTDC_R5 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PJ5_LTDC_R6 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PJ6_LTDC_R7 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PJ7_LTDC_G0 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PJ8_LTDC_G1 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PJ9_LTDC_G2 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PJ10_LTDC_G3 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PJ11_LTDC_G4 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PJ12_LTDC_B0 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PJ13_LTDC_B1 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PJ14_LTDC_B2 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PJ15_LTDC_B3 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

/* Port K */
#define STM32F7_PINMUX_FUNC_PK0_LTDC_G5 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PK1_LTDC_G6 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PK2_LTDC_G7 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PK3_LTDC_B4 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PK4_LTDC_B5 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PK5_LTDC_B6 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PK6_LTDC_B7 \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#define STM32F7_PINMUX_FUNC_PK7_LTDC_DE \
	(STM32_PINMUX_ALT_FUNC_14 | STM32_PUSHPULL_NOPULL)

#endif /* ZEPHYR_DRIVERS_PINMUX_STM32_PINMUX_STM32F7_H_ */
