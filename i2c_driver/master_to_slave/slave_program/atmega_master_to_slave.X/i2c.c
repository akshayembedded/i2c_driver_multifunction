#include "main.h"

void i2c_init()
{
	DDRC=0;//1111 1111
	TWAR=0x32;// 0001 000 0   0110 1000 0x61

	TWCR=0x44;//ack

	TWCR|=0x80;//TWCR=TWCR|10
	while((TWCR&(0x80))==0);//slave address
}

char i2c_statusw()//master to slave
{
	TWCR=0x44;//
	TWCR|=0x80;
	while((TWCR&(0x80))==0);//
	return TWDR;
	//1 clear flag bit lpc2138/avr 0 1
}

void i2c_statusr(char a)
{
	TWDR=a;
	TWCR=0x44;//
	TWCR|=0x80;
	while((TWCR&(0x80))==0);
	//1 clear flag bit lpc2138/avr 0 1
}
