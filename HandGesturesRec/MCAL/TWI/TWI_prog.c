/*
 * TWI_prog.c
 *
 *  Created on: Aug 3, 2025
 *      Author: Reem
 */
#include "../../LIB/BIT_MATH.h"
#include "../../LIB/STD_TYPES.h"

#include "../DIO/DIO_int.h"
#include "TWI_int.h"
#include "TWI_prv.h"

void MTWI_vInit(void)
{
	CLR_BIT(TWCR, TWEN);

	TWBR = 10;
}
u8 MTWI_u8SendStartCondition(void)
{
	TWCR = (1<<TWINT)|(1<<TWSTA)|(1<<TWEN);
	while (!(TWCR & (1<<TWINT)));
	return (TWSR & 0xF8);
}
u8 MTWI_u8ResendStartCondition(void)
{
	TWCR = (1<<TWINT)|(1<<TWSTA)|(1<<TWEN);
	while (!(TWCR & (1<<TWINT)));
	return (TWSR & 0xF8);
}
u8 MTWI_u8SendStopCondition(void)
{
	TWCR = (1<<TWINT)|(1<<TWSTO)|(1<<TWEN);
	return (TWSR & 0xF8);

}
u8 MTWI_u8SendSLA_RW(u8 A_u8SLA, u8 A_u8RW)
{
	TWDR = (A_u8SLA<<1) | A_u8RW;
	TWCR = (1 << TWINT) |(1<< TWEN);

	CLR_BIT(TWCR , TWSTA);

	while (!(TWCR & (1<<TWINT)));

	return (TWSR & 0xF8);
}
u8 MTWI_u8SendByte(u8 A_u8Byte)
{
	TWDR = A_u8Byte;
	TWCR = (1<<TWINT) | (1<<TWEN);

	while (!(TWCR & (1<<TWINT)));

		return (TWSR & 0xF8);
}
u8 MTWI_u8RecieveByte(u8* A_u8PtrByte, u8 A_u8Ack_NAck)
{
	switch(A_u8Ack_NAck)
	{
	case TWI_ACK:
		TWCR = (1 << TWINT) |(1<< TWEN);
		SET_BIT(TWCR, TWEA);
		break;

	case TWI_NACK:
		TWCR = (1 << TWINT) |(1<< TWEN);
		CLR_BIT(TWCR, TWEA);
		break;

	}
	while (!(TWCR & (1<<TWINT)));
	*A_u8PtrByte = TWDR;

		return (TWSR & 0xF8);
}
u8 MTWI_u8GetStatusCode()
{

	return (TWSR & 0xF8);
}
