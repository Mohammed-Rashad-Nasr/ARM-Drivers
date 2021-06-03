/**************************************************/
/*Author : Rashad                                 */
/*Date   : 22 AUG 2020                            */
/*Version: V01                                    */
/**************************************************/
#ifndef INTERFACE_H
#define INTERFACE_H

//BUS ID 
 
#define RCC_AHB  0
#define RCC_ABP1 1
#define RCC_ABP2 2

// clock types
#define HSE_CRYSTAL 0
#define HSE_RC      1
#define HSI         2
#define PLL         3

void RCC_voidInitClock(void);
void RCC_voidEnableClock (u8 copy_u8BusId , u8 copy_u8PeripheralId);
void RCC_voidDisableClock (u8 copy_u8BusId , u8 copy_u8PeripheralId);

#endif