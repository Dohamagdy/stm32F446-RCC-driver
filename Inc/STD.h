/*
 * STD.h
 *
 *  Created on: Mar 2, 2024
 *      Author: dell
 */

#ifndef STD_H_
#define STD_H_

#define SET_BIT(reg,bit)		reg|=(1<<bit)
#define CLR_BIT(reg,bit)		reg&=(~(1<<bit))
#define TOG_BIT(reg,bit)		reg^=(1<<bit)
#define READ_BIT(reg,bit)		((reg&(1<<bit))>>bit)
#define ROR_REG(reg,num)		reg=((reg>>num)|(reg<<(8-num)))
#define ROL_REG(reg,num)		reg=((reg<<num)|(reg>>(8-num)))


#endif /* STD_H_ */
