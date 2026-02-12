#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


// Struktur Song deklarieren
typedef struct Song {
	char name[20];
	int duration;

	struct Song *pNext;
} Song;

// Deklaration der globalen Listen-Zeiger pFirst und pLast zur
// Speicherung der Adresse des ersten bzw. letzten Listen-Elements
Song *pFirst, *pLast;

void enter_songs_at_the_end()
{
	// Zeiger p auf Struktur Song deklarieren
	Song *p;

	while(1)
	{
		// Speicher für Struktur Song allozieren und Zeiger 
		// auf das erste Byte in Variable p ablegen
		p = malloc(sizeof(Song));
		if (p == NULL) return; // prüfen ob malloc keinen Speicher allokieren konnte

		// Lied-Name in Variable name der Song-Struktur einlesen
		printf("Name: ");
		scanf("%s", p->name);

		// Dauer in Variable Duration der Song-Struktur einlesen
		printf("Duration: ");
		scanf("%i", &(p->duration));

		// Allozierten Speicher wieder freigeben und Endlos-Schleife 
		// verlassen, falls Dauer 0 eingegeben wurde
		if (p->duration == 0){
			free(p);
			break;
		}

		// Wenn die Liste leer ist
		if(pFirst == NULL){
			pFirst = p;
			pLast = p;
			p->pNext = NULL;
		} else{ // Sonst, wenn die Liste nicht leer ist
			pLast->pNext = p;
			p->pNext = NULL;
			pLast = p;
		}
	}
}


void print_all_songs()
{
 	Song *p = pFirst;

	while(p != NULL){
		int minDuration = (p->duration)/60;
		int secDuration = (p->duration)-minDuration*60;

		printf("\n%s (%02i:%02i)\n", p->name, minDuration, secDuration);

		p = p->pNext;
	}
}

int main()
{
	pFirst = pLast = NULL;		// point nowhere
	
	enter_songs_at_the_end();
	print_all_songs();

}

