#include <avr/io.h>
#include <avr/interrupt.h>


#define TOGGLE_LED (PORTD ^= 1)


// Variable tcnt0_reset_value wird bei jedem Timer0-Überlauf als neuer
// Timer-Start-Wert in das TCNT-Register geladen. Hier tcnt0_reset_value
// deklarieren und so initialisieren, dass T0 jede 1/100 s überläuft.
// 20.000.000/1024=19531Hz
// 19531/100s=195
// 256-195 = 61
unsigned char tcnt0_reset_value = 61;

// Variable t0_overflows legt die Anzahl der Überläufe fest, welche die LED
// an bzw. aus ist; Wertebereich: 1, 2, ... 100; hier t0_overflows dekla-
// rieren und so initialisieren, dass die LED initial mit 5 Hz blinkt.
unsigned char t0_overflows = 10;


// Variable t0_overflow_count wird zum Zählen der Timer0-Überläufe seit
// der letzten LED-Zustandsänderung verwendet; Wertebereich: 1, 2, ... 100;
// Deklarieren Sie die Variable und initalisieren Sie sie mit demselben
// Wert wie t0_overflows 
unsigned char t0_overflow_count = 10;


ISR(INT0_vect)
{
	// Linksdrehung
	if (PIND&=2){
        if(t0_overflows == 1) t0_overflows = 1;
        else if(t0_overflows <= 9) t0_overflows -= 1;
        else if(t0_overflows <= 29) t0_overflows -= 3;
        else if(t0_overflows <= 49) t0_overflows -= 5;
        else if(t0_overflows <= 79) t0_overflows -= 8;
        else if(t0_overflows >= 80) t0_overflows -= 10;
    }

    // Rechtsdrehung
    else
    {
        if(t0_overflows <= 9) t0_overflows += 1;
        else if(t0_overflows <= 29) t0_overflows += 3;
        else if(t0_overflows <= 49) t0_overflows += 5;
        else if(t0_overflows <= 79) t0_overflows += 8;
        else if(t0_overflows <= 90) t0_overflows += 10;
        else if(t0_overflows > 90) t0_overflows = 100;
    }
}


ISR(TIMER0_OVF_vect)
{
	// Timer-Wert wiederherstellen
	TCNT0 = tcnt0_reset_value;


	// t0_overflow_count um 1 verringern
	t0_overflow_count--;


	// wenn Zähler t0_overflow_count bei 0 angekommen ist,
	// t0_overflow_count zurücksetzen und Zustand LED ändern
	if(t0_overflow_count == 0){
		t0_overflow_count = t0_overflows; // Wert zurücksetzen
		TOGGLE_LED;
	}




}



int main(void)
{

	// Bit 0 von PORTD als Ausgang festlegen
	DDRD = 1;

	// Interrupts global freischalten
	SREG = 128;

	// INT0 Interrupt freischalten
	EIMSK = 1; 

	// Für INT0 steigende Flanke als Auslöser auswählen
	EICRA = 0x3;

	// Interrupt für Timer0 freischalten
	TIMSK0=1;

	// Prescaler 1024 für Timer0 auswählen
	TCCR0B=5;

	// TCNT0 mit tcnt0_reset_value initialisieren
	TCNT0 = tcnt0_reset_value;

	//Endlos-Schleife
	while(1);

}
