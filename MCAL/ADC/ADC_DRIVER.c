/*
 * ADC_DRIVER.c
 *
 * Created: 9/11/2023 1:40:04 AM
 *  Author: Rawan
 */ 

#define NULLPTR '\0'
#include "STD.h"
//#include "std_macros.h"
#include "MCAL_MACROUS.h"
#include "ADC_REG.h"
#include "ADC_DRIVER.h"


void ADC_void_init(VOLTAGE voltage,PRESCALER prescaler)
{
	/*ADC enable to process a conversion*/
	SET_BIT(ADCSRA_REG,ADEN_BIT);
		
	/*VOLTAGE_MODE_SET*/
	switch (voltage)
	{
		case V_AREF:
		CLEAR_BIT(ADMUX_REG,REFS0_BIT);
		CLEAR_BIT(ADMUX_REG,REFS1_BIT);
		break;
		
		case V_AVCC:
		SET_BIT(ADMUX_REG,REFS0_BIT);
		CLEAR_BIT(ADMUX_REG,REFS1_BIT);
		break;
		
		case RESERVED:
		CLEAR_BIT(ADMUX_REG,REFS0_BIT);
		SET_BIT(ADMUX_REG,REFS1_BIT);
		break;
		
		case INTERNAL:
		SET_BIT(ADMUX_REG,REFS0_BIT);
		SET_BIT(ADMUX_REG,REFS1_BIT);
		break;
		
		default:
		break;
	}

	CLEAR_BIT(ADMUX_REG,ADLAR_BIT);   //ADLAR right adjustment

	/*choose prescaler */
	switch(prescaler)
	{
		case PRESCALER_2:
		CLEAR_BIT(ADCSRA_REG,ADPS0_BIT);
		CLEAR_BIT(ADCSRA_REG,ADPS1_BIT);
		CLEAR_BIT(ADCSRA_REG,ADPS2_BIT);
		break;

		case PRESCALER_4:
		CLEAR_BIT(ADCSRA_REG,ADPS0_BIT);
		SET_BIT(ADCSRA_REG,ADPS1_BIT);
		CLEAR_BIT(ADCSRA_REG,ADPS2_BIT);
		break;

		case PRESCALER_8:
		SET_BIT(ADCSRA_REG,ADPS0_BIT);
		SET_BIT(ADCSRA_REG,ADPS1_BIT);
		CLEAR_BIT(ADCSRA_REG,ADPS2_BIT);
		break;

		case PRESCALER_16:
		CLEAR_BIT(ADCSRA_REG,ADPS0_BIT);
		CLEAR_BIT(ADCSRA_REG,ADPS1_BIT);
		SET_BIT(ADCSRA_REG,ADPS2_BIT);
		break;

		case PRESCALER_32:
		SET_BIT(ADCSRA_REG,ADPS0_BIT);
		CLEAR_BIT(ADCSRA_REG,ADPS1_BIT);
		SET_BIT(ADCSRA_REG,ADPS2_BIT);
		break;
		
		case PRESCALER_64:
		CLEAR_BIT(ADCSRA_REG,ADPS0_BIT);
		SET_BIT(ADCSRA_REG,ADPS1_BIT);
		SET_BIT(ADCSRA_REG,ADPS2_BIT);
		break;

		case PRESCALER_128:
		SET_BIT(ADCSRA_REG,ADPS0_BIT);
		SET_BIT(ADCSRA_REG,ADPS1_BIT);
		SET_BIT(ADCSRA_REG,ADPS2_BIT);
		break;
		
		default: 
	     break;
	}

}
void ADC_void_startConversion(CHANNEL channel)
{
	/*ADC_START_CONVERSION */
	SET_BIT(ADCSRA_REG,ADSC_BIT);
	
	/*CHANNEL_SELECTION*/
	switch(channel)
	{
		case channel_0:
		CLEAR_BIT(ADMUX_REG,MUX0_BIT);
		CLEAR_BIT(ADMUX_REG,MUX1_BIT);
		CLEAR_BIT(ADMUX_REG,MUX2_BIT);
		CLEAR_BIT(ADMUX_REG,MUX3_BIT);
		CLEAR_BIT(ADMUX_REG,MUX4_BIT);
		break;
		
		case channel_1:
		SET_BIT(ADMUX_REG,MUX0_BIT);
		CLEAR_BIT(ADMUX_REG,MUX1_BIT);
		CLEAR_BIT(ADMUX_REG,MUX2_BIT);
		CLEAR_BIT(ADMUX_REG,MUX3_BIT);
		CLEAR_BIT(ADMUX_REG,MUX4_BIT);
		break;
		
		case channel_2:
		CLEAR_BIT(ADMUX_REG,MUX0_BIT);
		SET_BIT(ADMUX_REG,MUX1_BIT);
		CLEAR_BIT(ADMUX_REG,MUX2_BIT);
		CLEAR_BIT(ADMUX_REG,MUX3_BIT);
		CLEAR_BIT(ADMUX_REG,MUX4_BIT);
		break;
		
		case channel_3:
		SET_BIT(ADMUX_REG,MUX0_BIT);
		SET_BIT(ADMUX_REG,MUX1_BIT);
		CLEAR_BIT(ADMUX_REG,MUX2_BIT);
		CLEAR_BIT(ADMUX_REG,MUX3_BIT);
		CLEAR_BIT(ADMUX_REG,MUX4_BIT);
		break;
		
		case channel_4:
		CLEAR_BIT(ADMUX_REG,MUX0_BIT);
		CLEAR_BIT(ADMUX_REG,MUX1_BIT);
		SET_BIT(ADMUX_REG,MUX2_BIT);
		CLEAR_BIT(ADMUX_REG,MUX3_BIT);
		CLEAR_BIT(ADMUX_REG,MUX4_BIT);
		break;
		
		case channel_5:
		SET_BIT(ADMUX_REG,MUX0_BIT);
		CLEAR_BIT(ADMUX_REG,MUX1_BIT);
		SET_BIT(ADMUX_REG,MUX2_BIT);
		CLEAR_BIT(ADMUX_REG,MUX3_BIT);
		CLEAR_BIT(ADMUX_REG,MUX4_BIT);
		break;
		
		case channel_6:
		CLEAR_BIT(ADMUX_REG,MUX0_BIT);
		SET_BIT(ADMUX_REG,MUX1_BIT);
		SET_BIT(ADMUX_REG,MUX2_BIT);
		CLEAR_BIT(ADMUX_REG,MUX3_BIT);
		CLEAR_BIT(ADMUX_REG,MUX4_BIT);
		break;
		
		case channel_7:
		SET_BIT(ADMUX_REG,MUX0_BIT);
		SET_BIT(ADMUX_REG,MUX1_BIT);
		SET_BIT(ADMUX_REG,MUX2_BIT);
		CLEAR_BIT(ADMUX_REG,MUX3_BIT);
		CLEAR_BIT(ADMUX_REG,MUX4_BIT);
		break;
		
		default:
		break;
	}
}

u16 ADC_u16_read(void)
{
	u16 read_val;
	while (read_BIT(ADCSRA_REG,ADIF_BIT) == 0);
		SET_BIT(ADCSRA_REG,ADIF_BIT);

	read_val  = ADCL_REG ;
	read_val |= (ADCH_REG << 8);

	/*CLEAR ADIF*/
	//SET_BIT(ADCSRA_REG,ADIF_BIT);
	return read_val;
}

void ADC_void_enable(void)
{
	SET_BIT(ADCSRA_REG,ADIE_BIT);
}

void ADC_void_disable(void)
{
	CLEAR_BIT(ADCSRA_REG,ADIE_BIT);
}