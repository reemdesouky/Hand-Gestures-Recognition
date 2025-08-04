/*
 * TWI_prv.h
 *
 *  Created on: Aug 3, 2025
 *      Author: Reem
 */

#ifndef MCAL_TWI_TWI_PRV_H_
#define MCAL_TWI_TWI_PRV_H_

#define TWBR	*((volatile u8*)(0x20))
#define TWCR	*((volatile u8*)(0x56))
#define TWSR	*((volatile u8*)(0x21))
#define TWDR	*((volatile u8*)(0x23))
#define TWAR	*((volatile u8*)(0x22))

#define TWEN	2
#define TWSTA	5
#define TWINT	7
#define TWEA	6
#define TWSTO	4

#endif /* MCAL_TWI_TWI_PRV_H_ */
