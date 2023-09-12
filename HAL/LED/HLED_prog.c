/*
 * HLED_prog.c
 *
 *  Created on: Sep 10, 2023
 *      Author: omnia
 */
#include "../MCAL_PROG/GPIO/MCAL_GPIO.h"
#include "../LIBRARY/MCAL_MACROUS.h"
#include "../LIBRARY/MCAL_REGS.h"
#include "../LIBRARY/STD.h"

#include "stdint.h"
#include "HLED_Confg.h"
#include "HLED_int.h"

void HLED_void_LEDInit(uint8_t Copy_u8LED)
{
	switch(Copy_u8LED)
	{
	case(GRN_LED):GPIO_SETPINDIR(LED_GRN_PORT,LED_GRN_PIN,GPIO_OUTPUT_DIRECTION);break;
	case(BLU_LED):GPIO_SETPINDIR(LED_BLU_PORT,LED_BLU_PIN,GPIO_OUTPUT_DIRECTION);break;
	case(RED_LED):GPIO_SETPINDIR(LED_RED_PORT,LED_RED_PIN,GPIO_OUTPUT_DIRECTION);break;
	default:break;
	}
}
void HLED_void_LEDOn(uint8_t Copy_u8LED)
{
	switch(Copy_u8LED)
		{
		case GRN_LED: GPIO_SETPINValue(LED_GRN_PORT,LED_GRN_PIN,GPIO_HIGH); break;
		case BLU_LED: GPIO_SETPINValue(LED_BLU_PORT,LED_BLU_PIN,GPIO_HIGH); break;
		case RED_LED: GPIO_SETPINValue(LED_RED_PORT,LED_RED_PIN,GPIO_HIGH); break;
		default:break;
		}

}
void HLED_void_LEDOff(uint8_t Copy_u8LED)
{
	switch(Copy_u8LED)
		{
		case GRN_LED: GPIO_SETPINValue(LED_GRN_PORT,LED_GRN_PIN,GPIO_LOW); break;
		case BLU_LED: GPIO_SETPINValue(LED_BLU_PORT,LED_BLU_PIN,GPIO_LOW); break;
		case RED_LED: GPIO_SETPINValue(LED_RED_PORT,LED_RED_PIN,GPIO_LOW); break;
		default:break;
		}
}

void HLED_void_LEDFlip(uint8_t Copy_u8LED)
{
   switch(Copy_u8LED)
	{
	case GRN_LED: GPIO_u8TOGGPin(LED_GRN_PORT,LED_GRN_PIN); break;
	case BLU_LED: GPIO_u8TOGGPin(LED_BLU_PORT,LED_BLU_PIN); break;
	case RED_LED: GPIO_u8TOGGPin(LED_RED_PORT,LED_RED_PIN); break;
	default:break;
	}}
