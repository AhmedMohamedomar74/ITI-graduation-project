//#include "app.h"
#include "../MCAL/ADC/ADC_DRIVER.h"
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
   ADC_void_init(V_AREF,PRESCALER_2);
   ADC_void_enable();
   ADC_void_startConversion(channel_0);
   
}


