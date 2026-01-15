#include <stdio.h>		// für printf
#include <stdlib.h>		// für atoi


int main(int argc, char * argv[])
{
    int alleZeichenAlsSumme = 0;
    for(int i = 0; argv[i];i++){
        alleZeichenAlsSumme += atoi(argv[i]);
    }

    printf("Summe: %3d", alleZeichenAlsSumme);
}