/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32u0xx_hal.h"

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
#define Radio_Reset_Pin GPIO_PIN_13
#define Radio_Reset_GPIO_Port GPIOC
#define ARM_LED_Pin GPIO_PIN_2
#define ARM_LED_GPIO_Port GPIOA
#define Warn_LED_Pin GPIO_PIN_3
#define Warn_LED_GPIO_Port GPIOA
#define ARM_switch_Pin GPIO_PIN_4
#define ARM_switch_GPIO_Port GPIOA
#define Radio_DIO1_Pin GPIO_PIN_5
#define Radio_DIO1_GPIO_Port GPIOA
#define Radio_DIO2_Pin GPIO_PIN_6
#define Radio_DIO2_GPIO_Port GPIOA
#define Radio_DIO3_Pin GPIO_PIN_7
#define Radio_DIO3_GPIO_Port GPIOA
#define Voltage_Sense_Pin GPIO_PIN_0
#define Voltage_Sense_GPIO_Port GPIOB
#define Current_Sens_Pin GPIO_PIN_1
#define Current_Sens_GPIO_Port GPIOB
#define Power_Good_Pin GPIO_PIN_11
#define Power_Good_GPIO_Port GPIOB
#define Radio_CS_Pin GPIO_PIN_12
#define Radio_CS_GPIO_Port GPIOB
#define Radio_Clock_Pin GPIO_PIN_13
#define Radio_Clock_GPIO_Port GPIOB
#define Radio_MOSI_Pin GPIO_PIN_14
#define Radio_MOSI_GPIO_Port GPIOB
#define USB_Neg_Pin GPIO_PIN_11
#define USB_Neg_GPIO_Port GPIOA
#define USB_poss_Pin GPIO_PIN_12
#define USB_poss_GPIO_Port GPIOA
#define Radio_Interrupt_Pin GPIO_PIN_13
#define Radio_Interrupt_GPIO_Port GPIOA
#define Radio_DIO5_Pin GPIO_PIN_14
#define Radio_DIO5_GPIO_Port GPIOA
#define Radio_DIO4_Pin GPIO_PIN_15
#define Radio_DIO4_GPIO_Port GPIOA
#define V_Bus_Sens_Pin GPIO_PIN_3
#define V_Bus_Sens_GPIO_Port GPIOB
#define Power_LED_Pin GPIO_PIN_7
#define Power_LED_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
