/**************************************************/
/*Author : Rashad                                 */
/*Date   : 21 OCT 2020                            */
/*Version: V01                                    */
/**************************************************/


//libraries 

#include "STD_TYPES.h"
#include "BIT_MATH.h"


//files

#include "STK_Interface.h"
#include "STK_Private.h"
#include "STK_Config.h"

void (*callback) (void)

void STK_voidInit(void)
{
	switch(STK_clock)
	{
		case STK_AHB  : STK_CTRL = 0x00000004 ; 
		case STK_AHB8 : STK_CTRL = 0x00000000 ; 
	}
}
	

void STK_voidSetBusyWait(u32 copy_u32counts)
{
	STK_LOAD = copy_u32counts ; 
	while(GET_BIT(STK_CTRL,16)==0);
}

void STK_voidSetIntervalSingle(u32 copy_u32counts , void  (*copy_ptr) (void))
{
	STK_LOAD = copy_u32counts ; 
	callback = copy_ptr ;
	STK_LOAD = 0x00000000 ; 
}

void STK_voidSetIntervalPeriodic(u32 copy_u32counts , void  (*copy_ptr) (void))
{
	STK_LOAD = copy_u32counts ; 
	callback = copy_ptr ;
}

void STK_voidIntervalStop(void);

u32 STK_u32GetElapsedTime(void);

u32 STK_u32GetRemainingTime(void);