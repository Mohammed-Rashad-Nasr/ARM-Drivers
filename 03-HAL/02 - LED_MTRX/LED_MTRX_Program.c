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
#include "STK_Interface.h"

#include "LED_MTRX_Interface.h"
#include "LED_MTRX_Private.h"
#include "LED_MTRX_Config.h"
#include "GPIO_Interface.h"

u32 modifiedArray[8];         //Array for Dynamic Display

// function to initialize all selected Pins in Config file

void LED_MTRX_voidinit (void)
{
	GPIO_voidSetPinType ( LED_R1 , GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType ( LED_R2 , GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType ( LED_R3 , GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType ( LED_R4 , GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType ( LED_R5 , GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType ( LED_R6 , GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType ( LED_R7 , GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType ( LED_R8 , GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType ( LED_C1 , GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType ( LED_C2 , GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType ( LED_C3 , GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType ( LED_C4 , GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType ( LED_C5 , GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType ( LED_C6 , GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType ( LED_C7 , GPIO_OUTPUT2_PUSHPULL);
	GPIO_voidSetPinType ( LED_C8 , GPIO_OUTPUT2_PUSHPULL);
}

// Function to display any given array for one time

void LED_MTRX_voidDrawFrame_once(u32 *array )
{

	LED_MTRX_voidDisableCols();
	GPIO_voidWrite (LED_C1,0);
	LED_MTRX_voidWriteCol (array[0]);
	STK_voidSetBusyWait(2500);
	LED_MTRX_voidDisableCols();
	GPIO_voidWrite (LED_C2,0);
	LED_MTRX_voidWriteCol (array[1]);
	STK_voidSetBusyWait(2500);
	LED_MTRX_voidDisableCols();
	GPIO_voidWrite (LED_C3,0);
	LED_MTRX_voidWriteCol (array[2]);
	STK_voidSetBusyWait(2500);
	LED_MTRX_voidDisableCols();
	GPIO_voidWrite (LED_C4,0);
	LED_MTRX_voidWriteCol (array[3]);
	STK_voidSetBusyWait(2500);
	LED_MTRX_voidDisableCols();
	GPIO_voidWrite (LED_C5,0);
	LED_MTRX_voidWriteCol (array[4]);
	STK_voidSetBusyWait(2500);
	LED_MTRX_voidDisableCols();
	GPIO_voidWrite (LED_C6,0);
	LED_MTRX_voidWriteCol (array[5]);
	STK_voidSetBusyWait(2500);
	LED_MTRX_voidDisableCols();
	GPIO_voidWrite (LED_C7,0);
	LED_MTRX_voidWriteCol (array[6]);
	STK_voidSetBusyWait(2500);
	LED_MTRX_voidDisableCols();
	GPIO_voidWrite (LED_C8,0);
	LED_MTRX_voidWriteCol (array[7]);
	STK_voidSetBusyWait(2500);
}

//function to disable all columns

void LED_MTRX_voidDisableCols (void)
{
	GPIO_voidWrite (LED_C1,1);
	GPIO_voidWrite (LED_C2,1);
	GPIO_voidWrite (LED_C3,1);
	GPIO_voidWrite (LED_C4,1);
	GPIO_voidWrite (LED_C5,1);
	GPIO_voidWrite (LED_C6,1);
	GPIO_voidWrite (LED_C7,1);
	GPIO_voidWrite (LED_C8,1);
}

//function to write values of rows for one column

void LED_MTRX_voidWriteCol (u32 copy_u32Value)
{
	GPIO_voidWrite(LED_R1,GET_BIT(copy_u32Value,0));
	GPIO_voidWrite(LED_R2,GET_BIT(copy_u32Value,1));
	GPIO_voidWrite(LED_R3,GET_BIT(copy_u32Value,2));
	GPIO_voidWrite(LED_R4,GET_BIT(copy_u32Value,3));
	GPIO_voidWrite(LED_R5,GET_BIT(copy_u32Value,4));
	GPIO_voidWrite(LED_R6,GET_BIT(copy_u32Value,5));
	GPIO_voidWrite(LED_R7,GET_BIT(copy_u32Value,6));
	GPIO_voidWrite(LED_R8,GET_BIT(copy_u32Value,7));
}

//function to display given array for selected number of times

void LED_MTRX_voidDrawFrame_withPeriod(u32 *array , u32 copy_u32Speed)
{
	for(u32 time=0;time<copy_u32Speed;time++)
	{
		LED_MTRX_voidDrawFrame_once(array );
	}
}

//function to display animated long words

void LED_MTRX_voidAnimated(u32 *array , u32 copy_u32NumberOfElements)
{
	for(u32 i=0 ; i<(copy_u32NumberOfElements-8) ; i++)
	{
	for (u8 j=0;j<8;j++)
	{
		modifiedArray[j]=array[i+j];
	}
	LED_MTRX_voidDrawFrame_withPeriod(modifiedArray,15);
	}
}






