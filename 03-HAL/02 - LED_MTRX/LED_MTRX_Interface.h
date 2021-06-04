/**************************************************/
/*Author : Rashad                                 */
/*Date   : 24 OCT 2020                            */
/*Version: V01                                    */
/**************************************************/
#ifndef LEDINTERFACE_H
#define LEDINTERFACE_H

//FUNCTIONS
void LED_MTRX_voidinit                  (void);
void LED_MTRX_voidDisableCols           (void);
void LED_MTRX_voidWriteCol              (u32 copy_u32Value);
void LED_MTRX_voidDrawFrame_once        (u32 *array );
void LED_MTRX_voidDrawFrame_withPeriod  (u32 *array , u32 copy_u32Speed);
void LED_MTRX_voidAnimated              (u32 *array , u32 copy_u32NumberOfElements);


#endif
