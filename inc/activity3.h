/**
 * @file activity3.h
 * @author SAI name (you@domain.com)
 * @brief it takes the PWM o/p
 * @version 0.1
 * @date 2021-05-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __ACTIVITY3_H__
#define __ACTIVITY3_H__
#include<avr/io.h>
/**
 * @brief outputs pWM value
 * 
 * @param temp_value 
 * @return char
 */
char OutPWM(uint16_t temp_value);
/**
 * @brief port configuration for PWM
 * 
 */
void InitPWM(void);
#endif