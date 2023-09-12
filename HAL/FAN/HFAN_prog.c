/*
 * HFAN_prog.c
 *
 *  Created on: Sep 10, 2023
 *      Author: omnia
 */
#include "../MCAL_PROG/GPIO/MCAL_GPIO.h"
#include "../LIBRARY/MCAL_MACROUS.h"
#include "../LIBRARY/MCAL_REGS.h"
#include "../LIBRARY/STD.h"

#include <stdint.h>
#include "HFAN_Confg.h"
#include "HFAN_int.h"

void HFAN_void_FANInit(uint8_t Copy_u8FAN)
{
	switch(Copy_u8FAN)
	{
	case FAN_ONE:   GPIO_SETPINDIR(FAN_ONE_PORT,FAN_ONE_PIN,GPIO_OUTPUT_DIRECTION);break;
	case FAN_TWO:   GPIO_SETPINDIR(FAN_TWO_PORT,FAN_TWO_PIN,GPIO_OUTPUT_DIRECTION);break;
	case FAN_THREE: GPIO_SETPINDIR(FAN_THREE_PORT,FAN_THREE_PIN,GPIO_OUTPUT_DIRECTION);break;
	default:break;
	}

}

void HFAN_void_FANOn(uint8_t Copy_u8FAN)
{
	switch(Copy_u8FAN)
	{
	case FAN_ONE:   GPIO_SETPINValue(FAN_ONE_PORT,FAN_ONE_PIN,GPIO_HIGH);break;
	case FAN_TWO:   GPIO_SETPINValue(FAN_TWO_PORT,FAN_TWO_PIN,GPIO_HIGH);break;
	case FAN_THREE: GPIO_SETPINValue(FAN_THREE_PORT,FAN_THREE_PIN,GPIO_HIGH);break;
	default:break;
	}

}

void HFAN_void_FANOff(uint8_t Copy_u8Fan)
{
	switch(Copy_u8Fan)
	{
	case FAN_ONE:   GPIO_SETPINValue(FAN_ONE_PORT,FAN_ONE_PIN,GPIO_LOW);break;
	case FAN_TWO:   GPIO_SETPINValue(FAN_TWO_PORT,FAN_TWO_PIN,GPIO_LOW);break;
	case FAN_THREE: GPIO_SETPINValue(FAN_THREE_PORT,FAN_THREE_PIN,GPIO_LOW);break;
	default:break;
	}
}

void HFAN_void_FANFlip(uint8_t Copy_u8FAN)
{
	switch(Copy_u8FAN)
		{
		case FAN_ONE:   GPIO_u8TOGGPin(FAN_ONE_PORT,FAN_ONE_PIN);break;
		case FAN_TWO:   GPIO_u8TOGGPin(FAN_TWO_PORT,FAN_TWO_PIN);break;
		case FAN_THREE: GPIO_u8TOGGPin(FAN_THREE_PORT,FAN_THREE_PIN);break;
		default:break;
		}

}



