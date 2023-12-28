/**
 * @file	               hal_gpio.c
 * @version	               0.1
 * @date	               21 December 2023
 * @author	               Mehmet Emre Ozturk
 *                         xxxx xxxx
 * @brief	               This module contains gpio functions.
 * /***************************************** Include Files*************************************************************************/
#include "hal_gpio.h"
/*************************************************************************************************************************************/
/***************************************** Defines ************************************************************************************/
#define assert_port(x)     do{ \
           if (!(x)) return(GPIO_INVALID); \
} while (0);

#define assert_pin(x)      do{ \
           if ((x) < GPIO_PIN_0 || (x) > GPIO_PIN_15) return(GPIO_INVALID); \
} while (0);

#define assert_value(x)    do{ \
           if ((x) != GPIO_SET || (x) != GPIO_RESET) return(GPIO_INVALID); \
} while (0);


GPIO_Typedef_t Gpio =
{
   .gpio_pin  = 0,
   .gpio_port = 0
};
/*************************************************************************************************************************************/
/***************************************** Global Variables **************************************************************************/
/*************************************************************************************************************************************/
/***************************************** Static Functions **************************************************************************/
/*************************************************************************************************************************************/
/***************************************** Global Functions **************************************************************************/
int hal_gpio_write(GPIO_Port_t * port, GPIO_Pin_t pin, GPIO_Status_t Value)
{
   assert_port(port);
   assert_pin(pin);
   assert_value(Value);

   if (Value == GPIO_SET)
   {
      // write 1 to the bit field corresponding pin number
      port->ODR |= (1 << pin);
   }
   else
   {
      // write 0  to the bit field corresponding pin number
      port->ODR &= ~(1 << pin);
   }


   return(GPIO_OK);
}

GPIO_Status_t hal_gpio_read(GPIO_Port_t * port, GPIO_Pin_t pin)
{
   GPIO_Status_t value = 0;

   assert_port(port);
   assert_pin(pin);

   value = (uint8_t)((port->IDR >> pin) & 0x00000001);
   return(value);
}

/*************************************************************************************************************************************/
