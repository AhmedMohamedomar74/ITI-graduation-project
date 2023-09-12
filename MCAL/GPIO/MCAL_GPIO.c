#include "MCAL_GPIO.h"

void gpio_pin_direction_intialization(const pin_config_t * _pin_config ){
    switch(_pin_config->direction){
         case GPIO_OUTPUT_DIRECTION:
            switch(_pin_config->port){
                case GPIO_PORTAID:SET_BIT(_PTRDDRA, _pin_config->pin);
                break;
                case GPIO_PORTBID:SET_BIT(_PTRDDRB, _pin_config->pin);
                break;
                case GPIO_PORTCID:SET_BIT(_PTRDDRC, _pin_config->pin);
                break;
                case GPIO_PORTDID:SET_BIT(_PTRDDRD, _pin_config->pin);
                break;

            }
            break;
            case GPIO_INPUT_DIRECTION:
            switch(_pin_config->port){
                case GPIO_PORTAID:CLEAR_BIT(_PTRDDRA, _pin_config->pin);
                break;
                case GPIO_PORTBID:CLEAR_BIT(_PTRDDRB, _pin_config->pin);
                break;
                case GPIO_PORTCID:CLEAR_BIT(_PTRDDRC, _pin_config->pin);
                break;
                case GPIO_PORTDID:CLEAR_BIT(_PTRDDRD, _pin_config->pin);
                break;

            }
            break;
    }}
    
void gpio_pin_write_logic(const pin_config_t * _pin_config ,u8 logic){
         switch(logic){
            case GPIO_HIGH:
            switch(_pin_config->port){
                case GPIO_PORTAID:SET_BIT(ptr_PORTA, _pin_config->pin);
                break;
                case GPIO_PORTBID:SET_BIT(PORTB_Ptr, _pin_config->pin);
                break;
                case GPIO_PORTCID:SET_BIT(PORTC_Ptr, _pin_config->pin);
                break;
                case GPIO_PORTDID:SET_BIT(PORTD_Ptr, _pin_config->pin);
                break;

            }
            break;
            case GPIO_LOW:
            switch(_pin_config->port){
                  case GPIO_PORTAID:CLEAR_BIT(ptr_PORTA, _pin_config->pin);
                break;
                case GPIO_PORTBID:CLEAR_BIT(PORTB_Ptr, _pin_config->pin);
                break;
                case GPIO_PORTCID:CLEAR_BIT(PORTC_Ptr, _pin_config->pin);
                break;
                case GPIO_PORTDID:CLEAR_BIT(PORTD_Ptr, _pin_config->pin);
                break;

            }
            break;
         }
    }


void gpio_pin_direction_status(const pin_config_t * _pin_config ,dierction_t * copy_u8direction){
    switch(_pin_config->port){
                case GPIO_PORTAID:
                * copy_u8direction=read_BIT(_PTRDDRA, _pin_config->pin);
                break;
                case GPIO_PORTBID: 
                * copy_u8direction=read_BIT(_PTRDDRA, _pin_config->pin);
                break;
                case GPIO_PORTCID:
                 * copy_u8direction=read_BIT(_PTRDDRA, _pin_config->pin);
                break;
                case GPIO_PORTDID:
                 * copy_u8direction=read_BIT(_PTRDDRA, _pin_config->pin);

                break;

            }
}

logic_t gpio_pin_read_logic(const pin_config_t *_pin_config ,u8 * copy_u8logic){
       switch(_pin_config->port){
                case GPIO_PORTAID:
                return read_BIT(PINA_PTR,_pin_config->pin) ;
                break;
                case GPIO_PORTBID: 
                return   read_BIT(PINB_PTR,_pin_config->pin) ;
                break;
                case GPIO_PORTCID:
                 return  read_BIT(PINC_PTR,_pin_config->pin) ;
                break;
                case GPIO_PORTDID:
                 return  read_BIT(PIND_PTR,_pin_config->pin) ;

                break;

            }
}

