/**************************************************/
/*Author : Rashad                                 */
/*Date   : 25 AUG 2020                            */
/*Version: V01                                    */
/**************************************************/
#ifndef NPRIVATE_H
#define NPRIVATE_H

// register definetion
#define NVIC_ISER0  *((u32*)0xE000E100)
#define NVIC_ISER1  *((u32*)0xE000E104)
#define NVIC_ICER0  *((u32*)(0xE000E100+0x084))
#define NVIC_ICER1  *((u32*)(0xE000E100+0x088))
#define NVIC_ISPR0  *((u32*)(0xE000E100+0x100))
#define NVIC_ISPR1  *((u32*)(0xE000E100+0x104))
#define NVIC_ICPR0  *((u32*)(0xE000E100+0x180))
#define NVIC_ICPR1  *((u32*)(0xE000E100+0x184))
#define NVIC_IABR0  *((volatile u32*)(0xE000E100+0x200))
#define NVIC_IABR1  *((volatile u32*)(0xE000E100+0x204))


#endif