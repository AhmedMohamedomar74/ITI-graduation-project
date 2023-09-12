//#include "app.h"
#include <stdio.h>
#include "../HAL/LCD/lcd.h"
#include "../HAL/LM35/LM35.h"
#define degree_sysmbol 0xdf
u8 Temperature[10];
int main(){
/*   intialize the system
app_init();
int i=0;
while(1)
 {
   run my program for infinity 
    run_program();
 }
 return 0;*/  
  
  HLCD_INIT();
  while (1)
  {
    
    LCD_Send_Number_Pos(LM35_READ(),ROW1,5);
    HLCD_voidCLRScreen();
  }
  
}


