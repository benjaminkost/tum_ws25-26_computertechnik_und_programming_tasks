#include <stdio.h>

int main()
{
	char a[4][4][4];

	printf("&a[0][0][0]: %p\n", &a[0][0][0]);
	printf("&a[0][1][0]: %p\n", &a[0][1][0]);
	printf("&a[1][0][0]: %p\n", &a[1][0][0]);

	// Berechnung für Letztes Element
	long addressOfFirstElement = 0x16d8e2d58;
	printf("Berechnung der Adresse:\n&a[0][0][0]: 0x16d8e2d58\n");
	long lastElement;
	lastElement = addressOfFirstElement + (4*4*4) * sizeof(char); // 0x16d8e2d58 + Länge in x*y*z Richtung * 1 Byte
	printf("&a[3][3][3]: %#lx", lastElement);
}