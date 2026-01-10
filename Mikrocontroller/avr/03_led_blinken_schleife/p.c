#include <avr/io.h>
#define MAX 32000
#define TOGGLE (PORTD ^= 1)

int main(void)
{
    DDRD |= 0x01;
    PORTD &= 0xFE;

    while(1){
        for(volatile unsigned long i = 0; i < MAX;i++){

        }
        TOGGLE;
    }
}