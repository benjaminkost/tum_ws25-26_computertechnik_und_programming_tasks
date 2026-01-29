#include <stdio.h>

// Makro wert_verdoppeln(x) mit _Generic-Ausdruck
#define wert_verdoppeln(x) _Generic( (x), \
								int: wert_verdoppeln_int, \
								double: wert_verdoppeln_double \
								) (x)

// Funktion zum Verdoppeln von Integer-Werten
int wert_verdoppeln_int(int wert){
	return wert*2;
}


// Funktion zum Verdoppeln von Double-Werten
double wert_verdoppeln_double(double wert){
	return wert*2;
}


int main()
{
	int wert_int;
	double wert_double;

	printf("Integer-Wert: ");
	scanf("%d", &wert_int);

	printf("Double-Wert: ");
	scanf("%lf", &wert_double);

	printf("Doppelter Integer-Wert: %d\n", wert_verdoppeln(wert_int) );
	printf("Doppelter Double-Wert: %.2lf\n", wert_verdoppeln(wert_double) );
}
