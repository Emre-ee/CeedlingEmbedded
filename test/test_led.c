/**
 * @file	                  test_led.c
 * @version	               0.1
 * @date	                  21 December 2023
 * @author	               Mehmet Emre Ozturk
 *                         xxxx xxxx
 * @brief	               This module contains tests of test_led.c functions.
 **/
#ifdef TEST
/***************************************** Test Include Files*************************************************************************/
#include "unity.h"
#include "mock_hal_gpio.h"
#include "led.h"
#include <stdlib.h>
/*************************************************************************************************************************************/
/***************************************** Macros ************************************************************************************/

/***
 * Allocation memory macro functions
 * @dest: Variable name
 * @type: Data type (int, char, struct my_var ....)
 * @len: Length of data
 */
#define TEST_GET_MEMORY_MALLOC(dest, type, len)    do{                               \
           (dest) = (type *)malloc(len * sizeof(type)); \
} while (0)
#define TEST_GET_MEMORY_CALLOC(dest, type, len)    do{                               \
           (dest) = (type *)calloc(len, sizeof(type)); \
} while (0)

#define TEST_FREE_MEMORY(dest)                     do{             \
           free((dest)); \
}while (0)
/*************************************************************************************************************************************/
/***************************************** Global Variables **************************************************************************/
/*************************************************************************************************************************************/
/***************************************** Test setup functions **********************************************************************/
void setUp(void)
{
}

void tearDown(void)
{
}

/*************************************************************************************************************************************/
/***************************************** Static Functions **************************************************************************/
/*************************************************************************************************************************************/
/***************************************** Test Suites********************************************************************************/
void test_led_write_Valid_Conditions(void)
{
   /* initialize Variables*/
   GPIO_Typedef_t * GPIOA;

   TEST_GET_MEMORY_CALLOC(GPIOA, GPIO_Typedef_t, 1);


   hal_gpio_write_ExpectAndReturn(&GPIOA->gpio_port, GPIO_PIN_0, GPIO_SET, GPIO_OK);
   TEST_ASSERT_EQUAL(LED_OK, led_write(GPIOA, GPIO_PIN_0, GPIO_SET));

   /* Free memory */
   TEST_FREE_MEMORY(GPIOA);
}

void test_led_read_Valid_Conditions(void)
{
   /* initialize Variables*/
   GPIO_Typedef_t * GPIOA;

   TEST_GET_MEMORY_CALLOC(GPIOA, GPIO_Typedef_t, 1);


   hal_gpio_read_ExpectAndReturn(&GPIOA->gpio_port, GPIO_PIN_0, GPIO_OK);
   TEST_ASSERT_EQUAL(GPIO_RESET, led_read(GPIOA, GPIO_PIN_0));

   /* Free memory */
   TEST_FREE_MEMORY(GPIOA);
}

/*************************************************************************************************************************************/
#endif // TEST
