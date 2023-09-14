/*
 * HLDR.h
 *
 *  Created on: Sep 13, 2023
 *      Author: omnia
 */

#ifndef HAL_HLDR_HLDR_H_
#define HAL_HLDR_HLDR_H_
#include "stdint.h"
#include "../MCAL/MCALL.LIB/GPIO.h"
#include "../MCAL/MCALL.LIB/BITSCON.h"
#include "../MCAL/MCALL.LIB/GPIOREG.h"

#define LDR_PORT      channel_4
#define LDR_CHANNEL   GPIO_PIN4  //HLDR pin

void HLDR_voidInit(void);
uint16_t  HLDR_u8ReadTemp(void);

#endif /* HAL_HLDR_HLDR_H_ */
