/*
 * edge_avoider.c
 *
 * Created: 16-06-2016 13:31:43
 * Author : pc
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
   DDRB=0xFF;
   DDRC=0x00;
   char x;
   while (1)
   {
	   x=PINC&0b00000011;
	   if (x==0b00000011)
	   {
		   PORTB=0b00001010;
	   }
	   else
	   {
		   PORTB=0b00000101;
		   _delay_ms(400);
		   PORTB=0b00001000;
		   _delay_ms(400);
	   }
	   
   }
}

