//#include "app.h"
#include "../MCAL/ADC/ADC_DRIVER.h"
#include "../MCAL/GPIO/MCAL_GPIO.h"
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
  u8 x;
  ADC_void_init(V_AVCC,PRESCALER_64);
  gpio_PORT_direction_intialization(GPIO_PORTBID,0xff);
  while (1)
  {
    ADC_void_startConversion(channel_0);
    x = ADC_u16_read();
    gpio_PORT_write_value(GPIO_PORTBID,(x<<8));
  }
  
}


