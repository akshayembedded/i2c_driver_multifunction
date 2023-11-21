#include<xc.h>
#include "i2c.h"

void main()
{
	int i;
for(i=0;i<=10000;i++);
i2c_init();
i2c_start();//start slavead+R/w  
i2c_data(0x32);//0x32
i2c_data('a');
i2c_data('g');
i2c_stop();
while(1) 	
{

}
}

