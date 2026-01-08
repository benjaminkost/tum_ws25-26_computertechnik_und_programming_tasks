#include <avr/io.h>
#include <avr/interrupt.h>

#define SET_LED_ON (PORTD |= 1)
#define SET_LED_OFF (PORTD &= ~1)
#define TOGGLE_LED (PORTD ^= 1)

ISR(TIMER1_OVF_vect)
{
    TOGGLE_LED;
    TCNT1 = 46004;
}

int main(void)
{
    DDRD = 1;
    SREG |= 128; // Activates globally Interrupts
    TIMSK1 = 1; // Activates Timer
    TCCR1B = 5; // Taktung vom Timer

    // 20.000.000MHZ / 1024 = 19531 (Zahlen hochgezählt pro Sekunde) 
    // 2^16-1-19531=46004
    TCNT1 = 46004;

    while(1);
}