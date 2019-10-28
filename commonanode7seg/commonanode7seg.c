#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
void main()
{
   DDRC=0Xff;
   DDRA=0X00;
   PORTA=(1<<PA7);

   while(1)

   {   
        if((PINA & 0b10000000)==0)
        { PORTC=0x00;
		 _delay_ms(100);
         PORTC=0b01000000;//0
		 _delay_ms(100);
		 PORTC=0b01111001;//1
		 _delay_ms(100);
		 PORTC=0b00100100;//2
		 _delay_ms(100);
		 PORTC=0b00110000;//3
		 _delay_ms(100);
		 PORTC=0b00011001;//4
		 _delay_ms(100);
		 PORTC=0b00010010;//5
		 _delay_ms(100);
		 PORTC=0b00000010;//6
		 _delay_ms(100);
		 PORTC=0b11111000;//7
		 _delay_ms(100);
		 PORTC=0b00000000;//8
		 _delay_ms(100);
		 PORTC=0b00011000;//9
		 _delay_ms(100);
		 }
		 else
		 {
		 PORTC=0xff;
		 }

     }
	 }
