#ifndef  _MCAL_REGS_h_
#define _MCAL_REGS_h_

/*
*************** ALL PORTS ADRESSES ***************
*/
#define     PORTA_BASE      0x3B
#define     DDRA_BASE       0x3A
#define     PINA_BASE       0x39
// GROUP B


#define     PORTB_BASE      0x38
#define     DDRB_BASE       0x37
#define     PINB_BASE       0x36
//GROUP C
#define     PORTC_BASE      0x35
#define     DDRC_BASE       0x34
#define     PINC_BASE       0x33

// GROUP  D
#define     PORTD_BASE      0x32
#define     DDRD_BASE       0x31
#define     PIND_BASE       0x30


//POINTERS  FOR GROUPS
/*
*************** PORT_NAMES **************
*/
#define ptr_PORTA * ((volatile u8*)PORTA_BASE)
#define PORTB_Ptr  *((volatile u8*)PORTB_BASE)
#define PORTC_Ptr  *((volatile u8*)PORTC_BASE)
#define PORTD_Ptr * ((volatile u8*)PORTD_BASE)
/*
*************** PORT_DIRECTION ***************
*/
#define _PTRDDRA        *((volatile u8*)DDRA_BASE)
#define _PTRDDRB       *((volatile u8*)DDRB_BASE)
#define _PTRDDRC        *((volatile u8*)DDRC_BASE)
#define _PTRDDRD        *((volatile u8*)DDRD_BASE)
/*
************** PORT_PINS ***************
*/
#define PINA_PTR        *((volatile u8*)PINA_BASE)
#define PINB_PTR        *((volatile u8*)PINB_BASE)
#define PINC_PTR        *((volatile u8*)PINC_BASE)
#define PIND_PTR        *((volatile u8*)PIND_BASE)
/*
************** ADC_REG ***************
*/
#define  ADMUX_REG       (*((volatile u8*)0x27))
#define ADCSRA_REG       (*((volatile u8*)0x26))
#define  SFIOR_REG       (*((volatile u8*)0x50))
#define   ADCH_REG       (*((volatile u16*)0x25))
#define   ADCL_REG       (*((volatile u16*)0x24))

#endif