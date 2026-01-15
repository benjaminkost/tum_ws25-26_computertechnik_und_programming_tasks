#include <stdio.h>

int main()
{
	// Zwei dreidimensionale Vektoren mit Namen "vektor1"
	// und "vektor2" anlegen; Typ: 64 Bit Gleitkommazahl
	double vektor1[3], vektor2[3];


	// Variable "i" als 32 Bit vorzeichenlose Fest-
	// kommazahl anlegen um Vektoren zu indizieren
	unsigned int i;

	// Variable "sum" vom Typ "64 Bit Gleitkommazahl" deklarieren
	double sum;
	
	// Vektor 1 einlesen
	printf("Erster Vektor\nElement 1: ");
	scanf("%lf", vektor1);

	printf("Element 2: ");
	scanf("%lf", vektor1+1);

	printf("Element 3: ");
	scanf("%lf", vektor1+2);


	// Vektor 2 einlesen
	printf("\nZweiter Vektor\nElement 1: ");
	scanf("%lf", vektor2);

	printf("Element 2: ");
	scanf("%lf", vektor2+1);

	printf("Element 3: ");
	scanf("%lf", vektor2+2);


	// Skalarprodukt berechnen
	for(i=0;i<3;i++){
		sum +=vektor1[i]*vektor2[i];
	}

	
	// Ergebnis ausgeben
	printf("\nDas Skalarprodukt beträgt %.2f.", sum);



}	// Ende main-Routine