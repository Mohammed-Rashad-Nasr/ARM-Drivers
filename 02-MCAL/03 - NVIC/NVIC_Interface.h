/**************************************************/
/*Author : Rashad                                 */
/*Date   : 23 SEP 2020                            */
/*Version: V01                                    */
/**************************************************/
#ifndef NINTERFACE_H
#define NINTERFACE_H

void NVIC_voidSetEnable(u8 copy_u8InterruptId);
void NVIC_voidClearEnable(u8 copy_u8InterruptId);
void NVIC_voidSetPending(u8 copy_u8InterruptId);
void NVIC_voidClearPending(u8 copy_u8InterruptId);
u8   NVIC_u8ActiveRead(u8 copy_u8InterruptId);


#endif