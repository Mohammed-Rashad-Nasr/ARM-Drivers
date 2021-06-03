/**************************************************/
/*Author : Rashad                                 */
/*Date   : 22 AUG 2020                            */
/*Version: V01                                    */
/**************************************************/
#ifndef CONFIG_H
#define CONFIG_H

/* type one of the options :
HSE_CRYSTAL
HSE_RC
HSI
PLL */

#define CLOCK_TYPE HSI

/* if clock type is PLL type one of the options for input source :
HSE_CRYSTAL
HSE_RC
HSE_CRYSTAL_DIV2
HSE_RC_DIV2
HSI_DIV2 */

#define PLL_SRC HSE_RC


/* if clock type is PLL type Multiplying factor from 2 to 16 */
#define MUL_FACTOR 2


#endif