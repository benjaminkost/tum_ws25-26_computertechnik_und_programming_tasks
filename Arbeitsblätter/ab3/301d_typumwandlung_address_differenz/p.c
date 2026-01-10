#include <stdio.h>

int main()
{
	int a[] = {0x01234567, 0x89ABCDEF};

	long int d;

	// Berechnung der Differenz in Speicherstellen/Bytes
	d = (char) (a + 1) - (char) (a);


	printf("Differenz &a[1] - &a[0] in Speicherstellen/Bytes: %ld\n", d);
}