/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f0xx_hal.h"
#include "stm32f0xx_ll_adc.h"
#include "stm32f0xx_ll_dma.h"
#include "stm32f0xx_ll_crs.h"
#include "stm32f0xx_ll_rcc.h"
#include "stm32f0xx_ll_bus.h"
#include "stm32f0xx_ll_system.h"
#include "stm32f0xx_ll_exti.h"
#include "stm32f0xx_ll_cortex.h"
#include "stm32f0xx_ll_utils.h"
#include "stm32f0xx_ll_pwr.h"
#include "stm32f0xx_ll_tim.h"
#include "stm32f0xx_ll_usart.h"
#include "stm32f0xx_ll_gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define M1_CURR_AMPL_W_Pin LL_GPIO_PIN_0
#define M1_CURR_AMPL_W_GPIO_Port GPIOA
#define M1_CURR_AMPL_U_Pin LL_GPIO_PIN_1
#define M1_CURR_AMPL_U_GPIO_Port GPIOA
#define M1_CURR_AMPL_V_Pin LL_GPIO_PIN_2
#define M1_CURR_AMPL_V_GPIO_Port GPIOA
#define M1_BUS_VOLTAGE_Pin LL_GPIO_PIN_3
#define M1_BUS_VOLTAGE_GPIO_Port GPIOA
#define M1_TEMPERATURE_Pin LL_GPIO_PIN_4
#define M1_TEMPERATURE_GPIO_Port GPIOA
#define M1_ENCODER_A_Pin LL_GPIO_PIN_5
#define M1_ENCODER_A_GPIO_Port GPIOA
#define M1_PWM_UH_Pin LL_GPIO_PIN_8
#define M1_PWM_UH_GPIO_Port GPIOA
#define M1_PWM_VH_Pin LL_GPIO_PIN_9
#define M1_PWM_VH_GPIO_Port GPIOA
#define M1_PWM_WH_Pin LL_GPIO_PIN_10
#define M1_PWM_WH_GPIO_Port GPIOA
#define M1_ENCODER_B_Pin LL_GPIO_PIN_3
#define M1_ENCODER_B_GPIO_Port GPIOB
#define UART_TX_Pin LL_GPIO_PIN_6
#define UART_TX_GPIO_Port GPIOB
#define UART_RX_Pin LL_GPIO_PIN_7
#define UART_RX_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */
#define LED_Pin	LL_GPIO_PIN_6
#define ENC_BTN	LL_GPIO_PIN_12
#define ENC_EA	LL_GPIO_PIN_13
#define ENC_EB	LL_GPIO_PIN_14

//define LCD PINS
#define LCD_CS	LL_GPIO_PIN_11
#define LCD_RST	LL_GPIO_PIN_2
#define LCD_CD	LL_GPIO_PIN_1
#define LCD_SCL	LL_GPIO_PIN_0
#define LCD_SDA	LL_GPIO_PIN_7
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
