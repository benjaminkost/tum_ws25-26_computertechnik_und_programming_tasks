#include <stdio.h>
#include <string.h>

int string_to_lowercase(char *s)
{
	int captalLetters=0;

	for(int i = 0; *(s+i);i++){
		if(*(s+i)>=0x41 && *(s+i)<=0x5A){
			*(s+i) += 0x61-0x41;
			captalLetters++;
		}
	}

	return captalLetters;
}

int main()
{
	char s[100], i;

	printf("Zeichenkette: ");

	fgets(s, 100, stdin);
	s[strcspn(s, "\n")] = '\0';

	printf("Anzahl geänderte Zeichen: %d\n", i = string_to_lowercase(s));
	printf("Geänderte Zeichenkette: %s\n", s);
}
