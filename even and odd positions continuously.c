/*
 * GccApplication5.c
 *
 * Created: 09-05-2019 22:56:51
 * Author : lenovo
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz CLOCKSPEED
#endif
#include <avr/io.h>
#include <util/delay.h>

//EVEN AND ODD POSITIONS CONTINUOUSLY //
int main(void)
{
    DDRC=0XFF;
    while (1) 
    {
		PORTC=0X01;
		_delay_ms(100);
		PORTC=0x00;
		PORTC=1<<PC2;
		_delay_ms(100);
		PORTC=0x00;
		PORTC=1<<PC4;
		_delay_ms(100);
		PORTC=0x00;
		PORTC=1<<PC6;
		_delay_ms(100);
		PORTC=0x00;
		PORTC=1<<PC1;
		_delay_ms(100);
		PORTC=0x00;
		PORTC=1<<PC3;
		_delay_ms(100);
		PORTC=0x00;
		PORTC=1<<PC5;
		_delay_ms(100);
		PORTC=0x00;
		PORTC=1<<PC7;
		_delay_ms(100);
		PORTC=0x00;
		
		
    }
}

