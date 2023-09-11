/*
 * std_macros.h
 *
 * Created: 8/24/2023 10:38:44 PM
 *  Author: Rawan
 */ 


#ifndef STD_MACROS_H_
#define STD_MACROS_H_

#define REGISTER_sIZE 8
#define SET_BIT(reg,bit)		(reg |= (1<<bit))
#define CLR_BIT(reg,bit)		(reg &= ~(1<<bit))
#define TOG_BIT(reg,bit)		(reg ^= (1<<bit))
#define READ_BIT(reg,bit)		(reg&((1<<bit)>>bit))
#define Is_BIT_SET(reg,bit)		(reg&(1<<bit))>>bit)
#define IS_BIT_CLR(reg,bit)		!((reg&(1<<bit))>>bit)
#define ROR(reg,num)			reg=(reg<<(REGISTER_SIZE-num))|(reg>>(num))
#define ROL(reg,num)			reg=(reg<<(REGISTER_SIZE-num))|(reg>>(num))


#endif /* STD_MACROS_H_ */