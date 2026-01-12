#include <avr/io.h>
#include <avr/interrupt.h>

#define SET_LED_ON (PORTD |= 1)
#define SET_LED_OFF (PORTD &= ~1)
#define TOGGLE_LED (PORTD ^= 1)

ISR(TIMER1_OVF_vect)
{
    TCNT1 = 65536 - 19531; // siehe unten
    TOGGLE_LED;
}

int main(void)
{
    DDRD=0x01; // set PD0 as output
    SREG = 0x80; // globally enable interrupts
    TIMSK1 = 0x01; // enable Timer 1 interrupt
    TCCR1B = 0x05; // prescaler 1024

    // Frequenz: 20 MHz / 1024 = 19.531
    // d.h. 19.531 Taktzyklen pro Sekunde
    // Jede Sekunde, d.h. alle 19.531 Takte
    // soll ein Timer-Überlauf stattfinden
    // => von 65.536 19.531 abziehen
    TCNT1 = 65536 - 19531;

    while(1);
}