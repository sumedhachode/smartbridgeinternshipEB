/*
 * motor speed ctrl using four switches.c
 *
 * Created: 15-May-19 08:31:18 PM
 * Author : ALEKHYA
 */ 
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
void PWM_init()
{
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
}


int main()
{
	DDRA=0X00;
	DDRB=0XFF;
	PWM_init();
	while (1)
	{
		PORTB=0X08;
		if ((PINA &(1<<PA0))==0)
		{
			OCR0=150;
		}
		if ((PINA &(1<<PA1))==0)
		{
			OCR0=200;
		}
		
		

	}
}




