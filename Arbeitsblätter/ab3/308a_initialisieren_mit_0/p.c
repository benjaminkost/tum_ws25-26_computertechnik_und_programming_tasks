#include <stdio.h>

typedef struct Person
{
	char name[20];
	int age;
} Person;

int main()
{
	// Deklaration mit Null-Initialisierung
	Person p = {"Max Mustermann", 15};


	// Ausgabe
	for(int i = 0; i < (sizeof(Person));i++){
		printf("person + %02d: 0x%02x\n", i, *(((char*) &p)+i));
	}

}