/*
 * GccApplication2.c
 *
 * Created: 09-05-2019 14:49:54
 * Author : lenovo
 */ 


#ifndef F_CPU
#define F_CPU 16000000UL // 6 MHz CLOCKSPEED
#endif
#include <avr/io.h>
#include <util/delay.h>

// only 7th pin is 1 //
int main(void)
{
    DDRA=1<<PA7;
	DDRB=1<<PB7;
	DDRC=1<<PC7;
	DDRD=1<<PD7;
    while (1) 
    {
		 PORTA=1<<PA7;
		 PORTB=1<<PB7;
		 PORTC=1<<PC7;
		 PORTD=1<<PD7;
		 _delay_ms(100);
		 PORTA=0<<PA7;
		 PORTB=0<<PB7;
		 PORTC=0<<PC7;
		 PORTD=0<<PD7;
		 _delay_ms(100);
		 
    }
}


