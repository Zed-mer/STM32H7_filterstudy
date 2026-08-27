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
#include "stm32h7xx_hal.h"

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
#define Contr_Pin GPIO_PIN_10
#define Contr_GPIO_Port GPIOC
#define RST_Pin GPIO_PIN_2
#define RST_GPIO_Port GPIOA
#define PF1_Pin GPIO_PIN_10
#define PF1_GPIO_Port GPIOB
#define PF2_Pin GPIO_PIN_11
#define PF2_GPIO_Port GPIOB
#define SDIO_Pin GPIO_PIN_10
#define SDIO_GPIO_Port GPIOH
#define DRO_Pin GPIO_PIN_9
#define DRO_GPIO_Port GPIOH
#define DPH_Pin GPIO_PIN_12
#define DPH_GPIO_Port GPIOH
#define SCK_Pin GPIO_PIN_11
#define SCK_GPIO_Port GPIOD
#define SDO_Pin GPIO_PIN_12
#define SDO_GPIO_Port GPIOD
#define PWR_Pin GPIO_PIN_1
#define PWR_GPIO_Port GPIOB
#define CSB_Pin GPIO_PIN_8
#define CSB_GPIO_Port GPIOH
#define DRC_Pin GPIO_PIN_15
#define DRC_GPIO_Port GPIOB
#define OSK_Pin GPIO_PIN_7
#define OSK_GPIO_Port GPIOH
#define PF0_Pin GPIO_PIN_13
#define PF0_GPIO_Port GPIOB
#define IOUP_Pin GPIO_PIN_14
#define IOUP_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
