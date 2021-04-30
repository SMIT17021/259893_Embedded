#include<avr/io.h>
#include"Activity1.h"
#include"Activity2.h"
#include"Activity3.h"
#include"Activity4.h"


int main()
{   int read_adc = 0,timer_val=0;
    while(1)
    {
        Activity1();
        if((!(PINB&(1<<PB0)))&(!(PINB&(1<<PB2))))
        {
            read_adc = Activity2();
            timer_val = Activity3(read_adc);
            Activity4(timer_val);
        }
    }
return 0;
}
