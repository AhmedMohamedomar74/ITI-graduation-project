#ifndef  _APP_H_ 
#define _APP_H_
#include "../HAL/keypad.h"
#include "../HAL/lcd.h"
#include <stdint.h>
#include <util/delay.h>
#include <string.h>
typedef struct{
    char position[128];
    char name[128];
    uint8_t password[4];

}user_t;
void app_init(void);
uint8_t Cheack_Password(uint8_t n);
void set_passward();

void run_program(void);

#endif // ! _APP_H_ 