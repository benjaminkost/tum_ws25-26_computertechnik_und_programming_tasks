#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* int_to_binary_string(int n, int endValue)
{
	int j = 0;
	char *s = malloc(endValue + 1);
	int maxValue = sizeof(int)*8;

	for(int i = 0;i < endValue;i++){
		s[j] = ((n >> (maxValue -i -1)) & 1) + '0';
		j++;
	}

	s[j] = '\0';

	return s;
}

void print_float_binary(float f)
{
	int *p = &f;
	char *s;

	int wert = ((*p >> 31)&1)+'0';
	
	printf("s: %c ", wert);

	wert = *p << 1;
	
	s = int_to_binary_string(wert,8);
	printf("e: %s ", s);

	wert = *p << 9;

	s = int_to_binary_string(wert,23);
	printf("f: %s", s);
}


int main()
{
	float f;
	
	printf("Zahl: ");

	scanf("%f", &f);
	
	printf("Binäre Darstellung: ");

	print_float_binary(f);

	printf("\n");
}