/*
 * DIO.h
 *
 * Created: 9/9/2023 6:07:58 PM
 *  Author: Rawan
 */ 

#include "STD.h"
#ifndef DIO_H_
#define DIO_H_

void GPIO_v_setPINDir(u8 portname,u8 pinnumber,u8 direction);
// Set the direction of the given pin in the given port (direction 0 = input : 1 = output)


void GPIO_v_write(u8 portname,u8 pinnumber,u8 outputvalue);
//Set the value of the given pin in the given port (outputvalue 0 = low : 1 = high)


u8 GPIO_u8_read(u8 portname,u8 pinnumber);
//Returns 1 if the value of the given pin is high and zero if the value is low

void GPIO_v_toggle(u8 portname,u8 pinnumber);
//Reverse the value of the given pin in the given port.

void GPIO_v_set_port_direction(u8 portname,u8 direction);
// set the direction of whole port 

void GPIO_v_write_port(u8 portname,u8 portvalue);
// Write the value to all port pins.

u8 GPIO_u8_read_port(u8 portname);
//read the value of the port .

void GPIO_v_connectpullup(u8 portname ,u8 pinnumber,u8 connect_pullup);
// Connect and disconnect pull up resistor to the given pin at the given port 

void GPIO_v_write_low_nibble(u8 portname,u8 value);
// write a value to the low nibble of the port 

void GPIO_v_write_high_nibble(u8 portname,u8 value);
//write a value to the high nibble of the port 


#endif /* DIO_H_ */