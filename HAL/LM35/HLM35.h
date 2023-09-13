/*
 * HLM35.h
 *
 *  Created on: Sep 13, 2023
 *      Author: omnia
 */

#ifndef HAL_HLM35_HLM35_H_
#define HAL_HLM35_HLM35_H_
#include "stdint.h"
#include "../STD.h"
#include "../MCAL_MACROUS.h"
#include "../MCAL_REGS.h"

#define LM35_PORT      GPIO_PORTAID
#define LM35_CHANNEL   GPIO_PIN7 //lm35 pin

void HLM35_voidInit(void);
uint16_t   HLM35_u8ReadTemp(void);

#endif /* HAL_HLM35_HLM35_H_ */
