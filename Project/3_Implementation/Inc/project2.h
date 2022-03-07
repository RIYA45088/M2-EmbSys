#ifndef __ACTIVITY_2_H__
#define __ACTIVITY_2_H__
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
 * Include files
 */ 

#ifndef __AVR_ATmega328__
    #define __AVR_ATmega328__
#endif
#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Initialize the registers for ADC setup
 * 
 */
void InitADC();

/**
 * @brief Gives the ADC values for the selected channel
 * 
 * @param[in] ch Channel number from 0-7
 * @return uint16_t ADC value
 */
uint16_t ReadADC(uint8_t ch);

/**
 * @brief Return the ADC value to main function
 * 
 * @return uint16_t The ADC value
 */
uint16_t project2_GetADC(void);

#endif /* __ACTIVITY_2_H__ */
