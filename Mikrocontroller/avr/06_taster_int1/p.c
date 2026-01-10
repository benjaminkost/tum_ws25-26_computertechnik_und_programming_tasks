#include <avr/io.h>
#include <avr/interrupt.h>


#define SET_LED_ON (PORTD |= 1)
#define SET_LED_OFF (PORTD &= ~1)
#define TOGGLE_LED (PORTD ^= 1)

ISR(INT1_vect){
    TOGGLE_LED;
}

int main(void)
{
    PORTD = 0;
    DDRD = 1;
    SREG |= 0b10000000; // schaltet alle interprupter global frei
    EIMSK = 0x02; // startet INT1 interupter
    EICRA = 0x08; // Bedingung bei fallenden Flanken

    while(1);
}