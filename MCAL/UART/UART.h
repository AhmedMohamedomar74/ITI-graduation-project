
#ifndef __UART_H__
#define __UART_H__

/*************** INCLUDES **************************/
#include "../MCAL_MACROUS.h"
#include "../MCAL_REGS.h"
#include "../STD.h"

/************************UART Functions Defination************************/
/**
 * *************************registers pins********************************
*/
/*UCSRA*/
#define MPCM_BIT             0
#define  U2X_BIT             1
#define   PE_BIT             2
#define  DOR_BIT             3
#define   FE_BIT             4
#define UDRE_BIT             5
#define  TXC_BIT             6
#define  RXC_BIT             7

/*UCSRB*/
#define  TXB8_BIT            0
#define  RXB8_BIT            1
#define UCSZ2_BIT            2
#define  TXEN_BIT            3
#define  RXEN_BIT            4
#define UDRIE_BIT            5
#define TXCIE_BIT            6
#define RXCIE_BIT            7

/*UCSRC*/
#define UCPOL_BIT            0
#define UCSZ0_BIT            1
#define UCSZ1_BIT            2
#define  USBS_BIT            3
#define  UPM0_BIT            4
#define  UPM1_BIT            5
#define UMSEL_BIT            6
#define URSEL_BIT            7

/* 
 * Prototype   : void UART_void_Init(u32 baud);
 * Description : initialize UART with pre configured parameter
 * Arguments   : u32
 * return      : void  
 */
 void UART_void_Init(u32 baud);

/* 
 * Prototype   : void UART_void_SendData(u8 data);
 * Description : send 1 byte over UART
 * Arguments   : u8
 * return      : void  
 */
 void UART_void_SendData(u8 data);

/* 
 * Prototype   :  u8 UART_u8_ReceiveData(void);
 * Description : receive 1 byte over UART  
 * Arguments   : void
 * return      : u8 received byte  
 */
 u8 UART_u8_ReceiveData(void);


#endif /* __UART_H__ */