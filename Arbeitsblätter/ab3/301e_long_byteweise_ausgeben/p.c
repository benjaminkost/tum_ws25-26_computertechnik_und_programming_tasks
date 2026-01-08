#include <stdio.h>

int main()
{
	unsigned long l = 0x0123456789ABCDEF;

	// Geben Sie hier den Code an, mit dem Sie die einzelnen
	// Bytes 0x01, 0x23, 0x45, ... jeweils in einer eigenen
	// Zeile ausgeben, beginnend bei der Adresse l
	char* p = (unsigned char*)&l;

	for(int i = 0; i < sizeof(long); i++){
		printf("0x%x\n", *(p+i));
	}

}