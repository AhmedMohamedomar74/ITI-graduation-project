/*
 * HLM35.c
 *
 *  Created on: Sep 13, 2023
 *      Author: omnia
 */

#include "LDR.h"
#include "stdint.h"

void HLDR_voidInit(void)
{
	ADC_voidInt(V_AVCC , PRESCALER_8);
	GPIO_SETPINDIR(LDR_PORT,LDR_CHANNEL,GPIO_INPUT_DIRECTION);
}

uint16_t   HLDR_u8ReadTemp(void)
{
	ADC_voidStartConversion(channal_5);
	 uint16_t Local_u16ADCRead;//(digital)
	 uint16_t Local_u16LightIntensity;//(analog)

	 Local_u16ADCRead= ADC_u16ADCReadSync();

	 Local_u16LightIntensity = ((Local_u16ADCRead *2));

	return Local_u16LightIntensity;


}
