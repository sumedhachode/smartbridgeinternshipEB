/*
 * servo motor2.c
 *
 * Created: 16-May-19 03:06:08 PM
 * Author : ALEKHYA
 */
#include <avr/io.h>
#define F_CPU 16000000UL
#include <util/delay.h>



int main(void)
{
    TCCR1A|=(1<<COM1A1)|(1<<COM1B1)|(1<<WGM11);
    TCCR1B|=(1<<WGM13)|(1<<WGM12)|(1<<CS11)|(1<<CS10);
	ICR1=4999;
	DDRD|=(1<<PD5);
	
    while (1) 
    {
		OCR1A=97; //0 degree
		_delay_ms(1000);
		
		OCR1A=195; 
		_delay_ms(1000);
		
		OCR1A=270; //90 degree
		_delay_ms(1000);
		
		OCR1A=500; //180 degree
		_delay_ms(1000);
		
    }
}