void gpio_pin_intialization(const pin_config_t * _pin_config ){
     gpio_pin_direction_intialization(_pin_config);
     gpio_pin_write_logic(_pin_config,GPIO_LOW);
}

void gpio_pin_toggle(const pin_config_t * _pin_config ){
    switch(_pin_config->port){
                  case GPIO_PORTAID:toggle_BIT(ptr_PORTA, _pin_config->pin);
                break;
                case GPIO_PORTBID:toggle_BIT(PORTB_Ptr, _pin_config->pin);
                break;
                case GPIO_PORTCID:toggle_BIT(PORTC_Ptr, _pin_config->pin);
                break;
                case GPIO_PORTDID:toggle_BIT(PORTD_Ptr, _pin_config->pin);
                break;

            }
}


void GPIO_SETPORTDIR(port_index_t PORTID, dierction_t DIR)
{

	if ( GPIO_OUTPUT_DIRECTION ==DIR )
		{
			switch (PORTID)
			{ case GPIO_PORTAID:_PTRDDRA  =0xFF;break;
			  case GPIO_PORTBID:_PTRDDRB =0xFF;break;
			  case GPIO_PORTCID:_PTRDDRC =0xFF;break;
			  case GPIO_PORTDID:_PTRDDRD =0xFF;break;
			  default: break;
			}}
	else if (GPIO_INPUT_DIRECTION==DIR)
		{
			switch (PORTID)
					{ case GPIO_PORTAID:_PTRDDRA  =0x0;break;
					  case GPIO_PORTBID:_PTRDDRB =0x0;break;
					  case GPIO_PORTCID:_PTRDDRC =0x0;break;
					  case GPIO_PORTDID:_PTRDDRD =0x0;break;
					  default: break;}}


}
void GPIO_SETPORTValue(port_index_t PORTID, unsigned char value)
{
	switch (PORTID)
					{ case GPIO_PORTAID:ptr_PORTA=value;break;
					  case GPIO_PORTBID:PORTB_Ptr=value;break;
					  case GPIO_PORTCID:PORTC_Ptr=value;break;
					  case GPIO_PORTDID:PORTD_Ptr=value;break;
					  default: break;
					}

}

void GPIO_SETPINDIR(port_index_t PORTID, pin_index_t PINID ,dierction_t PINDIR)
{
	if (PORTID <= GPIO_PORTDID && PINID <= GPIO_PIN7)
		{
			if(GPIO_OUTPUT_DIRECTION==PINDIR)
			{
				switch (PORTID)
			{ case GPIO_PORTAID:SET_BIT(_PTRDDRA ,PINID);break;
			  case GPIO_PORTBID:SET_BIT(_PTRDDRB ,PINID);break;
			  case GPIO_PORTCID:SET_BIT(_PTRDDRC ,PINID);break;
			  case GPIO_PORTDID:SET_BIT(_PTRDDRD ,PINID);break;
			  default: break;
			}}
			else if (GPIO_INPUT_DIRECTION==PINDIR)
					{
						switch (PORTID)
								{ case GPIO_PORTAID:CLEAR_BIT(_PTRDDRA ,PINID);break;
								  case GPIO_PORTBID:CLEAR_BIT(_PTRDDRB ,PINID);break;
								  case GPIO_PORTCID:CLEAR_BIT(_PTRDDRC ,PINID);break;
								  case GPIO_PORTDID:CLEAR_BIT(_PTRDDRD ,PINID);break;
								  default: break;}}
	}

}

