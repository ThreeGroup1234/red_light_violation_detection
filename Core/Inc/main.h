/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f1xx_hal.h"

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
#define CS3_Pin GPIO_PIN_13
#define CS3_GPIO_Port GPIOC
#define CS2_Pin GPIO_PIN_14
#define CS2_GPIO_Port GPIOC
#define CS1_Pin GPIO_PIN_15
#define CS1_GPIO_Port GPIOC
#define LEDW_Pin GPIO_PIN_0
#define LEDW_GPIO_Port GPIOA
#define INFREN_Pin GPIO_PIN_1
#define INFREN_GPIO_Port GPIOA
#define INFREW_Pin GPIO_PIN_2
#define INFREW_GPIO_Port GPIOA
#define INFRES_Pin GPIO_PIN_3
#define INFRES_GPIO_Port GPIOA
#define INFREE_Pin GPIO_PIN_4
#define INFREE_GPIO_Port GPIOA
#define LEDS_Pin GPIO_PIN_0
#define LEDS_GPIO_Port GPIOB
#define LEDE_Pin GPIO_PIN_10
#define LEDE_GPIO_Port GPIOB
#define BEEP_Pin GPIO_PIN_12
#define BEEP_GPIO_Port GPIOB
#define YELLOWEW_Pin GPIO_PIN_14
#define YELLOWEW_GPIO_Port GPIOB
#define REDEW_Pin GPIO_PIN_15
#define REDEW_GPIO_Port GPIOB
#define GREENEW_Pin GPIO_PIN_8
#define GREENEW_GPIO_Port GPIOA
#define YELLOWSN_Pin GPIO_PIN_9
#define YELLOWSN_GPIO_Port GPIOA
#define REDSN_Pin GPIO_PIN_10
#define REDSN_GPIO_Port GPIOA
#define GREENSN_Pin GPIO_PIN_11
#define GREENSN_GPIO_Port GPIOA
#define LEDN_Pin GPIO_PIN_15
#define LEDN_GPIO_Port GPIOA
#define DIGF_Pin GPIO_PIN_3
#define DIGF_GPIO_Port GPIOB
#define DIGA_Pin GPIO_PIN_4
#define DIGA_GPIO_Port GPIOB
#define DIGG_Pin GPIO_PIN_5
#define DIGG_GPIO_Port GPIOB
#define DIGD_Pin GPIO_PIN_6
#define DIGD_GPIO_Port GPIOB
#define DIGE_Pin GPIO_PIN_7
#define DIGE_GPIO_Port GPIOB
#define DIGC_Pin GPIO_PIN_8
#define DIGC_GPIO_Port GPIOB
#define DIGB_Pin GPIO_PIN_9
#define DIGB_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
