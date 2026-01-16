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

	// Name einlesen
	printf("Name: ");
    scanf("%20s", song.name);

	// Dauer einlesen
	printf("Duration: ");
	scanf("%i", &song.duration);


	// Song ausgeben in der Form "Name (Minuten:Sekunden)"
	printf("%s (%02d:%02d)", song.name, song.duration/60, song.duration%60);
}
