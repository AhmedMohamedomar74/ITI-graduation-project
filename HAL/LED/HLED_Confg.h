/*
 * HLED_Confg.h
 *
 *  Created on: Sep 10, 2023
 *      Author: omnia
 */

#ifndef HAL_HLED_CONFG_H_
#define HAL_HLED_CONFG_H_
#include "../STD.h"
#include "../MCAL_MACROUS.h"
#include "../MCAL_REGS.h"

//* LED PORT *//
#define LED_GRN_PORT     GPIO_PORTBID
#define LED_BLU_PORT     GPIO_PORTBID
#define LED_RED_PORT     GPIO_PORTBID

//* LED PIN *//
#define LED_GRN_PIN  GPIO_PIN0
#define LED_BLU_PIN  GPIO_PIN1
#define LED_RED_PIN  GPIO_PIN2

//* LEDS*//
#define GRN_LED  0
#define BLU_LED  1
#define RED_LED  2

#endif /* HAL_HLED_CONFG_H_ */
