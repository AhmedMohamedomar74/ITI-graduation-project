/*
 * HFAN_Confg.h
 *
 *  Created on: Sep 10, 2023
 *      Author: omnia
 */

#ifndef HAL_FAN_HFAN_CONFG_H_
#define HAL_FAN_HFAN_CONFG_H_

#include "../MCAL_PROG/GPIO/MCAL_GPIO.h"
#include "../LIBRARY/MCAL_MACROUS.h"
#include "../LIBRARY/MCAL_REGS.h"
#include "../LIBRARY/STD.h"

//* FAN PORT *//
#define FAN_ONE_PORT      GPIO_PORTAID
#define FAN_TWO_PORT      GPIO_PORTBID
#define FAN_THREE_PORT    GPIO_PORTCID

//* FAN PIN *//
#define FAN_ONE_PIN    GPIO_PIN1
#define FAN_TWO_PIN    GPIO_PIN1
#define FAN_THREE_PIN  GPIO_PIN1

//*FANS*//
#define FAN_ONE     0
#define FAN_TWO     1
#define FAN_THREE   2

#endif /* HAL_FAN_HFAN_CONFG_H_ */
