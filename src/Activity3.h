#include<avr/io.h>
#include"../inc/Activity3.h"

int Activity3(int ADC_Value)
{
    DDRD |= (1 << DDD6);         

    TCCR0A |= (1 << COM0A1);    // Non-inverting mode

    TCCR0A |= (1 << WGM01) | (1 << WGM00);  // fast PWM Mode

    TCCR0B |= (1 << CS01) | (1 << CS00);    // Prescaler set to 64	
    
         if(ADC_Value >= 0 & ADC_Value <= 200)
        {
            OCR0A = 51;

        }
        else if(ADC_Value >= 210 & ADC_Value <= 500)
        {
            OCR0A = 102;
            
        }
        else if(ADC_Value >=510 & ADC_Value <= 700)
        {
            OCR0A = 180;  
             
        }
        else if(ADC_Value >=710 & ADC_Value <= 1024)
        {
            OCR0A = 250;
            
        }
        
    return OCR0A;
}
    
