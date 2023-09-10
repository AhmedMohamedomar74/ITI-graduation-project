/*
 * HFAN_prog.c
 *
 *  Created on: Sep 10, 2023
 *      Author: omnia
 */


void HFAN_void_FANInit(uint8_t Copy_u8FAN)
{
	switch(Copy_u8FAN)
	{
	case FAN_ONE:   GPIO_setPinDir(FAN_ONE_PORT,FAN_ONE_PIN,output);break;
	case FAN_TWO:   GPIO_setPinDir(FAN_TWO_PORT,FAN_TWO_PIN,output);break;
	case FAN_THREE: GPIO_setPinDir(FAN_THREE_PORT,FAN_THREE_PIN,output);break;
	default:break;
	}

}

void HFAN_void_FANOn(uint8_t Copy_u8FAN)
{
	switch(Copy_u8FAN)
	{
	case FAN_ONE:   GPIO_setPinValue(FAN_ONE_PORT,FAN_ONE_PIN,high);break;
	case FAN_TWO:   GPIO_setPinValue(FAN_TWO_PORT,FAN_TWO_PIN,high);break;
	case FAN_THREE: GPIO_setPinValue(FAN_THREE_PORT,FAN_THREE_PIN,high);break;
	default:break;
	}

}

void HFAN_voidOff(u8 Copy_u8Fan)
{
	switch(Copy_u8Fan)
	{
	case FAN_ONE:   MDIO_voidSetPinValue(FAN_ONE_PORT,FAN_ONE_PIN,low);break;
	case FAN_TWO:   MDIO_voidSetPinValue(FAN_TWO_PORT,FAN_TWO_PIN,low);break;
	case FAN_THREE: MDIO_voidSetPinValue(FAN_THREE_PORT,FAN_THREE_PIN,low);break;
	default:break;
	}
}

void HFAN_void_FANFlip(uint8_t Copy_u8FAN)
{
	switch(Copy_u8FAN)
		{
		case FAN_ONE:   GPIO_toggPin(FAN_ONE_PORT,FAN_ONE_PIN);break;
		case FAN_TWO:   GPIO_toggPin(FAN_TWO_PORT,FAN_TWO_PIN);break;
		case FAN_THREE: GPIO_toggPin(FAN_THREE_PORT,FAN_THREE_PIN);break;
		default:break;
		}

}



