/**************************************************/
/*Author : Rashad                                 */
/*Date   : 24 OCT 2020                            */
/*Version: V01                                    */
/**************************************************/


//libraries 

#include "STD_TYPES.h"
#include "BIT_MATH.h"


//files

#include "GPIO_Interface.h"
#include "RCC_Interface.h"


#include "SEVEN_SEGMENT_Interface.h"
#include "SEVEN_SEGMENT_Private.h"
#include "SEVEN_SEGMENT_Config.h"
#include "GPIO_Interface.h"

//initializing all selected pins in config file

void SEVEN_SEGMENT_voidinit  (void)
{
	GPIO_voidSetPinType (LED_A, GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType (LED_B, GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType (LED_C, GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType (LED_D, GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType (LED_E, GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType (LED_F, GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType (LED_G, GPIO_OUTPUT2_PUSHPULL);
}

//desplay the number on the seven segment

void SEVEN_SEGMENT_voidSet   (u8 COPY_u8Number)
{
	switch (COPY_u8Number)
	{
		case 0 :
					GPIO_voidWrite(LED_A,1);
					GPIO_voidWrite(LED_B,1);
					GPIO_voidWrite(LED_C,1);
					GPIO_voidWrite(LED_D,1);
					GPIO_voidWrite(LED_E,1);
					GPIO_voidWrite(LED_F,1);
					GPIO_voidWrite(LED_G,0);
					break;
		case 1 :
					GPIO_voidWrite(LED_A,0);
					GPIO_voidWrite(LED_B,1);
					GPIO_voidWrite(LED_C,1);
					GPIO_voidWrite(LED_D,0);
					GPIO_voidWrite(LED_E,0);
					GPIO_voidWrite(LED_F,0);
					GPIO_voidWrite(LED_G,0);
					break;
		case 2 :
					GPIO_voidWrite(LED_A,1);
					GPIO_voidWrite(LED_B,1);
					GPIO_voidWrite(LED_C,0);
					GPIO_voidWrite(LED_D,1);
					GPIO_voidWrite(LED_E,1);
					GPIO_voidWrite(LED_F,0);
					GPIO_voidWrite(LED_G,1);
					break;
		case 3 :
					GPIO_voidWrite(LED_A,1);
					GPIO_voidWrite(LED_B,1);
					GPIO_voidWrite(LED_C,1);
					GPIO_voidWrite(LED_D,1);
					GPIO_voidWrite(LED_E,0);
					GPIO_voidWrite(LED_F,0);
					GPIO_voidWrite(LED_G,1);
					break;
		case 4 :
					GPIO_voidWrite(LED_A,0);
					GPIO_voidWrite(LED_B,1);
					GPIO_voidWrite(LED_C,1);
					GPIO_voidWrite(LED_D,0);
					GPIO_voidWrite(LED_E,0);
					GPIO_voidWrite(LED_F,1);
					GPIO_voidWrite(LED_G,1);
					break;
		case 5 :
					GPIO_voidWrite(LED_A,1);
					GPIO_voidWrite(LED_B,0);
					GPIO_voidWrite(LED_C,1);
					GPIO_voidWrite(LED_D,1);
					GPIO_voidWrite(LED_E,0);
					GPIO_voidWrite(LED_F,1);
					GPIO_voidWrite(LED_G,1);
					break;
		case 6 :
					GPIO_voidWrite(LED_A,1);
					GPIO_voidWrite(LED_B,0);
					GPIO_voidWrite(LED_C,1);
					GPIO_voidWrite(LED_D,1);
					GPIO_voidWrite(LED_E,1);
					GPIO_voidWrite(LED_F,1);
					GPIO_voidWrite(LED_G,1);
					break;
		case 7 :
					GPIO_voidWrite(LED_A,1);
					GPIO_voidWrite(LED_B,1);
					GPIO_voidWrite(LED_C,1);
					GPIO_voidWrite(LED_D,0);
					GPIO_voidWrite(LED_E,0);
					GPIO_voidWrite(LED_F,0);
					GPIO_voidWrite(LED_G,0);
					break;
		case 8 :
					GPIO_voidWrite(LED_A,1);
					GPIO_voidWrite(LED_B,1);
					GPIO_voidWrite(LED_C,1);
					GPIO_voidWrite(LED_D,1);
					GPIO_voidWrite(LED_E,1);
					GPIO_voidWrite(LED_F,1);
					GPIO_voidWrite(LED_G,1);
					break;
		case 9 :
					GPIO_voidWrite(LED_A,1);
					GPIO_voidWrite(LED_B,1);
					GPIO_voidWrite(LED_C,1);
					GPIO_voidWrite(LED_D,1);
					GPIO_voidWrite(LED_E,0);
					GPIO_voidWrite(LED_F,1);
					GPIO_voidWrite(LED_G,1);
					break;
        default :
					GPIO_voidWrite(LED_A,1);
					GPIO_voidWrite(LED_B,1);
					GPIO_voidWrite(LED_C,1);
					GPIO_voidWrite(LED_D,1);
					GPIO_voidWrite(LED_E,0);
					GPIO_voidWrite(LED_F,1);
					GPIO_voidWrite(LED_G,1);
					break;
	}   
}







