/*
 * adc1.h
 *
 * Created: 9/10/2023 10:32:21 PM
 *  Author: Rawan
 */ 

/*
 * ADC_int.h
 *
 *  Created on: Apr 1, 2023
 *      Author: D E L L
 */

#ifndef ADC_ADC_INT_H_
#define ADC_ADC_INT_H_


typedef enum
{
	Channel_0 = 0,
	Channel_1 ,
	Channel_2 ,
	Channel_3 ,
	Channel_4 ,
	Channel_5 ,
	Channel_6 ,
	Channel_7 ,
}CHANNEL;

typedef enum
{
	PRESCALER_2  ,
	PRESCALER_4  ,
	PRESCALER_8  ,
	PRESCALER_16 ,
	PRESCALER_32 ,
	PRESCALER_64 ,
	PRESCALER_128,
}PRESCALER;

typedef enum
{
	V_AREF=0,
	V_AVCC,
	V_RESERVED,
	V_INTERNAL,
}VOLTAGE;


void MADC_voidInit(u8 Copy_u8Volt,u8 Copy_u8Prescaler);
void MADC_voidStartConversion(u8 Copy_u8Channel);
u16  MADC_u16ADCReadSync(void);
void MADC_voidReadAsync(void(*ptr)(void),u16 *Copy_pu16Data);
void MADC_voidEnable(void);
void MADC_voidDisable(void);

#endif /* ADC_ADC_INT_H_ */