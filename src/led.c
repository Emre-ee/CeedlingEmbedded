/**
 * @file	                  led.c
 * @version	               0.1
 * @date	                  21 December 2023
 * @author	               Mehmet Emre Ozturk
 *                         xxxx xxxx
 * @brief	               This module contains led functions.
 * /***************************************** Include Files*************************************************************************/
#include "led.h"
#include "hal_gpio.h"
/*************************************************************************************************************************************/
/***************************************** Defines ************************************************************************************/
/*************************************************************************************************************************************/
/***************************************** Global Variables **************************************************************************/
/*************************************************************************************************************************************/
/***************************************** Static Functions **************************************************************************/
/*************************************************************************************************************************************/
/***************************************** Global Functions **************************************************************************/
ledErr_t led_init(void)
{
   return(LED_OK);
}

ledErr_t led_write(GPIO_Typedef_t * Gpio, uint8_t pin, uint8_t value)
{
   ledErr_t retVal = 0;

   retVal = hal_gpio_write(&Gpio->gpio_port, pin, value);

   return(retVal);
}

uint8_t led_read(GPIO_Typedef_t * Gpio, uint8_t pin)
{
   uint8_t retVal = 0;

   retVal = hal_gpio_read(&Gpio->gpio_port, pin);

   return(retVal);
}

/*************************************************************************************************************************************/
