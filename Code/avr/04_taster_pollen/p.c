#include <avr/io.h>
#define TOGGLE (PORTD ^= 1)
#define BUTTON_PIN 3
#define MAX 65535

int main(void)
{
    DDRD |= 1;
    char last_button_state = 0;
    
    while(1){
        char current_button_state = PIND & (1 << BUTTON_PIN);

        if (current_button_state && !last_button_state){
            TOGGLE;
        }

        for(volatile unsigned int i = 0; i < MAX; i++){
            // ca. 100ns
        }

        last_button_state = current_button_state;
    }
}