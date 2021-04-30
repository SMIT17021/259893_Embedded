#include<avr/io.h>
#include"../inc/Activity1.h"

void Activity1(void)
{
    DDRB |= (1<<PB1);       //output pin to led
    DDRB &= ~(1<<PB0);    //input pin to seat button(clear bit)
    DDRB &= ~(1<<PB2);    //input pin to heater(clear bit)


    PORTB |= (1<<PB0);    //set bit
    PORTB |= (1<<PB2);    //set bit

    
        if((!(PINB&(1<<PB0)))&(!(PINB&(1<<PB2))))
        {
            PORTB |= (1<<PB1);      //Turn On Led
        }

         else
        {
            PORTB &= ~(1<<PB1);     //Turn Off Led
        }
   
}
