/*
 * GccApplication1.c
 *
 * Created: 09-05-2019 14:17:24
 * Author : lenovo
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL // 6 MHz CLOCKSPEED
#endif
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRB=0XFF;
    while (1) 
    {
		PORTB =0XFF;
		_delay_ms(100);
		PORTB = 0x00;
		_delay_ms(100);
    }
}

