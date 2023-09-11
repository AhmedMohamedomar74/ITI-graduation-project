/*
 * ADC_DRIVER.h
 *
 * Created: 9/11/2023 1:36:30 AM
 *  Author: Rawan
 */ 


#ifndef ADC_DRIVER_H_
#define ADC_DRIVER_H_


#include "../STD.h"
#include "../MCAL_REGS.h"
/********** ADMUX *************/
#define REFS1_BIT   7
#define REFS0_BIT   6
#define ADLAR_BIT   5

/********** ADCSRA *************/
#define  ADEN_BIT   7
#define  ADSC_BIT   6
#define ADATE_BIT   5
#define  ADIF_BIT   4
#define  ADIE_BIT   3
#define ADPS2_BIT   2
#define ADPS1_BIT   1
#define ADPS0_BIT   0

/*********** SFIOR **************/
#define ADTS2_BIT  7
#define ADTS1_BIT  6
#define ADTS0_BIT  5

/*Voltage*/
#define AREF	   0
#define AVCC       1
#define RESERVED   2
#define INTERNAL   3

/*MUX_BITS*/
#define MUX0_BIT 0
#define MUX1_BIT 1
#define MUX2_BIT 2
#define MUX3_BIT 3
#define MUX4_BIT 4
/**
 * ***********************************
*/



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