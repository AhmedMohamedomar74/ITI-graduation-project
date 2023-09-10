/*
 * HLED_prog.c
 *
 *  Created on: Sep 10, 2023
 *      Author: omnia
 */


#include "stdint.h"
#include "HLED_Confg.h"
#include "HLED_int.h"

void HLED_void_LEDInit(uint8_t Copy_u8LED)
{
	switch(Copy_u8LED)
	{
	case(GRN_LED):GPIO_setPinDir(LED_GRN_PORT,LED_GRN_PIN,output);break;
	case(BLU_LED):GPIO_setPinDir(LED_BLU_PORT,LED_BLU_PIN,output);break;
	case(RED_LED):GPIO_setPinDir(LED_RED_PORT,LED_RED_PIN,output);break;
	default:break;
	}
}
void HLED_void_LEDOn(uint8_t Copy_u8LED)
{
	switch(Copy_u8LED)
		{
		case GRN_LED: GPIO_setPinValue(LED_GRN_PORT,LED_GRN_PIN,high); break;
		case BLU_LED: GPIO_setPinValue(LED_BLU_PORT,LED_BLU_PIN,high); break;
		case RED_LED: GPIO_setPinValue(LED_RED_PORT,LED_RED_PIN,high); break;
		default:break;
		}

}
void HLED_void_LEDOff(uint8_t Copy_u8LED)
{
	switch(Copy_u8LED)
		{
		case GRN_LED: GPIO_setPinValue(LED_GRN_PORT,LED_GRN_PIN,low); break;
		case BLU_LED: GPIO_setPinValue(LED_BLU_PORT,LED_BLU_PIN,low); break;
		case RED_LED: GPIO_setPinValue(LED_RED_PORT,LED_RED_PIN,low); break;
		default:break;
		}
}

void HLED_void_LEDFlip(uint8_t Copy_u8LED)
{
   switch(Copy_u8LED)
	{
	case GRN_LED: GPIO_toggPin(LED_GRN_PORT,LED_GRN_PIN); break;
	case BLU_LED: GPIO_toggPin(LED_BLU_PORT,LED_BLU_PIN); break;
	case RED_LED: GPIO_toggPin(LED_RED_PORT,LED_RED_PIN); break;
	default:break;
	}}
