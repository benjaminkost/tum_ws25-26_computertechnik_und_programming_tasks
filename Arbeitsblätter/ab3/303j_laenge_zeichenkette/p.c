#include <stdio.h>

int main(int argc, char * argv[])
{
	char eingabe[21] = "ABCDEFGHIJKLMNOPQRST";
	int l;

	printf("Bitte geben Sie einen Text ein: ");
	scanf("%20s", eingabe);

	// Hier Länge der Zeichenkette bestimmen und in 
	// Variable l ablegen.
	for(l = 0; eingabe[l]; l++);

	printf("\nLänge: %d\n", l);
}