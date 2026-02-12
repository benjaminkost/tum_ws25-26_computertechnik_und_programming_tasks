#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


// Struktur Song deklarieren
struct Song
{
	char name[20];
	int duration;
	struct Song *pNext;
};

// Deklaration der globalen Listen-Zeiger pFirst und pLast zur
// Speicherung der Adresse des ersten bzw. letzten Listen-Elements
struct Song *pFirst, *pLast;

void add_song_sorted_by_duration(struct Song *p)
{
	struct Song *p2;

	// Wenn die Liste leer ist







	// Liste ist nicht leer => In Schleife mit p2 die Liste durchlaufen

	{
		// Neues Element p vor dem ersten Element einfügen

		{



		}

		// Neues Element p irgendwo zwischen zwei Elementen einfügen

		{



		}

		// Neues Element p am Schluss einfügen

		{




		}
	} // Schleife
}




struct Song* get_song()
{
	struct Song *p;

	// Zur Laufzeit Speicher für einen Song allozieren und den Zeiger
	// auf diesen Speicher der Variable p zuweisen
	p = malloc(sizeof(struct Song));

	// Aus Funktion get_song mit Rückgabewert NULL zurückspringen, 
	// falls Speicher nicht zugewiesen werden konnte
	if (p==NULL) return NULL;

	printf("Name: ");
	
	// Name in die Variable "name" der allozierten Struktur einlesen
	scanf("%s", p->name);
	
	printf("Dauer: ");

	// Dauer in die Variable "dauer" der allozierten Struktur einlesen
	scanf("%i", &p->duration);

	// Allozierten und eingelesenen Song zurückgeben
	return p;
}


void add_song_at_the_end(struct Song *p)
{
	// Wenn die Liste leer ist






	// Sonst, wenn die Liste nicht leer ist






}

void add_song_at_the_beginning(struct Song *p)
{
	// Wenn die Liste leer ist
	if(pFirst == NULL){
		pFirst = p;
		pLast = p;
		p->pNext = NULL;
	}else { // Wenn die Liste nicht leer ist
		pLast->Next = p;
		p->pNext = NULL;
		pLast = p;
	} 
}

void print_all_songs()
{
	struct Song * p;

	for(p = pFirst; p; p = p->pNext)
	{
		printf("%s (%02d:%02d)\n", p->name, p->duration / 60, 
												p->duration % 60);
	}
}

int main()
{
	struct Song *p;

	pFirst = pLast = NULL;		// point nowhere

	while(1)
	{
		p = get_song(p);

		if(p == NULL) return -1;

		add_song_at_the_beginning(p);
		// add_song_at_the_end(p);
		// add_song_sorted_by_duration(p);
	}
	print_all_songs();
}
