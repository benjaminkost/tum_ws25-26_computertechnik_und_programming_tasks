# include <stdio.h>
# include <math.h>

void berechnenKugelVolumen(){
    printf("Geben Sie als Radius 0 ein, um das Programm zu beenden.\n");

    const double PI = 3.14159;	// Kreiskonstante pi
	double r = 0.0;				// Radius der Kugel
	double A = 0.0;				// Oberfläche der Kugel
	double V;

    do{
        /* Radius vom Benutzer einlesen */
        printf("Kugelradius: ");
        scanf("%lf", &r);

        if(r == 0){
            break;
        }

        /* Berechnungen durchführen */
        A = 4.0 * PI * r * r;
        V = 4. / 3. * PI * r * r * r;

        /* Ausgabe des Ergebnisses */
        printf("Radius: %.2lf\n", r);
        printf("Oberflaeche: %.2lf\n", A);
        printf("Volumen: %.2lf\n", V);
    }while(r!=0);
}

void forStattDoWhile(){
    char antwort = 'x';

	for(int i = 0; antwort != 'd' && antwort != 'D'; i++){
		printf("\n");
		printf("Menue\n");

		printf("a)  Mensa Innenstadt\n");
		printf("b)  Steinheil\n");
		printf("c)  Thai Magie\n");
		printf("d)  Beenden\n");
		printf("\n");

		printf("Bitte waehlen Sie eine Aktion aus: ");
		scanf(" %c", &antwort);

		if (antwort == 'a' || antwort == 'A') 
		{
			printf("Es gibt Krautspaetzle. Verdauungsschlaf am Nachmittag.\n");
		}
		else if (antwort == 'b' || antwort == 'B')
		{
			printf("Grosses Schnitzel mit Bratkartoffeln.\n");
		}
		else if (antwort == 'c' || antwort == 'C')
		{
			printf("Menue 503. Es lebe die Mikrowelle.\n");
		}


	}
}

void test_while(){
    char antwort = 'x';

	while (antwort != 'd' && antwort != 'D')
	{
		printf("\n");
		printf("Menue\n");

		printf("a)  Mensa Innenstadt\n");
		printf("b)  Steinheil\n");
		printf("c)  Thai Magie\n");
		printf("d)  Beenden\n");
		printf("\n");

		printf("Bitte waehlen Sie eine Aktion aus: ");
		scanf(" %c", &antwort);

		if (antwort == 'a' || antwort == 'A') 
		{
			printf("Es gibt Krautspaetzle. Verdauungsschlaf am Nachmittag.\n");
		}
		else if (antwort == 'b' || antwort == 'B')
		{
			printf("Grosses Schnitzel mit Bratkartoffeln.\n");
		}
		else if (antwort == 'c' || antwort == 'C')
		{
			printf("Menue 503. Es lebe die Mikrowelle.\n");
		}
	}	
}

int isPrime(int number){
    if (number < 2){
        return 0;
    }
    
    if(number == 2){
        return 1;
    }

    for (int i = 2; i <= number/2;i++){
        if(number % i == 0){
            return 0;
        }
    }

    return 1;
}

void calculate_primes(int *zielarray, int endValue){
    int index = 0;

    if(endValue >= 2){
        zielarray[index] = 2;
        index++;
    }

    for (int i = 3; i <= endValue;i++){
        int prime = isPrime(i);
        if (prime){
            zielarray[index] = i;
            index++;
        }
    }
}

void moving_bits(){
    char a = 'a';
    char newA = a << 1;
    
    printf("%i", newA);
}

void print_binary_number_reverse(int dezimalZahl, int bits){
    for(int i = 0; i < bits; i++){
    int neuerWert = dezimalZahl >> i;

    if(neuerWert % 2 == 0){ // Oder: neuerWert & 1
        printf("0");
    } else {
        printf("1");
    }
}
}

void print_binary_number(int dezimalZahl, int bits){
    for(int i = bits-1; i >= 0; i--){
        int neuerWert = dezimalZahl >> i;

        if(neuerWert % 2 == 0){ // Oder: neuerWert & 1
            printf("0");
        } else {
            printf("1");
        }
    }
}

void bitweise_operationen(){

    int dezimalZahl;

    printf("Geben Sie bitte eine Dezimalzahl ein: ");
    scanf("%d", &dezimalZahl);

    printf("Die zugehörige Binaerzahl lautet: ");
    print_binary_number(dezimalZahl, 4);
}

void reverse_for_loop(){
    int i = 0;
	int benutzerZahl = 0;

	printf("Ganze Zahl: ");
	scanf("%i", &benutzerZahl);

	for (i = benutzerZahl-1; i >= 0; i--)	
	{
		printf(" %2i", i);
	}

	printf("\n");
}

