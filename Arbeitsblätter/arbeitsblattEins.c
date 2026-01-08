# include <stdio.h>

void convert_big_character_to_small_character(){
    char inputCharacter;
    printf("Bitte geben Sie einen Grossbuchstaben ein: ");
    scanf("%c\n",&inputCharacter);
    
    char smallLetterCharacter = (int)inputCharacter + 32;
    
    printf("%c",smallLetterCharacter);
}

void calculate_volumne_of_ball(){
    	const double PI = 3.14159;	// Kreiskonstante pi
        double r = 0.0;				// Radius der Kugel
        double A = 0.0;				// Oberfläche der Kugel

        // Radius vom Benutzer einlesen
        printf("Kugelradius: ");
        scanf("%lf", &r);

        // Oberfläche berechnen
        A = 4.0 * PI * r * r;

        // Hier Code zur Volumenberechnung angeben
        double V = 4.0/3*r*r*r*PI;

        // Ausgabe des Ergebnisses
        printf("Radius: %.2lf\n", r);
        printf("Oberflaeche: %.2lf\n", A);

        // hier Code für Ausgabe des Volumens angeben
        printf("Volumen: %.2lf", V);
}

void test_scanf(){
    double test_value;
    printf("Eingabe: ");
    scanf("%lf", &test_value);
    printf("Eingebener Wert ist: %lf", test_value);
}

void check_type(){
    short test = -2000;
    printf("This value %.2lf is type float\n", -2.01);
    printf("This value %hd", test);
}

void platzhalter_ausgaben(){
    printf("%i\n", 42);
    printf("%.2lf\n",14.21f);
    printf("%c", 0x041);
}

void platzhalter(){
    printf("Das ist eine ganze Zahl: %i\n", 0B0100);
    printf("Das ist eine Gleitkommazahl: %lf\n", 10.7);
    printf("%i\n", 0x041);
    printf("%i", 0B1000001);
}

void steuerzeichen(){
    printf("\\");
}

void textausgabe_mit_printf(){
    printf("Wir programmieren in \'C\'.\n");
    printf("  a[0] = 1; b = 2; x = 3 * a[0] + b\n");
    printf("Sie sagte: \"Ich mag keine Hunde!\"\n");
    printf("Der Slash (\"/\") und der Backslash (\"\\\") werden manchmal verwechselt\n");
}

int main() {
    convert_big_character_to_small_character();
}