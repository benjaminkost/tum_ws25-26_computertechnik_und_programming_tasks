#include <avr/io.h>
#include <avr/interrupt.h>

#define DREHGEBER_DELTA 100

// Taktrate Prozessor: 20 MHz => 1 Takt (1 cycle) dauert 50 ns


#define DREHGEBER_DELTA	100


// Drehgeber

ISR(INT0_vect)
{
	// Linksdrehung

		if(PIND & 2){
			if (OCR1A <=6250){
				OCR1A +=3750/100;
			}
		} else { 	// Rechtsdrehung
			if (OCR1A >= 1250){
			OCR1A -=3750/100;
			}
	}

}


int main(void)
{

	DDRD = 32;	// PD5 als Ausgang (OC1A)

	// Interrupts global freischalten
	SREG = 128;

	// Drehgeber
	EIMSK = 1;		// INT0 Interrupt freischalten
	EICRA = 3;		// Für INT0 steigende Flanke als Auslöser auswähle


	// Fast-PWM-Mode einstellen
	TCCR1A |=0x02; // WGM10 = 0, WGM11 = 1
	TCCR1B |=0x18; // WGM12 = 1, WGM13 = 1

	TCCR1B |=2; // prescaler auf clk/8
	TCCR1A |=0x80; // wenn TCNT1 0 ist High + Pulsweite abhängig von Wert 


    // Periodenlänge 20 ms mit ICR1 einstellen
	ICR1=50000;

    // Servo-Mittenposition mit OCR1A einstellen
    // PWM-High-Pegel hat 1,5 ms
	OCR1A=3750;

    // Endlosschleife
    while(1);
}