#ifndef __ACTIVITY1_H_
#define __ACTIVITY1_H_



/**
 * @file activity1.h
 * @author VENKAT SAI (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-05-01
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <avr/io.h>
#include "activity1.h"

//Macro definition 

#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */


#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB0)   /**< LED Pin number  */
#define SENSOR_ON !(PIND&(1<<PD0)) // Switch1 ON
#define HEAT_ON !(PIND&(1<<PD1)) // Switch2 ON

/**
 * @brief LED STATE CHANGE 
 * 
 * @param state IT IS EITHER 1 OFF OR ON
 */
void ledstat(uint8_t state);
void InitLED(void);

#endif /** __ACITIVY1_ */