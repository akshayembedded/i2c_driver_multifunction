/* 
 * File:   i2c.h
 * Author: aksha
 *
 * Created on 21 November, 2023, 11:26 AM
 */

#ifndef I2C_H
#define	I2C_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* I2C_H */

void i2c_init();
void i2c_start();
void i2c_stop();
void i2c_data(char a);
char i2c_read(char a);