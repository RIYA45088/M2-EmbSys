
#ifndef __ACTIVITY_1_H__
#define __ACTIVITY_1_H__
/**
 * @file project1.h
 * @author Riya Kumari (riya45088@gmail.com)
 * @brief Header file for project1
 * @version 0.1
 * @date 2022-07-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */


/**
 * Macro Definitions
 */
#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif

#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */
#define LED_PORT (PORTD)    /**< LED Port Number */
#define LED_PIN  (PORTD2)   /**< LED Pin number  */
#define BUTTON_SENSOR  (PORTD0)   /**< Port for Button Sensor  */
#define TEMP_SENSOR  (PORTD1)   /**< Port for Temperature Sensor   */

/**
 * Include files
 */ 

#include <avr/io.h>
#include <util/delay.h>




/**
 * Function Definitions
 */

/**
 * @brief Initialize all the Peripherals and pin configurations
 * 
 */
void peripheral_init(void);

/**
 * @brief Function to turn LED on
 * 
 */
void TurnLED_ON();

/**
 * @brief Function to turn LED off
 * 
 */
void TurnLED_OFF();

/**
 * @brief project 1 to Turn ON LED if switches for Button sensor and Heator sensor are pressed 
 * 
 */
int project1_LED(void);

#endif /* __ACTIVITY_1_H__ */
