/*************** INCLUDES **************************/

#include "Data_Types.h"
#include "MCAL_MACROUS.h"
#include "UART.h"

/*==============================================================================================================================================
 * Driver Modules implementations
 *==============================================================================================================================================*/

/* 
 * Prototype   : void UART_void_Init(u32 baud);
 * Description : initialize UART with pre configured parameter
 * Arguments   : u32
 * return      : void  
 */
 void UART_void_Init(u32 baud)
 {
	/*Choose baud rate that will be used by sender and receiver by writing to UBRRL/UBRRH*/
	u16 UBRR ;
	UBRR=(F_CPU/(16*baud))-1 ;
	UBRRH=(u8)(UBRR>>8);
	UBRRL=(u8)UBRR;
	
	/*Enable USART Sender & Receiver*/
	SET_BIT(UCSRB,TXEN);
	SET_BIT(UCSRB,RXEN);
	
	/*8 bit data to be sent,1 stop bit and no parity bits*/
	SET_BIT(UCSRC,URSEL);
	SET_BIT(UCSRC,UCSZ0);
	SET_BIT(UCSRC,UCSZ1);
	
	
 }/*end of UART_void_Init*/
 
/* 
 * Prototype   : void UART_void_SendData(u8 data);
 * Description : send 1 byte over UART
 * Arguments   : u8
 * return      : void  
 */
 void UART_void_SendData(u8 data)
 {
	/*Wait for UDR transmit buffer to be empty*/
	while(read_BIT(UCSRA,UDRE)==0);
	/*Put data to UDR transmit buffer transmit*/
	UDR=data ;
 
 }/*end of UART_void_SendData*/

/* 
 * Prototype   :  u8 UART_u8_ReceiveData(void);
 * Description : receive 1 byte over UART  
 * Arguments   : void
 * return      : u8 received byte  
 */
 u8 UART_u8_ReceiveData(void)
 {
	/*Wait for UDR receive buffer to be filled with data*/
	while(read_BIT(UCSRA,RXC)==0);
	/*Receive data from UDR receive buffer*/
	return UDR ;
	 
 }/*end of UART_u8_ReceiveData*/

