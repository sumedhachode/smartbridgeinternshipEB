/*
 * LDR1.c
 *
 * Created: 14-May-19 12:57:45 PM
 * Author : ALEKHYA
 */ 
#include <avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>
#include<stdlib.h>

#define enable  5
#define registerselection  7

void send_a_command(unsigned char command);
void send_a_character(unsigned char character);
void send_a_string(char*string_of_characters);



int main(void)
{
	DDRC=0XFF;
	DDRA=0X00;
	DDRD=0XFF;
	DDRB=0XFF;
	_delay_ms(50);
	
	ADMUX |=(1<<REFS0)|(0<<REFS1);
	ADCSRA |=(1<<ADEN)|(1<<ADATE)|(1<<ADPS0)|(1<<ADPS1)|(1<<ADPS2);
	
	int16_t DIGIT=0;
	
	char RESIST [3];
	
	send_a_command(0x01);
	_delay_ms(50);
	send_a_command(0x38);
	_delay_ms(50);
	send_a_command(0b00001111);
	_delay_ms(50);
	
	ADCSRA |=(1<<ADSC);
	
	
	while (1)
	{
		DIGIT=ADC/4;
		if (DIGIT<100)
		{
			PORTB=0XFF;
		}
		else
		{
			PORTB=0X00;
		}
		send_a_string("Smartbridge");
		send_a_command(0x80+0x40+0);
		send_a_string("INTENSITY=");
		send_a_command(0x80+0x40+10);
		
		itoa(DIGIT,RESIST,10);
		
		
		send_a_string(RESIST);
		send_a_string(" ");
		send_a_command(0x80+0);
		
	}
	
	
}
void send_a_command(unsigned char command)
{
	PORTC=command;
	PORTD&=~(1<<registerselection);
	PORTD |=1<<enable;
	_delay_ms(20);
	PORTD&=~1<<enable;
	PORTC=0;
}
void send_a_character(unsigned char character)
{
	PORTC=character;
	PORTD |=(1<<registerselection);
	PORTD |=1<<enable;
	_delay_ms(20);
	PORTD&=~1<<enable;
	PORTC=0;
}
void send_a_string(char*string_of_characters)
{
	while(*string_of_characters>0)
	{
		send_a_character(*string_of_characters++);
	}
}







