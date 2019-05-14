/*
 * TWO SWITCHES.c
 *
 * Created: 10-May-19 12:38:40 PM
 * Author : ALEKHYA
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include<util/delay.h>


int main(void)
{
	DDRA=0XFF;
	DDRB=0X00;
	DDRC=0X00;
    /* Replace with your application code */
    while (1) 
    {
		if((PINB&(1<<PB0))==0)
		{
			PORTA |= 1<<PA0;
		    _delay_ms(100);
			PORTA &= ~(1<<PA0);
			PORTA |= 1<<PA1;
			 _delay_ms(100);
			 PORTA &= ~(1<<PA1);
			 PORTA |=1<<PA2;
			 _delay_ms(100);
			 PORTA &= ~(1<<PA2);
			  PORTA |=1<<PA3;
		     _delay_ms(100);
			 PORTA &= ~(1<<PA3);
			 PORTA |=1<<PA4;
			  _delay_ms(100);
			  PORTA &= ~(1<<PA4);
			  PORTA |=1<<PA5;
			   _delay_ms(100);
			   PORTA &= ~(1<<PA5);
			   PORTA |=1<<PA6;
			    _delay_ms(100);
				PORTA &= ~(1<<PA6);
				PORTA |=1<<PA7;
				 _delay_ms(100);
				 PORTA &= ~(1<<PA7);
		}
		 if((PINC&(1<<PC0))==0)
		{
			PORTA |= 1<<PA7;
			_delay_ms(100);
			PORTA &= ~(1<<PA7);
			PORTA |= 1<<PA6;
			_delay_ms(100);
			PORTA &= ~(1<<PA6);
			PORTA |=1<<PA5;
			_delay_ms(100);
			PORTA &= ~(1<<PA5);
			PORTA |=1<<PA4;
			_delay_ms(100);
			PORTA &= ~(1<<PA4);
			PORTA |=1<<PA3;
			_delay_ms(100);
			PORTA &= ~(1<<PA3);
			PORTA |=1<<PA2;
			_delay_ms(100);
			PORTA &= ~(1<<PA2);
			PORTA |=1<<PA1;
			_delay_ms(100);
			PORTA &= ~(1<<PA1);
			PORTA |=1<<PA0;
			_delay_ms(100);
			PORTA &= ~(1<<PA0);
		
		
		}
		
    }
}

