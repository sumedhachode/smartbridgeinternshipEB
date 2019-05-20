/*
 * stepper motor 1.c
 *
 * Created: 16-May-19 03:27:23 PM
 * Author : ALEKHYA
 */ 
#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

int main(void)
{
    DDRA=0X0F;/* Replace with your application code */
	int period=2;
	while (1) 
    {
		for(int i=0;i<100;i++)
		{
			PORTA=0X09;
			_delay_ms(period);
			PORTA=0X08;
			_delay_ms(period);
			PORTA=0X0C;
			_delay_ms(period);
			PORTA=0X06;
			_delay_ms(period);
			PORTA=0X04;
			_delay_ms(period);
			PORTA=0X02;
			_delay_ms(period);
			PORTA=0X03;
			_delay_ms(period);
			PORTA=0X01;
			_delay_ms(period);
        }
	PORTA=0X09;
	_delay_ms(period);
	_delay_ms(1000);
	//rotate stepper motor anticlock wise//
	for(int i=0;i<100;i++)
	{
		PORTA=0X01;
		_delay_ms(period);
		PORTA=0X03;
		_delay_ms(period);
		PORTA=0X02;
		_delay_ms(period);
		PORTA=0X04;
		_delay_ms(period);
		PORTA=0X06;
		_delay_ms(period);
		PORTA=0X0C;
		_delay_ms(period);
		PORTA=0X08;
		_delay_ms(period);
		PORTA=0X09;
		_delay_ms(period);
     }
	 PORTA=0X09;
	 _delay_ms(period);
	 _delay_ms(1000);
	}
}

