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
#define ptr_PORTA * ((volatile uint8_t*)PORTA_BASE)
#define PORTB_Ptr  *((volatile uint8_t*)PORTB_BASE)
#define PORTC_Ptr  *((volatile uint8_t*)PORTC_BASE)
#define PORTD_Ptr * ((volatile uint8_t*)PORTD_BASE)
/*
*************** PORT_DIRECTION ***************
*/
#define _PTRDDRA        *((volatile uint8_t*)DDRA_BASE)
#define _PTRDDRB       *((volatile uint8_t*)DDRB_BASE)
#define _PTRDDRC        *((volatile uint8_t*)DDRC_BASE)
#define _PTRDDRD        *((volatile uint8_t*)DDRD_BASE)
/*
************** PORT_PINS ***************
*/
#define PINA_PTR        *((volatile uint8_t*)PINA_BASE)
#define PINB_PTR        *((volatile uint8_t*)PINB_BASE)
#define PINC_PTR        *((volatile uint8_t*)PINC_BASE)
#define PIND_PTR        *((volatile uint8_t*)PIND_BASE)


#endif