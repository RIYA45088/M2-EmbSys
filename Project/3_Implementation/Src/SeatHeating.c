/**
 * @file SeatHeating.c
 * @author Riya Kumari
 * @brief Heat Seating Application to set Temperature of seat
 * @version 0.1
 * @date 2022-03-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "project1.h"
#include "project2.h"
#include "project3.h"
#include "project4.h"

int main(void)
{
    uint16_t temp;
    
    while(1)
    {
        if(project1_LED()==1) //Check if both the switches are pressed
        {
           
            TurnLED_ON();//Turn LED ON
            temp=project2_GetADC(); //Get the ADC value
            project3_PWM(temp); //PWM output based on temperature
		    project4_USARTWrite(temp); //To Serial monitor to print Temperature
            

        }
        else  //in all other cases
        {
            TurnLED_OFF();//Turn LED OFF
		    _delay_ms(200);
        }

    }
    return 0;
}
