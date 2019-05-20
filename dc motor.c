/*
 * dc motor.c
 *
 * Created: 15-May-19 02:13:14 PM
 * Author : ALEKHYA
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
    DDRA=0XFF;
    while (1) 
    {
		PORTA=0X01;
		_delay_ms(1000);
		PORTA=0X00;
		_delay_ms(1000);
		PORTA=0X02;
		_delay_ms(1000);
		PORTA=0X00;
		_delay_ms(1000);
}
}
