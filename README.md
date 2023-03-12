# ATMega328P-Timer
 Timer configurations and the calculation of the number of counts needed for a specific frequency.
 
 ## Timer 0
set up to generate a 40 Hz signal on pin PD6 using CTC mode. The output compare register (OCR0A) is set to 194, which means that the timer will count up to 194 before resetting and generating an output signal. Since the clock source is set to CK/64, the timer will increment every 64 clock cycles of the microcontroller.

## Timer 1
Set up to generate a 5 Hz signal on pin PB1 using CTC mode. The output compare registers (OCR1AH and OCR1AL) are set to 12499, which means that the timer will count up to 12499 before resetting and generating an output signal. Since the clock source is set to CK/8, the timer will increment every 8 clock cycles of the microcontroller.

## Timer 2
Set up to generate a 40 Hz signal on pin PB3 using CTC mode. The output compare register (OCR2A) is set to 194, which means that the timer will count up to 194 before resetting and generating an output signal. Since the clock source is set to CK/32, the timer will increment every 32 clock cycles of the microcontroller.
