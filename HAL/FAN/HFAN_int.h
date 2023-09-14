/*
 * HFAN_int.h
 *
 *  Created on: Sep 10, 2023
 *      Author: omnia
 */

#ifndef HAL_FAN_HFAN_INT_H_
#define HAL_FAN_HFAN_INT_H_

#include "stdint.h"

void HFAN_void_FANInit(uint8_t Copy_u8FAN);
void HFAN_void_FANOn(uint8_t Copy_u8FAN);
void HFAN_void_FANOff(uint8_t Copy_u8FAN);
//void HFAN_void_FANFlip(uint8_t Copy_u8FAN);

#endif /* HAL_FAN_HFAN_INT_H_ */
