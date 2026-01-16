#include <stdio.h>

// Strukturdefinition
typedef struct Song {
	char name[20];
	int duration;
} Song;

int main()
{
	// Deklaration
	Song song;
	printf("Adresse von song: %p\n", &song);
    printf("Adresse von der ersten Komponente von song: %p\n", &song.name);
    printf("Adresse von der ersten Komponente von song: %p\n", &song.name);

	printf("Wert der song Varianle: %i\n", song.duration);

	// Name einlesen
	printf("Songname: ");


	// Dauer einlesen



	// Song ausgeben in der Form "Name (Minuten:Sekunden)"

}
