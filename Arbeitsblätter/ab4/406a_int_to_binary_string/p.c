#include <stdio.h>


void int_to_binary_string(int n, char *s)
{
	int i;
	int maxValue = sizeof(int) * 8;

	for(i=0;i<maxValue;i++){
		*(s+i) = (n >> (maxValue -i -1) & 1) + '0';
	}

	*(s+i) = '\0';
}


int main()
{
	int n;
	char s[sizeof(int) * 8 + 1];	// +1 wg. term. Null

	printf("Zahl: ");

	scanf("%d", &n);
	
	int_to_binary_string(n, s);

	printf("Binäre Darstellung: %s\n", s);
}