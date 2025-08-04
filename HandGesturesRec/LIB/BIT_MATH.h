/*
 * BIT_MATH.h
 *
 *  Created on: Aug 2, 2025
 *      Author: Reem
 */

#ifndef LIB_BIT_MATH_H_
#define LIB_BIT_MATH_H_

#define SET_BIT(reg,bit_No)		reg|=(1<<bit_No)
#define CLR_BIT(reg,bit_No)		reg&=~(1<<bit_No)
#define TOG_BIT(reg,bit_No)		reg^=(1<<bit_No)
#define GET_BIT(reg,bit_No)		(reg>>bit_No)& 0x01
#define SET_BYTE(reg,value)      reg = value

#endif /* LIB_BIT_MATH_H_ */
