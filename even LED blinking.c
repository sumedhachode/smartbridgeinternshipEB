/*
 * GccApplication3.c
 *
 * Created: 09-05-2019 22:24:40
 * Author : lenovo
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz CLOCKSPEED
#endif
#include <avr/io.h>
#include <util/delay.h>
//EVEN LED BLINKING //

int main(void)
{
    DDRB = 0XFF;
    while (1) 
    {
		PORTB = 0X01;
		_delay_ms(100);
		PORTB=0x00;
		PORTB=1<<PB2;
		_delay_ms(100);
		PORTB=0X00;
		PORTB=1<<PB4;
		_delay_ms(100);
		PORTB=0X00;
		PORTB=1<<PB6;
		_delay_ms(100);
		
    }
}

