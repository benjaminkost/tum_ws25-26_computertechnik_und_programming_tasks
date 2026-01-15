#include <stdio.h>
#include <stdbool.h>

int main()
{
	// Deklarationen
	int a[700];
	int n,i,j;
	bool found;


	// Matrikelnummern einlesen; eine eingele-
	// sene 0 soll den Einleseprozess beenden
	for(n=0; n < 700;n++){
		printf("Matrikelnummer: ");
		scanf("%i", a+n);

		if(a[n]==0) break;
	}


	// Matrikelnummern ausgeben, dabei jede bereits
	// ausgegebene Nummer nicht noch einmal ausgeben
	for(i= 0;i < 700;i++){
		for(j=0; j<i;j++){
			if(a[j] == a[i]) found = 1;
		}
		if(!found && a[i]!=0) printf("%i\n", a[i]);
		found = 0;

		if(a[i]==0) break;
	}
} // Ende main-Routine
