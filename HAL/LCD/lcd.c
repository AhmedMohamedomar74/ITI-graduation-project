#include <stdint.h>
#include <util/delay.h>
#include <string.h>
#include "lcd.h"

void HLCD_send_command(u8 cope_h_command ){
	
	CLEAR_BIT(PORT_CNL,H_LCD_RS);
	_delay_ms(10);
	CLEAR_BIT(PORT_CNL,H_LCD_RW);
	_delay_ms(10);
	SET_PORT(PORT_DATA,cope_h_command);
	SET_BIT(PORT_CNL,H_LCD_EN);
	_delay_ms(10);
	CLEAR_BIT(PORT_CNL,H_LCD_EN);

}
void HLCD_INIT(void){
	/*set control and data port */
	/*set enable bit */
	SET_PORT_DIR(PORT_CNL_direction,0xFF);
	SET_PORT_DIR(PORT_DATA_direction,0xFF);
	SET_BIT(PORT_CNL,H_LCD_EN);
	_delay_ms(10);
	HLCD_send_command(_LCD_8BIT_MODE_2_LINE);
	_delay_ms(100);
	HLCD_send_command(_LCD_DISPLAY_ON_UNDERLINE_ON_CURSOR_ON );
	_delay_ms(10);
	HLCD_send_command(_LCD_CLEAR );
}
void HLCD_send_DATA(u8 cope_h_data){
	
		SET_BIT(PORT_CNL,H_LCD_RS);
		CLEAR_BIT(PORT_CNL,H_LCD_RW);
		SET_PORT(PORT_DATA ,cope_h_data);
		SET_BIT(PORT_CNL,H_LCD_EN);
		_delay_ms(10);
		CLEAR_BIT(PORT_CNL,H_LCD_EN);
		
}
void HLCD_voidCLRScreen(void){
		_delay_us(40);
		HLCD_send_command(0x01);
		_delay_us(40);
}
void HLCD_voidGoToXy (u8 Copy_u8XPosition, u8 Copy_u8YPosition){
	_delay_us(40);
	
	switch(Copy_u8YPosition)
	{
		case ROW1 :
				HLCD_send_command(_LCD_DDRAM_START +Copy_u8XPosition);	
				break;
		case ROW2:
				HLCD_send_command(0xC0+Copy_u8XPosition);	
				break;
	}
	
	}
	

void HLCD_voidSendString (const u8 *copy_ps8str){
	u8 i=0;
	while(copy_ps8str[i]!='\0'){
		HLCD_send_DATA(copy_ps8str[i]);
		i++;
	}
}
void LCD_send_string_pos(u8 * copy_ps8str,u8  Copy_u8XPosition, u8  Copy_u8YPosition){
	_delay_us(40);
	switch(Copy_u8YPosition)
	{
		case ROW1 :
				HLCD_send_command(0X80 +Copy_u8XPosition);	
				break;
		case ROW2:
				HLCD_send_command(0xC0+Copy_u8XPosition);	
				break;
	}
	u8 i=0;
	while(copy_ps8str[i]!='\0'){
		HLCD_send_DATA(copy_ps8str[i]);
		i++;
	}
}
void LCD_Send_Number(u8 num)
{
	 u8 arr[10],i=0,j=0;
		   if(num == 0)
		   {
			   HLCD_send_DATA('0');
		   }
		   else
		   {
			   while(num)
			   {
					arr[i]=num%10+'0';
					num/=10;
					i++;
			   }
			   for(j=i;j>0;j--)
			   {
				   HLCD_send_DATA(arr[j-1]);
			   }
		   }
}
void LCD_Send_Number_Pos(u8 num,u8 row,u8 column)
{
	HLCD_voidGoToXy(row,column);
	LCD_Send_Number(num);
}
/*void HLCD_voidSendNumber(uint32_t Copy_s32Number){
	u8 * str; 
	 memset((char *)str, '\0', 3);
	 sprintf(str, "%i", Copy_s32Number);
	 u8 i=0;
	 while(str[i]!='\0'){
		HLCD_send_DATA(str[i]);
		i++;
	 }
}
*/