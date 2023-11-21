/*
 * File:   atmega_master_to_slave.c
 * Author: aksha
 *
 * Created on 21 November, 2023, 11:52 AM
 */



#include "main.h"
int main(void)
{
	char a;
	i2c_init();
    uart_init();
	a=i2c_statusw();
	trans(a);
	a=i2c_statusw();
	trans(a);
	while(1)
	{

	}
}

