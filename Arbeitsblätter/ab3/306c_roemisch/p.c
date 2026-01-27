#include <stdio.h>

int main()
{
	// Deklarationen
	// Array "rds" für 15 "roman digits" (Zeichen)
	char rds[16];	
	// Array "vs" ("values") für die den eingegebenen
	// römischen Zeichen entsprechenden Festkomma-Werte
	int vs[16];

	// Variable "sum" um die Werte aufzuaddieren
	int sum = 0;
	// Variable l speichert die Länge der Zeichenkette
	int l=0;

	// Römische Zahl einlesen
	printf("Römische Zahl: ");
	scanf("%15s", rds);
	
	// Werte der einzelnen römischen Ziffern im Array "rds" ermitteln
	// und an den entsprechenden Positionen im Array "vs" ablegen
	// Variable l soll danach die Anzahl römischer Ziffern enthalten.

	// rds in vs umwandeln; l soll danach die Länge enthalten
	for(int i = 0; rds[i]; i++){
		switch (rds[i])
		{
		case 'I': 
			vs[i] = 1;
			break;
		case 'V': 
			vs[i] = 5;
			break;
		case 'X': 
			vs[i] = 10;
			break;
		case 'L': 
			vs[i] = 50;
			break;
		case 'C': 
			vs[i] = 100;
			break;
		case 'D': 
			vs[i] = 500;
			break;
		case 'M': 
			vs[i] = 1000;
			break;
		case 'i': 
			vs[i] = 1;
			break;
		case 'v': 
			vs[i] = 5;
			break;
		case 'x': 
			vs[i] = 10;
			break;
		case 'l': 
			vs[i] = 50;
			break;
		case 'c': 
			vs[i] = 100;
			break;
		case 'd': 
			vs[i] = 500;
			break;
		case 'm': 
			vs[i] = 1000;
			break;
		default:
			break;
		}
		l++;
	}

	// Wert berechnen und in Variable sum ablegen
    sum = 0;
    for(int i = 0; i < l; i++)
    {
        // Abbruch, wenn mehr als 4 identische Werte hintereinander kommen
        if(i >= 4 && vs[i] == vs[i-1] && vs[i-1] == vs[i-2] &&
           vs[i-2] == vs[i-3] && vs[i-3] == vs[i-4] ) return -1;

        sum += vs[i];
        if(i > 0 && (vs[i-1] < vs[i]))
        {
            // Abzieh-Fälle prüfen (IV, IX, XL, XC, CD, CM)
            if( (vs[i-1] == 1 && (vs[i] == 5 || vs[i] == 10) ) ||
                (vs[i-1] == 10 && (vs[i] == 50 || vs[i] == 100) ) ||
                (vs[i-1] == 100 && (vs[i] == 500 || vs[i] == 1000) ) )

                sum -= 2 * vs[i-1]; // zuviel addiertes 2x subtrahieren

            else return -1;
        }
    }

	printf("Der Wert ist %d.\n", sum);
} // main
