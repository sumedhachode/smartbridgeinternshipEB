/*
 * LCD.c
 *
 * Created: 10-May-19 02:19:49 PM
 * Author : ALEKHYA
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>

#define RS 7
#define E 5
void send_command(unsigned char command);
void send_character(unsigned char character);	



int main(void)
{
    DDRC=0XFF;
	DDRD=0XFF;
	_delay_ms(50);
	send_command(0X01);
	send_command(0X38);
	send_command(0X0E);
	
	send_character(65)
	_delay_ms(1000);
	send_character(0x4C);
	_delay_ms(1000);
	send_character(0x45);
		_delay_ms(1000);
	send_character(0x4B);
		_delay_ms(1000);
	send_character(0x48);
		_delay_ms(1000);
	send_character(0x59);
		_delay_ms(1000);
	send_character(0x41);
		_delay_ms(1000);
	send_command(0x18);
    
    }
	void send_command(unsigned char command)
	{
		PORTC=command;
		PORTD|=~1<<RS;
		PORTD|=(1<<E);
		_delay_ms(50);
		PORTD&=~(1<<E);
		PORTC=0;
	}
	void send_character(unsigned char character)
	{
		PORTC= character;
		PORTD|=(1<<RS);
		PORTD|=(1<<E);
		_delay_ms(50);
		PORTD&=~(1<<E);
		PORTC=0;
	}

	


