#include "main.h"

void trans(char a)
{
	while((UCSRA&0x20)==0);//UDR empty when 5th bit in UCSRA is 1
	UDR=a;
}
void uart_init()
{
    DDRD=0xff;
    UCSRC=0x86;//1<<URSEL|1<<UCZ1|1<<UCZ2
    UCSRA=(1<<U2X);
    UCSRB=(1<<TXEN);
    UBRRL=103;
    UBRRH=0;
    
}
