#include <stdio.h>


char * int_to_hex_string(int n, char *s)
{
	int j = 2;
	*s='0';
	*(s+1)='x';
	int bitMask = 0xF;
	int maxBits = sizeof(int)*8;
	int nibbleValue = 0;

	for(int i=1;i<=(maxBits/4);i++){
		nibbleValue = ((n >> (maxBits -4*i))&bitMask);
		nibbleValue += '0';

		if (nibbleValue > '9') nibbleValue += 'a'-'9'-1;

		*(s+(j+i-1)) = nibbleValue; 
	}
	

	return s;
}

int main()
{
	int n;
	char s[sizeof(int) * 2 + 3];	// +3 wg. 0x und term. Null

	printf("Zahl: ");

	scanf("%d", &n);
	
	printf("Hexadezimale Darstellung: %s\n", int_to_hex_string(n, s));
}