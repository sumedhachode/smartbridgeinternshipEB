/*
 * button and led.c
 *
 * Created: 10-May-19 11:26:24 AM
 * Author : ALEKHYA
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include<util/delay.h>


int main(void)
{
	
    DDRC |=(1<<PC0);
	DDRA &=~(1<<PA0);
    while (1) 
    {
		if((PINA&(1<<PA0))==0)
		{
		PORTC |=(1<<PC0);
		_delay_ms(100);
		PORTC=0X00;
		_delay_ms(100);
		}
		if((PINA&(1<<PA0))==1)
		{
			PORTC &=~(1<<PC0);
		}
    }
}

