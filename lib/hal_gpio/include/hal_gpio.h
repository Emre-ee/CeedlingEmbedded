/**
 * @file	                  hal_gpio.h
 * @version	               0.1
 * @date	                  21 December 2023
 * @author	               Mehmet Emre Ozturk
 *                         xxxx xxxx
 * @brief	               This module contains interface gpio modules.
 **/
#ifndef HAL_GPIO_H
#define HAL_GPIO_H
/***************************************** Include Files*************************************************************************/
#include <stdint.h>
/*************************************************************************************************************************************/
/***************************************** Defines ************************************************************************************/
typedef enum
{
   GPIO_RESET = 0,
   GPIO_SET
}GPIO_Status_t;

typedef enum
{
   GPIO_OK      = 0,
   GPIO_FAILURE = -1,
   GPIO_INVALID = -2
}GPIO_Err_t;


typedef struct
{
   uint32_t ODR;
   uint32_t IDR;
}GPIO_Port_t;


typedef enum
{
   GPIO_PIN_0 = 0,
   GPIO_PIN_1,
   GPIO_PIN_2,
   GPIO_PIN_3,
   GPIO_PIN_4,
   GPIO_PIN_5,
   GPIO_PIN_6,
   GPIO_PIN_7,
   GPIO_PIN_8,
   GPIO_PIN_9,
   GPIO_PIN_10,
   GPIO_PIN_11,
   GPIO_PIN_12,
   GPIO_PIN_13,
   GPIO_PIN_14,
   GPIO_PIN_15,
   GPIO_PIN_INVALID = -1
} GPIO_Pin_t;



typedef struct
{
   GPIO_Pin_t  gpio_pin;
   GPIO_Port_t gpio_port;
}GPIO_Typedef_t;
/*************************************************************************************************************************************/
/***************************************** Functions Prototypes **************************************************************************/
int hal_gpio_write(GPIO_Port_t * port, GPIO_Pin_t pin, GPIO_Status_t Value);
GPIO_Status_t hal_gpio_read(GPIO_Port_t * port, GPIO_Pin_t pin);

/*************************************************************************************************************************************/



#endif //HAL_GPIO_H
