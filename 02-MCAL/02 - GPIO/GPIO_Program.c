/**************************************************/
/*Author : Rashad                                 */
/*Date   : 25 AUG 2020                            */
/*Version: V01                                    */
/**************************************************/


//libraries 

#include "STD_TYPES.h"
#include "BIT_MATH.h"


//files
#include "RCC_Interface.h"
#include "GPIO_Interface.h"
#include "GPIO_Private.h"
#include "GPIO_Config.h"




//function to set pin type

void GPIO_voidSetPinType (u8 COPY_u8PortId , u8 COPY_u8PinId , u8 COPY_u8PinType)
{
	if (COPY_u8PortId == GPIO_PORTA)
	{
		RCC_voidEnableClock(RCC_ABP2,2);                             //enabling peripheral
	    if (COPY_u8PinId <=7)
	    {
	    	GPIO_CRLA &= ~ ((0b1111)<<(COPY_u8PinId*4)) ;            //Pin reset
			GPIO_CRLA |=   ((COPY_u8PinType)<<(COPY_u8PinId*4)) ;    //Setting Pin type
		}
		else if (COPY_u8PinId > 7)
	    {
			COPY_u8PinId=COPY_u8PinId-8;
			GPIO_CRHA &= ~ ((0b1111)<<(COPY_u8PinId*4)) ;            //Pin reset
			GPIO_CRHA |=   ((COPY_u8PinType)<<(COPY_u8PinId*4)) ;
		}
	}
	else if (COPY_u8PortId == GPIO_PORTB)
    {		
	    RCC_voidEnableClock(RCC_ABP2,3);                             //enabling peripheral
	    if (COPY_u8PinId <=7)
	    {
	    	GPIO_CRLB &= ~ ((0b1111)<<(COPY_u8PinId*4)) ;            //Pin reset
	    	GPIO_CRLB |=   ((COPY_u8PinType)<<(COPY_u8PinId*4)) ;    //Setting Pin type
	    }
	    else if (COPY_u8PinId > 7)
	    {
	    	COPY_u8PinId=COPY_u8PinId-8;
	    	GPIO_CRHB &= ~ ((0b1111)<<(COPY_u8PinId*4)) ;            //Pin reset
	    	GPIO_CRHB |=   ((COPY_u8PinType)<<(COPY_u8PinId*4)) ;    //Setting Pin type
	    }

	}
	else if (COPY_u8PortId == GPIO_PORTC)
	{
		RCC_voidEnableClock(RCC_ABP2,4);                             //enabling peripheral
		if (COPY_u8PinId <=7)
		{
			GPIO_CRLC &= ~ ((0b1111)<<(COPY_u8PinId*4)) ;            //Pin reset
			GPIO_CRLC |=   ((COPY_u8PinType)<<(COPY_u8PinId*4)) ;    //Setting Pin type
		}
		else if (COPY_u8PinId > 7)
		{
			COPY_u8PinId=COPY_u8PinId-8;
			GPIO_CRHC &= ~ ((0b1111)<<(COPY_u8PinId*4)) ;           //Pin reset
			GPIO_CRHC |=   ((COPY_u8PinType)<<(COPY_u8PinId*4)) ;   //Setting Pin type
		}
	}
}		

//function to write on pin 

void GPIO_voidWrite (u8 COPY_u8PortId , u8 COPY_u8PinId , u8 COPY_u8Value)
{
	if (COPY_u8PortId == GPIO_PORTA)
	{
			GPIO_ODRA &= ~ ((0b1)           <<(COPY_u8PinId)) ;     //reset output
			GPIO_ODRA |=   (((COPY_u8Value))<<(COPY_u8PinId)) ;     //Write the Output value
	}
	else if (COPY_u8PortId == GPIO_PORTB)
	{
			GPIO_ODRB &= ~ ((0b1)           <<(COPY_u8PinId)) ;     //reset output
			GPIO_ODRB |=   (((COPY_u8Value))<<(COPY_u8PinId)) ;     //Write the Output value
	}
	else if (COPY_u8PortId == GPIO_PORTC)
	{
			GPIO_ODRC &= ~ ((0b1)           <<(COPY_u8PinId)) ;     //reset output
			GPIO_ODRC |=   (((COPY_u8Value))<<(COPY_u8PinId)) ;     //Write the Output value
	}
}	

//function to read pin value

u8 GPIO_u8Read (u8 COPY_u8PortId , u8 COPY_u8PinId )
{
	if      (COPY_u8PortId == GPIO_PORTA)
	{
	    return GET_BIT(GPIO_IDRA,COPY_u8PinId) ;	
	}
	else if (COPY_u8PortId == GPIO_PORTB)
	{
	    return GET_BIT(GPIO_IDRB,COPY_u8PinId) ;	
	}
	else if (COPY_u8PortId == GPIO_PORTC)
	{
	    return GET_BIT(GPIO_IDRC,COPY_u8PinId) ;	
	}
	return 0 ;
}	
