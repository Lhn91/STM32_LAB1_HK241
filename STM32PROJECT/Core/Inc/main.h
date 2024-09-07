/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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
#define Led_red_Pin GPIO_PIN_5
#define Led_red_GPIO_Port GPIOA
#define Led_yellow_Pin GPIO_PIN_6
#define Led_yellow_GPIO_Port GPIOA
#define Led_green_Pin GPIO_PIN_7
#define Led_green_GPIO_Port GPIOA
#define red1_Pin GPIO_PIN_8
#define red1_GPIO_Port GPIOA
#define yellow1_Pin GPIO_PIN_9
#define yellow1_GPIO_Port GPIOA
#define green1_Pin GPIO_PIN_10
#define green1_GPIO_Port GPIOA
#define red2_Pin GPIO_PIN_11
#define red2_GPIO_Port GPIOA
#define yellow2_Pin GPIO_PIN_12
#define yellow2_GPIO_Port GPIOA
#define green2_Pin GPIO_PIN_13
#define green2_GPIO_Port GPIOA

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
