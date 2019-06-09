/*
 * logResetEvt.c
 *
 *  Created on: Feb 27, 2017
 *      Author: dv198
 *
 * Describe: log reset event into backup register
 */

/*##########################################################################################
 * INCLUDE
 *##########################################################################################*/
#include "logResetEvt.h"
#include "stm32f10x_bkp.h"
#include "STM32F1_rtc.h"
#include "HWmapping.h"
/*##########################################################################################
 * MACRO
 *##########################################################################################*/

/*##########################################################################################
 * VARIABLES
 *##########################################################################################*/

/*##########################################################################################
 * FUNC.PROTOTYPES
 *##########################################################################################*/

/*##########################################################################################
 * FUNCTIONS
 *##########################################################################################*/
/*------------------------------------------------------------------------------
 * Brief: Read backup register 'Reset events'
 -------------------------------------------------------------------------------*/
U16 LOGRSTEVT_read(void)
{
	BKP_ReadBackupRegister(BKPDR_RESETEVENTS);
}

/*------------------------------------------------------------------------------
 * Brief: Write backup register 'Reset events'
 * Param: rstEvtBits	|	IN	|	reset event bits. Zero means clear the register
 -------------------------------------------------------------------------------*/
void LOGRSTEVT_wrt(U16 rstEvtBits)
{
	IRTC_enableBackupAccess();
	if (!rstEvtBits)
	{
		/* Zero means clear the register */
		BKP_WriteBackupRegister(BKPDR_RESETEVENTS, 0);
	}
	else
	{
		BKP_WriteBackupRegister(BKPDR_RESETEVENTS, BKP_ReadBackupRegister(BKPDR_RESETEVENTS) | rstEvtBits);
	}
}