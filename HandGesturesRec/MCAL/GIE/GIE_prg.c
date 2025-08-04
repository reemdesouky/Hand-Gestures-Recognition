/*
 * GIE_prg.c
 *
 *  Created on: Jul 24, 2025
 *      Author: AYA
 */

#include "../../LIB/STD_TYPES.h"
#include "../../LIB/BIT_MATH.h"
#include "GIE_int.h"
#include "GIE_prv.h"

void MGIE_vEnableGlobalInterrupt(){
	SET_BIT(SREG,7);
}
void MGIE_vDisableGlobalInterrupt(){
	CLR_BIT(SREG,7);
}
