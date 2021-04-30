#include<avr/io.h>
#include"../inc/Activity2.h"


void InitADC(void)
{
    ADMUX|= (1<<REFS0);
    ADCSRA|= (1<<ADEN) | (7<<ADPS0);
}

int ReadADC(int ch)
{       
    InitADC();

        ADMUX&=0xf8;
        ch=ch&0b00000111;
        ADMUX|=ch;
        ADCSRA|=(1<<ADSC);
        while(!(ADCSRA&(1<<ADIF)));
        ADCSRA|=(1<<ADIF);
        return ADC;

}

int Activity2()
{   int temp=0;
    temp=ReadADC(1);
    // _delay_ms(2000);
    return temp;
}
