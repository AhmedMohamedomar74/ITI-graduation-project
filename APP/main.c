//#include "app.h"
#include "../MCAL/UART/UART.h"
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
  UART_void_Init(9600);
  while (1)
  {
    UART_void_SendData(1);
  }
  
}