void GPIO_SETPINValue(port_index_t PORTID, pin_index_t PINID ,logic_t PINvalue)
{
	if (PORTID <= GPIO_PORTDID && PINID <= GPIO_PIN7)
			{
				if(PINvalue==GPIO_HIGH)
				{
					switch (PORTID)
				{ case GPIO_PORTAID:SET_BIT(ptr_PORTA,PINID);break;
				  case GPIO_PORTBID:SET_BIT(PORTB_Ptr,PINID);break;
				  case GPIO_PORTCID:SET_BIT(PORTC_Ptr,PINID);break;
				  case GPIO_PORTDID:SET_BIT(PORTD_Ptr,PINID);break;
				  default: break;
				}}
				else if (PINvalue==GPIO_LOW)
						{
							switch (PORTID)
									{ case GPIO_PORTAID:CLEAR_BIT(ptr_PORTA,PINID);break;
									  case GPIO_PORTBID:CLEAR_BIT(PORTB_Ptr,PINID);break;
									  case GPIO_PORTCID:CLEAR_BIT(PORTC_Ptr,PINID);break;
									  case GPIO_PORTDID:CLEAR_BIT(PORTD_Ptr,PINID);break;
									  default: break;}}
		}
}

logic_t GPIO_GETPINValue(port_index_t PORTID, pin_index_t PINID )
{
	logic_t pinvalue;
		if (PORTID <= GPIO_PORTDID && PINID <= GPIO_PIN7)
		{
			switch (PORTID)
					{ case GPIO_PORTAID:pinvalue=read_BIT(PINA_PTR,PINID);break;
					  case GPIO_PORTBID:pinvalue=read_BIT(PINB_PTR,PINID);break;
					  case GPIO_PORTCID:pinvalue=read_BIT(PINC_PTR,PINID);break;
					  case GPIO_PORTDID:pinvalue=read_BIT(PIND_PTR,PINID);break;
					  default: break;
					}
		}
		return pinvalue;
}

void GPIO_u8TOGGPin(uint8_t Copy_u8Port,uint8_t Copy_u8Pin)
{
	switch (Copy_u8Port)
				{
				case GPIO_PORTAID: toggle_BIT(ptr_PORTA,Copy_u8Pin); break;
				case GPIO_PORTBID: toggle_BIT(PORTB_Ptr,Copy_u8Pin); break;
				case GPIO_PORTCID: toggle_BIT(PORTC_Ptr,Copy_u8Pin); break;
				case GPIO_PORTDID: toggle_BIT(PORTD_Ptr,Copy_u8Pin); break;
				default:break;
				}
}

/*
*************PORT CONFIGRATION *****************
*/

void gpio_PORT_direction_intialization(port_index_t copy_portin ,u8 copy_direction ){
    switch(copy_portin){
                case GPIO_PORTAID:_PTRDDRA =copy_direction ;
                break;
                case GPIO_PORTBID:_PTRDDRB =copy_direction ;
                break;
                case GPIO_PORTCID:_PTRDDRC =copy_direction ;
                break;
                case GPIO_PORTDID:_PTRDDRD =copy_direction ;
                break;

            }
}

void gpio_PORT_write_value(port_index_t copy_portin ,u8 copy_logic ){
         switch(copy_portin){
                case GPIO_PORTAID:ptr_PORTA=copy_logic;
                break;
                case GPIO_PORTBID:PORTB_Ptr=copy_logic;
                break;
                case GPIO_PORTCID:PORTC_Ptr = copy_logic;
                break;
                case GPIO_PORTDID:PORTD_Ptr=copy_logic ;
                break;

            }
}
void gpio_PORT_read_value(port_index_t copy_portin ,u8 * copy_logic ){
    switch(copy_portin){
                case GPIO_PORTAID:* copy_logic = ptr_PORTA;
                break;
                case GPIO_PORTBID:* copy_logic = PORTB_Ptr;
                break;
                case GPIO_PORTCID:* copy_logic = PORTC_Ptr ;
                break;
                case GPIO_PORTDID:* copy_logic = PORTD_Ptr;
                break;

            }
}
void gpio_PORT_toggle(port_index_t copy_portin  ){
         switch(copy_portin){
                case GPIO_PORTAID:ptr_PORTA^=port_mask;
                break;
                case GPIO_PORTBID:PORTB_Ptr^=port_mask;
                break;
                case GPIO_PORTCID:PORTC_Ptr ^=port_mask;
                break;
                case GPIO_PORTDID:PORTD_Ptr^=port_mask ;
                break;

            }
}