void train_for_loop(){
 	int i = 0;
	int benutzerZahl = 0;


	printf("Ganze Zahl: ");
	scanf("%i", &benutzerZahl);

	for (i = benutzerZahl; i <= 33; i++)	
	{
		printf(" %2i", i);
	}

	printf("\n");
}

void ist_schaltjahr(){
    int j = 0;				// Vom Benutzer eingegebene Jahreszahl

	int istSchaltjahr = 0;	// 1, falls jahr ein Schaltjahr ist
							// 0, wenn jahr kein Schaltjahr ist


	printf("Jahreszahl: ");
	scanf("%i", &j);

	// Berechnen Sie hier, ob jahr ein Schaltjahr ist
    if (j == 0){
        istSchaltjahr = 0;
    } else if ((j % 400) == 0){
        istSchaltjahr = 1;
    } else if ((j % 100) == 0){
        istSchaltjahr = 0;
    } else if ((j % 4) == 0){
        istSchaltjahr = 1;
    } else {
        istSchaltjahr = 0;
    }
		
	// Ausgabe			
	if (istSchaltjahr)
		printf("%i war ein Schaltjahr.\n", j);
	else
		printf("%i war kein Schaltjahr.\n", j);
	
}

void test_modulo(){
    int a = 3;
    long b = 1L;
    double c = 0.25;
    char d = 'd';

    int calculation = b % a;

    printf("%i", calculation);
}

void quadratic_equation(){
    double a;
    double b;
    double c;

    printf("a: ");
    scanf("%lf", &a);

    printf("b: ");
    scanf("%lf", &b);

    printf("c: ");
    scanf("%lf", &c);

    if (b*b-4*a*c < 0){
        printf("Es gibt keine reelle Loesung.");
        return;
    }

    double resultOne = (-b+sqrt(b*b-4*a*c))/(2*a);
    double resultTwo = (-b-sqrt(b*b-4*a*c))/(2*a);

    if (resultOne == resultTwo){
        printf("Die doppelte Nullstelle lautet %.2lf.", resultOne);
        return;
    } else{
        printf("Die beiden reellen Loesungen sind %.2lf und %.2lf.", resultOne, resultTwo);
        return;
    }
}

void test_switch(){
    char zahl = 'a';

    switch(zahl){
        case 'a': 
            printf("success!");
            break;
        default:
            printf("DEFAULT!");
            break;
    }
}

void roman_numbers_with_switch_case(){
    char zeichen = 0;

	printf("Einstellige roemische Ziffer: ");
	scanf(" %c", &zeichen);
	
	switch(zeichen){
        case 'I': 
            printf("Der Wert betraegt 1.\n");
            break;
        case 'V': 
            printf("Der Wert betraegt 5.\n");
            break;
        case 'X': 
            printf("Der Wert betraegt 10.\n");
            break;
        case 'L': 
            printf("Der Wert betraegt 50.\n");
            break;
        case 'C': 
            printf("Der Wert betraegt 100.\n");
            break;
        case 'D': 
            printf("Der Wert betraegt 500.\n");
            break;
        case 'M':   
            printf("Der Wert betraegt 1000.\n");
            break;
        default: 
            printf("Es wurde keine roemische Ziffer eingegeben.\n");
            break;
    }
}

void roman_numbers(){
	char zeichen = 0;


	printf("Einstellige roemische Ziffer: ");
	scanf(" %c", &zeichen);
	
	
	if (zeichen == 'I')
		printf("Der Wert betraegt 1.\n");

	else if (zeichen == 'V') 
		printf("Der Wert betraegt 5.\n");

	else if (zeichen == 'X')
		printf("Der Wert betraegt 10.\n");

	else if (zeichen == 'L')
		printf("Der Wert betraegt 50.\n");

	else if (zeichen == 'C')
		printf("Der Wert betraegt 100.\n");

	else if (zeichen == 'D')
		printf("Der Wert betraegt 500.\n");

	else if (zeichen == 'M')
		printf("Der Wert betraegt 1000.\n");

	else
		printf("Es wurde keine roemische Ziffer eingegeben.\n");
}

void loops(){
    int zahl = 0;

	printf("Bitte geben Sie eine ganze Zahl ein: ");
	scanf("%i", &zahl);

	if (zahl > 0)
		printf("Sie haben eine Zahl groesser Null eingegeben.\n");
    else if (zahl == 0)
        printf("Sie haben Null eingegeben.");
	else
		printf("Sie haben eine Zahl kleiner Null eingegeben.\n");
}

int main(){
    berechnenKugelVolumen();
}