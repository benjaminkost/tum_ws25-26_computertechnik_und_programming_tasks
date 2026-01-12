#include <avr/io.h>
#include <avr/interrupt.h>

#define SET_LED_ON (PORTD |= 1)
#define SET_LED_OFF (PORTD &= ~1)
#define TOGGLE_LED (PORTD ^= 1)

ISR(INT0_vect)
{
    if(PIND & 2) // links gedreht
        SET_LED_OFF;
    else // rechts gedreht
        SET_LED_ON;
}

ISR(INT1_vect)
{
    TOGGLE_LED;
}

int main(void)
{
    DDRD = 1; // PD0 als Ausgang festlegen (LED)

    SREG = 128; // Interrupts global freischalten

    EICRA = 8 | 3; // 8: INT1 fallende Flanke;
                   // 3: INT0 steigende Flanke

    EIMSK = 3; // INT0 und INT1 freischalten

    while(1); // warten
}
