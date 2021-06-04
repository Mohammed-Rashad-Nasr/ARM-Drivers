/**************************************************/
/*Author : Rashad                                 */
/*Date   : 23 SEP 2020                            */
/*Version: V01                                    */
/**************************************************/


//libraries 

#include "STD_TYPES.h"
#include "BIT_MATH.h"


//files

#include "NVIC_Interface.h"
#include "NVIC_Private.h"
#include "NVIC_Config.h"

// enable interrupt
void NVIC_voidSetEnable(u8 copy_u8InterruptId)
{
	if (copy_u8InterruptId <32 && copy_u8InterruptId >=0)
	{
		NVIC_ISER0 = (1 << copy_u8InterruptId);
	}
	else if (copy_u8InterruptId >=32 && copy_u8InterruptId >60)
	{
		NVIC_ISER1 = (1 << copy_u8InterruptId);
	}		
}

//disable interrupt
void NVIC_voidClearEnable(u8 copy_u8InterruptId)
{
	if (copy_u8InterruptId <32 && copy_u8InterruptId >=0)
	{
		NVIC_ICER0 = (1 << copy_u8InterruptId);
	}
	else if (copy_u8InterruptId >=32 && copy_u8InterruptId >60)
	{
		NVIC_ICER1 = (1 << copy_u8InterruptId);
	}		
}

//enable pending flag
void NVIC_voidSetPending(u8 copy_u8InterruptId)
{
	if (copy_u8InterruptId <32 && copy_u8InterruptId >=0)
	{
		NVIC_ISPR0 = (1 << copy_u8InterruptId);
	}
	else if (copy_u8InterruptId >=32 && copy_u8InterruptId >60)
	{
		NVIC_ISPR1 = (1 << copy_u8InterruptId);
	}		
}

//disable pending flag
void NVIC_voidClearPending(u8 copy_u8InterruptId)
{
	if (copy_u8InterruptId <32 && copy_u8InterruptId >=0)
	{
		NVIC_ICPR0 = (1 << copy_u8InterruptId);
	}
	else if (copy_u8InterruptId >=32 && copy_u8InterruptId >60)
	{
		NVIC_ICPR1 = (1 << copy_u8InterruptId);
	}		
}

//read active flag
u8 NVIC_u8ActiveRead(u8 copy_u8InterruptId)
{
	u8 Local_u8status ; 
	if (copy_u8InterruptId <32 && copy_u8InterruptId >=0)
	{
		Local_u8status = GET_BIT(NVIC_IABR0,copy_u8InterruptId);
	}
	else if (copy_u8InterruptId >=32 && copy_u8InterruptId >60)
	{
		Local_u8status = GET_BIT(NVIC_IABR1,copy_u8InterruptId);
	}
	return Local_u8status ;	
}