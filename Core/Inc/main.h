/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define LED_GREEN_Pin GPIO_PIN_11
#define LED_GREEN_GPIO_Port GPIOD
#define LED_RED_Pin GPIO_PIN_12
#define LED_RED_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */

/* Base address of the Flash sectors Bank 1 */
#define ADDR_FLASH_SECTOR_0_BANK1      ((uint32_t)0x08000000) /* Base @ of Sector  0,  16 Kbytes */
#define ADDR_FLASH_SECTOR_1_BANK1      ((uint32_t)0x08004000) /* Base @ of Sector  1,  16 Kbytes */
#define ADDR_FLASH_SECTOR_2_BANK1      ((uint32_t)0x08008000) /* Base @ of Sector  2,  16 Kbytes */
#define ADDR_FLASH_SECTOR_3_BANK1      ((uint32_t)0x0800C000) /* Base @ of Sector  3,  16 Kbytes */
#define ADDR_FLASH_SECTOR_4_BANK1      ((uint32_t)0x08010000) /* Base @ of Sector  4,  64 Kbytes */
#define ADDR_FLASH_SECTOR_5_BANK1      ((uint32_t)0x08020000) /* Base @ of Sector  5, 128 Kbytes */
#define ADDR_FLASH_SECTOR_6_BANK1      ((uint32_t)0x08040000) /* Base @ of Sector  6, 128 Kbytes */
#define ADDR_FLASH_SECTOR_7_BANK1      ((uint32_t)0x08060000) /* Base @ of Sector  7, 128 Kbytes */
#define ADDR_FLASH_SECTOR_8_BANK1      ((uint32_t)0x08080000) /* Base @ of Sector  8, 128 Kbytes */
#define ADDR_FLASH_SECTOR_9_BANK1      ((uint32_t)0x080A0000) /* Base @ of Sector  9, 128 Kbytes */
#define ADDR_FLASH_SECTOR_10_BANK1     ((uint32_t)0x080C0000) /* Base @ of Sector 10, 128 Kbytes */
#define ADDR_FLASH_SECTOR_11_BANK1     ((uint32_t)0x080E0000) /* Base @ of Sector 11, 128 Kbytes */


/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
