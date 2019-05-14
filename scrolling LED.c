/*
 * GccApplication4.c
 *
 * Created: 09-05-2019 22:42:20
 * Author : lenovo
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL // 16 MHz CLOCKSPEED
#endif
#include <avr/io.h>
#include <util/delay.h>

//SCROLLING LED //
int main(void)
{
    DDRA=0XFF;
    while (1) 
    {
		PORTA=0X01;
		_delay_ms(100);
		PORTA=0x02;
		_delay_ms(100);
		PORTA=0x04;
		_delay_ms(100);
		PORTA=0X08;
		_delay_ms(100);
		PORTA=0X10;
		_delay_ms(100);
		PORTA=0X20;
		_delay_ms(100);
		PORTA=0X40;
		_delay_ms(100);
		PORTA=0X80;
		_delay_ms(100);
    }
}

