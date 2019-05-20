/*
 * relay on and off using bluetooth.c
 *
 * Created: 16-May-19 12:55:20 PM
 * Author : ALEKHYA
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <inttypes.h>
#include <util/delay.h>
#include <avr/interrupt.h>

#define RELAY PORTB
char buffer[10];

void USARTInit(uint16_t ubrr_value)
{
	UBRRL=ubrr_value;
	UBRRH=(ubrr_value>>8);
	UCSRC=(1<<URSEL)|(1<<UCSZ0)|(1<<UCSZ1);
	UCSRB=(1<<RXEN)|(1<<TXEN);
}

char USARTReadChar()
{
	while(!(UCSRA & (1<<RXC)))
	{
		
	}
	return UDR;
}
void USARTWriteChar(char data)
{
	while(!(UCSRA & (1<<UDRE)))
	{
		
	}
	UDR=data;
}
int main()
{
	USARTInit(77);
	DDRB=0XFF;
	char data;
	RELAY=0;
	while (1)
	{
		data=USARTReadChar();
		if(data=='1')
		{
			RELAY |=0X01;
		}
		else if(data=='2')
		{
			RELAY=0X00;
		}
		else if(data=='3')
		{
			RELAY |=0X02;
		}
		else if(data=='4')
		{
			RELAY=0X00;
		}
	}
	return 0;
}


