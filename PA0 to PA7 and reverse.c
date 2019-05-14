/*
 * GccApplication6.c
 *
 * Created: 09-05-2019 23:06:22
 * Author : lenovo
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz CLOCKSPEED
#endif
#include <avr/io.h>
#include <util/delay.h>

// PA0 TO PA7 AND REVERSE //
int main(void)
{
    DDRA=0XFF;
    while (1) 
    {
		PORTA=0X01;
		_delay_ms(100);
		PORTA=0x00;
		PORTA=1<<PA1;
		_delay_ms(100);
		PORTA=0x00;
		PORTA=1<<PA2;
		_delay_ms(100);
		PORTA=0x00;
		PORTA=1<<PA3;
		_delay_ms(100);
		PORTA=0x00;
		PORTA=1<<PA4;
		_delay_ms(100);
		PORTA=0x00;
		PORTA=1<<PA5;
		_delay_ms(100);
		PORTA=0x00;
		PORTA=1<<PA6;
		_delay_ms(100);
		PORTA=0x00;
		PORTA=1<<PA7;
		_delay_ms(100);
		PORTA=0x00;
		PORTA=1<<PA6;
		_delay_ms(100);
		PORTA=0x00;
		PORTA=1<<PA5;
		_delay_ms(100);
		PORTA=0x00;
		PORTA=1<<PA4;
		_delay_ms(100);
		PORTA=0x00;
		PORTA=1<<PA3;
		_delay_ms(100);
		PORTA=0x00;
		PORTA=1<<PA2;
		_delay_ms(100);
		PORTA=0x00;
		PORTA=1<<PA1;
		_delay_ms(100);
		PORTA=0x00;
		PORTA=0X01;
		_delay_ms(100);
		PORTD=0x00;
		
		
		
		
		
    }
}

