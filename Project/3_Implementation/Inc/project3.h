#ifndef __ACTIVITY_3_H__
#define __ACTIVITY_3_H__
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
#define PWM_20_PERCENT (205) /**< Output PWM for 20% duty cycle */
#define PWM_40_PERCENT (410) /**< Output PWM for 40% duty cycle */
#define PWM_70_PERCENT (717) /**< Output PWM for 70% duty cycle */
#define PWM_95_PERCENT (973) /**< Output PWM for 95% duty cycle */

/**
 * Include files
 */ 

#include <util/delay.h>
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief Initialize Timer1 registers 
 * 
 */
void InitTimer();

/**
 * @brief Produce duty cycle in PWM according to i/p ADC value
 * 
 * @param[in] temp The ADC value from activity2
 */
void project3_PWM(uint16_t temp);

#endif /* __ACTIVITY_3_H__ */
