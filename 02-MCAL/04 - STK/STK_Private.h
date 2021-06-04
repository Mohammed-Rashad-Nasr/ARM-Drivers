/**************************************************/
/*Author : Rashad                                 */
/*Date   : 21 OCT 2020                            */
/*Version: V01                                    */
/**************************************************/
#ifndef STKPRIVATE_H
#define STKPRIVATE_H

// register definetion
#define STK_CTRL *((u32*)0xE000E010);
#define STK_LOAD *((u32*)0xE000E010+0X04);
#define STK_VAL *((u32*)0xE000E010+0X08);

#endif