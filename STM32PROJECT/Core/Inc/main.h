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
#define s1_Pin GPIO_PIN_1
#define s1_GPIO_Port GPIOA
#define s2_Pin GPIO_PIN_2
#define s2_GPIO_Port GPIOA
#define s3_Pin GPIO_PIN_3
#define s3_GPIO_Port GPIOA
#define s4_Pin GPIO_PIN_4
#define s4_GPIO_Port GPIOA
#define s5_Pin GPIO_PIN_5
#define s5_GPIO_Port GPIOA
#define s6_Pin GPIO_PIN_6
#define s6_GPIO_Port GPIOA
#define red_Pin GPIO_PIN_7
#define red_GPIO_Port GPIOA
#define seg1_Pin GPIO_PIN_0
#define seg1_GPIO_Port GPIOB
#define seg2_Pin GPIO_PIN_1
#define seg2_GPIO_Port GPIOB
#define seg3_Pin GPIO_PIN_2
#define seg3_GPIO_Port GPIOB
#define yellow_Pin GPIO_PIN_8
#define yellow_GPIO_Port GPIOA
#define green_Pin GPIO_PIN_9
#define green_GPIO_Port GPIOA
#define red1_Pin GPIO_PIN_10
#define red1_GPIO_Port GPIOA
#define yellow1_Pin GPIO_PIN_11
#define yellow1_GPIO_Port GPIOA
#define green1_Pin GPIO_PIN_12
#define green1_GPIO_Port GPIOA
#define s7_Pin GPIO_PIN_15
#define s7_GPIO_Port GPIOA
#define seg4_Pin GPIO_PIN_3
#define seg4_GPIO_Port GPIOB
#define seg5_Pin GPIO_PIN_4
#define seg5_GPIO_Port GPIOB
#define seg6_Pin GPIO_PIN_5
#define seg6_GPIO_Port GPIOB
#define seg7_Pin GPIO_PIN_6
#define seg7_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
