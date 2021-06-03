/**************************************************/
/*Author : Rashad                                 */
/*Date   : 22 AUG 2020                            */
/*Version: V01                                    */
/**************************************************/


//libraries 

#include "STD_TYPES.h"
#include "BIT_MATH.h"


//files

#include "RCC_Interface.h"
#include "RCC_Private.h"
#include "RCC_Config.h"


//function to initialize system clock depending on selected type in config file
void RCC_voidInitClock(void)
{
	#if   CLOCK_TYPE == HSE_CRYSTAL
		RCC_CFGR = 0x02000001 ;             //setting SW 01
		RCC_CR   = 0x00010000 ;             //enable HSE without bypass
	#elif CLOCK_TYPE == HSE_RC              
		RCC_CFGR = 0x02000001 ;             //setting SW 01
		RCC_CR   = 0x00050000 ;             //enable HSE with bypass
	#elif CLOCK_TYPE == HSI                 
		RCC_CFGR = 0x02000000 ;             //setting SW 10
		RCC_CR   = 0x00000081 ;             //enable HSI without trimming
	#elif CLOCK_TYPE == PLL                 
		#if   PLL_SRC == HSI_DIV2           
			RCC_CR   = 0x01000081 ;         //enable HSI without trimming and PLL
			RCC_CFGR = 0x02000002 ;         
		#elif PLL_SRC == HSE_RC_DIV2        
			RCC_CR   = 0x01050000 ;         //enable HSE with bypass and PLL
			RCC_CFGR = 0x02030002 ;
		#elif PLL_SRC == HSE_CRYSTAL_DIV2
			RCC_CR   = 0x01010000 ;         //enable HSE without bypass and PLL
			RCC_CFGR = 0x07030002 ;
		#elif PLL_SRC == HSE_RC
			RCC_CR   = 0x01050000 ;         //enable HSE with bypass and PLL
			RCC_CFGR = 0x02010002 ;
		#elif PLL_SRC == HSE_CRYSTAL
			RCC_CR   = 0x01010000 ;         //enable HSE without bypass and PLL
			RCC_CFGR = 0x02010002 ;
		#endif
		#if MUL_FACTOR <= 16 && MUL_FACTOR >= 2
			MUL_FACTOR = MUL_FACTOR - 2 ;
			RCC_CFGR  &= ~( ( 0b1111 )       << 18 ) ;  //MUL bits reset		
			RCC_CFGR  |=  ( ( MUL_FACTOR )   << 18 ) ;  //assigning MUL value
		#else
			#error("wrong Multiplying factor")
		#endif
	#else 
		#error("wrong clock type")
	#endif
			
}


//peripherals clock enabling function

void RCC_voidEnableClock (u8 copy_u8BusId , u8 copy_u8PeripheralId)
{
	if (copy_u8PeripheralId <= 31)
	{
		switch(copy_u8BusId)
		{
			case RCC_AHB  :  SET_BIT(RCC_AHBENR  ,copy_u8PeripheralId);  break;
			case RCC_ABP2 :  SET_BIT(RCC_ABP2ENR ,copy_u8PeripheralId);  break;
		    case RCC_ABP1 :  SET_BIT(RCC_ABP1ENR ,copy_u8PeripheralId);  break;
		}
	}	
	else 
	{
			/*error*/ 
	}
}
	
	
//peripherals clock disabling function
void RCC_voidDisableClock (u8 copy_u8BusId , u8 copy_u8PeripheralId)
{
	if (copy_u8PeripheralId <= 31)
	{
		switch(copy_u8BusId)
		{
			case RCC_AHB  :  CLR_BIT(RCC_AHBENR  ,copy_u8PeripheralId);  break;
			case RCC_ABP2 :  CLR_BIT(RCC_ABP2ENR ,copy_u8PeripheralId);  break;
			case RCC_ABP1 :  CLR_BIT(RCC_ABP1ENR ,copy_u8PeripheralId);  break;
		}
	}
		
	else
		{
			/*error*/
		}
}