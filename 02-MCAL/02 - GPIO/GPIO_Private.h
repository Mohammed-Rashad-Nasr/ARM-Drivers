/**************************************************/
/*Author : Rashad                                 */
/*Date   : 25 AUG 2020                            */
/*Version: V01                                    */
/**************************************************/
#ifndef GPRIVATE_H
#define GPRIVATE_H

// register defination port A

#define GPIO_CRLA  *((u32*)0x40010800)
#define GPIO_CRHA  *((u32*)0x40010804)
#define GPIO_IDRA  *((u32*)0x40010808)
#define GPIO_ODRA  *((u32*)0x4001080C)
#define GPIO_BSRRA *((u32*)0x40010810)
#define GPIO_BRRA  *((u32*)0x40010814)
#define GPIO_LCKRA *((u32*)0x40010818)


// register defination port B

#define GPIO_CRLB  *((u32*)0x40010C00)
#define GPIO_CRHB  *((u32*)0x40010C04)
#define GPIO_IDRB  *((u32*)0x40010C08)
#define GPIO_ODRB  *((u32*)0x40010C0C)
#define GPIO_BSRRB *((u32*)0x40010C10)
#define GPIO_BRRB  *((u32*)0x40010C14)
#define GPIO_LCKRB *((u32*)0x40010C18)


// register defination port C

#define GPIO_CRLC  *((u32*)0x40011000)
#define GPIO_CRHC  *((u32*)0x40011004)
#define GPIO_IDRC  *((u32*)0x40011008)
#define GPIO_ODRC  *((u32*)0x4001100C)
#define GPIO_BSRRC *((u32*)0x40011010)
#define GPIO_BRRC  *((u32*)0x40011014)
#define GPIO_LCKRC *((u32*)0x40011018)


#endif