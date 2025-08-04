/*
 * TWI_int.h
 *
 *  Created on: Aug 3, 2025
 *      Author: Reem
 */

#ifndef MCAL_TWI_TWI_INT_H_
#define MCAL_TWI_TWI_INT_H_

#define TWI_ACK 	1
#define TWI_NACK 	0

#define TWI_WRITE   0
#define TWI_READ    1

void MTWI_vInit(void);
u8 MTWI_u8SendStartCondition(void);
u8 MTWI_u8ResendStartCondition(void);
u8 MTWI_u8SendStopCondition(void);
u8 MTWI_u8SendSLA_RW(u8 A_u8SLA, u8 A_u8RW);
u8 MTWI_u8SendByte(u8 A_u8Byte);
u8 MTWI_u8RecieveByte(u8* A_u8PtrByte, u8 A_u8Ack_NAck);
u8 MTWI_u8GetStatusCode();

#endif /* MCAL_TWI_TWI_INT_H_ */
