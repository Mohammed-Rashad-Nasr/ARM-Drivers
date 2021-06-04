/**************************************************/
/*Author : Rashad                                 */
/*Date   : 21 OCT 2020                            */
/*Version: V01                                    */
/**************************************************/
#ifndef STKINTERFACE_H
#define STKINTERFACE_H
/* apply clock from config file 
disable SysTick 
disable SysTick interrupt     */
void STK_voidInit(void);

void STK_voidSetBusyWait(u32 copy_u32counts);

void STK_voidSetIntervalSingle(u32 copy_u32counts , void  (*copy_ptr) (void));

void STK_voidSetIntervalPeriodic(u32 copy_u32counts , void  (*copy_ptr) (void));

void STK_voidIntervalStop(void);

u32 STK_u32GetElapsedTime(void);

u32 STK_u32GetRemainingTime(void);



#define STK_AHB  0
#define STK_AHB8 1




#endif