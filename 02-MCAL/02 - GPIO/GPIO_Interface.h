/**************************************************/
/*Author : Rashad                                 */
/*Date   : 25 AUG 2020                            */
/*Version: V01                                    */
/**************************************************/
#ifndef GINTERFACE_H
#define GINTERFACE_H

//PORT ID 
 
#define GPIO_PORTA               0
#define GPIO_PORTB               1
#define GPIO_PORTC               2


// Input types
#define GPIO_INPUT_ANALOG        0b0000
#define GPIO_INPUT_FLOATING      0b0100
#define GPIO_INPUT_PULLUP        0b1000
#define GPIO_INPUT_PULLDOWN      0b1000
 
 
// output types
#define GPIO_OUTPUT2_PUSHPULL      0b0010
#define GPIO_OUTPUT2_OPENDRAIN     0b0110
#define GPIO_OUTPUT2_AFPUSHPULL    0b1010
#define GPIO_OUTPUT2_AFOPENDRAIN   0b1110
#define GPIO_OUTPUT10_PUSHPULL     0b0001
#define GPIO_OUTPUT10_OPENDRAIN    0b0101
#define GPIO_OUTPUT10_AFPUSHPULL   0b1001
#define GPIO_OUTPUT10_AFOPENDRAIN  0b1101
#define GPIO_OUTPUT50_PUSHPULL     0b0011
#define GPIO_OUTPUT50_OPENDRAIN    0b0111
#define GPIO_OUTPUT50_AFPUSHPULL   0b1011
#define GPIO_OUTPUT50_AFOPENDRAIN  0b1111

void GPIO_voidSetPinType (u8 COPY_u8PortId , u8 COPY_u8PinId , u8 COPY_u8PinType);
void GPIO_voidWrite (u8 COPY_u8PortId , u8 COPY_u8PinId , u8 COPY_u8Value);
u8 GPIO_u8Read (u8 COPY_u8PortId , u8 COPY_u8PinId );

#endif
