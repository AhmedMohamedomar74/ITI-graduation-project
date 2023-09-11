/*
 * ADC_DRIVER.h
 *
 * Created: 9/11/2023 1:36:30 AM
 *  Author: Rawan
 */ 


#ifndef ADC_DRIVER_H_
#define ADC_DRIVER_H_
#include "STD.h"
typedef enum
{
	channel_0 ,
	channel_1 ,
	channel_2 ,
	channel_3 ,
	channel_4 ,
	channel_5 ,
	channel_6 ,
	channel_7 ,
}CHANNEL;

typedef enum
{
	V_AREF,
	V_AVCC,
	V_RESERVED,
	V_INTERNAL,
}VOLTAGE;

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

void ADC_void_init(u8 voltage,u8 prescaler);
void ADC_void_startConversion(u8 Channel);
u16 ADC_u16_read(void);
void ADC_void_enable(void);
void ADC_void_disable(void);

#endif /* ADC_DRIVER_H_ */