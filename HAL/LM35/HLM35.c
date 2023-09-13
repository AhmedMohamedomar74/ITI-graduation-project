/*
 * HLM35.c
 *
 *  Created on: Sep 13, 2023
 *      Author: omnia
 */
#include "../STD.h"
#include "../MCAL_MACROUS.h"
#include "../MCAL_REGS.h"

#include "HLM35.h"
#include "stdint.h"

void HLM35_voidInit(void)
{
	ADC_void_init(V_AVCC , PRESCALER_8);
	GPIO_SETPINDIR(LM35_PORT,LM35_CHANNEL,GPIO_INPUT_DIRECTION);
}

uint16_t   HLM35_u8ReadTemp(void)
{
	ADC_void_startConversion(channel_0);
	 uint16_t Local_u16ADCRead;//(digital)
	 uint16_t Local_u16Readmv;//(analog)

	 Local_u16ADCRead= ADC_u16_read();

	 Local_u16Readmv= ((Local_u16ADCRead * 0.0048828125) * 100);
	 Local_u16Readmv=Local_u16Readmv/10;
	return Local_u16Readmv;


}
