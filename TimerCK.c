/*
 * TimerCK.c
 *
 * Created: 02/03/2018 12:35:27 p. m.
 * Author: 
 */

#include <mega328p.h>

void delay5ms(void)
{
    TCCR0B=0x03; //Preescalador 001 ; CK/64
    TCNT0=178;  //256-(5000/64) = 256-78
    while(TIFR0.TOV0==0); //Espera oevrflow
    TCCR0B=0; //Apaga el timer
    TIFR0.TOV0=1; //Borrar overflow
    
}
void main(void)
{
    DDRB.0=1; //PB0 de salida
    
while (1)
    {
        PORTB.0=1;
        delay5ms();
        PORTB.0=0;
        delay5ms();

    }
}
