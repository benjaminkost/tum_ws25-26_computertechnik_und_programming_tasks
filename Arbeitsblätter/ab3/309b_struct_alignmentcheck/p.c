#include <stdio.h>

typedef struct Alignment
{
	char c1; // 1 Byte 
	int i; // 3 Byte: Padding + 4 Byte Datenwort
	char c2; // 1 Byte
} Alignment;

int main(int argc, char * argv[])
{
	Alignment a;

	printf("Adresse c1: %p\n", &a.c1);
	printf("Adresse i: %p\n", &a.i);
	printf("Adresse c2: %p\n", &a.c2);

}
