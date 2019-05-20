/*
 * potentiometer.c
 *
 * Created: 15-May-19 12:03:18 PM
 * Author : ALEKHYA
 */ 
#include <avr/io.h>
#define F_CPU 16000000UL
#include<util/delay.h>
#include<stdlib.h>
void PWM_init()
{
	TCCR0=(1<<WGM00)|(1<<WGM01)|(1<<COM01)|(1<<CS00);
	DDRB |=(1<<PB3);
}


#define enable  5
#define registerselection  7

void send_a_command(unsigned char command);
void send_a_character(unsigned char character);
void send_a_string(char*string_of_characters);



int main(void)
{
	
	PWM_init();
	DDRC=0XFF;
	DDRA=0X00;
	DDRD=0XFF;
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
	    
		
		
		send_a_string("LUNCH BREAK");
		send_a_command(0x80+0x40+0);
		send_a_string("RESISTANCE=");
		send_a_command(0x80+0x40+11);
		
		itoa(DIGIT,RESIST,10);
		
		
		send_a_string(RESIST);
		send_a_string(" ");
		send_a_command(0x80+0);
		OCR0=DIGIT;
		
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








