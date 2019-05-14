/*
 * seven segment.c
 *
 * Created: 14-May-19 09:40:18 AM
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
   int arr[16]={0XFC,0X60,0XDA,0XF2,0X66,0XB6,0XBE,0XE0,0XFE,0XF6,0XEE,0X3E,0X9C,0X7A,0X9E,0X8F};
    while (1) 
    {
			for(int i=0;i<=15;i++)
			{
				PORTA=arr[i];
				_delay_ms(1000);
			}
		
    }
}

