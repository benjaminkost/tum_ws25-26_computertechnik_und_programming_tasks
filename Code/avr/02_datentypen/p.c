#include <avr/io.h>
#define SET_LED_ON (PORTD |= 1)
#define SET_LED_OFF (PORTD &= 0xFE)

int main(void)
{
    DDRD = 1;

	if(sizeof(int) == 2)
        SET_LED_ON;
    else
        SET_LED_OFF;
}

