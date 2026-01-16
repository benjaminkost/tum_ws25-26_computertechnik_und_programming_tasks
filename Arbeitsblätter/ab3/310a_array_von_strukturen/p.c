#include <stdio.h>

typedef struct Song
{
	char name[20];
	int duration;
} Song;


int main()
{
	// Deklarationen
	Song songs[100];


	// Schleife zum Einlesen der Array-Elemente
	for(int i = 0; i < 100; i++)
	{
		// Name einlesen
		printf("Name: ");
		scanf("%20s", songs[i].name);


		// Dauer einlesen
		printf("Duration: ");
		scanf("%i", &songs[i].duration);


		// Abbruch, wenn Dauer = 0 eingegeben wurde
		if (songs[i].duration == 0) break;
	}

	// Alle Songs ausgeben in der Form "Name (Minuten:Sekunden)"
	for(int i = 0; songs[i].duration != 0; i++){
		printf("%s (%02d:%02d)\n", songs[i].name, songs[i].duration/60, songs[i].duration%60);
	}

}