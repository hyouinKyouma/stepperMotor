/*
 * STEPPER_MOTOR.c
 *
 * Created: 2/2/2018 1:59:54 PM
 *  Author: ADITYA
 */ 


#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>
#include <atmega/button.h>
#include <atmega/STEPPER_MOTOR.h>

int main(void)
{
	DDRA=0x00;
	PORTA=0xff;
	DDRD=0xff;
	PORTD=origin;
	
	int i=0,j=0;
    while(1)
    {	
		if(bta1)
			{
				
				PORTD=rotate_clockwise(i);
				i++;
				_delay_ms(1000);
				
			}
		else if(bta2)
		{
			j++;
			PORTD=rotate_anticlockwise(j);
			_delay_ms(1000);
		}
		
        //TODO:: Please write your application code 
    }
}