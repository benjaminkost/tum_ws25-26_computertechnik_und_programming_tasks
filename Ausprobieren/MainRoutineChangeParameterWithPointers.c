#include <stdio.h>

int main(int argc, char * argv[])
{
    char *a = argv[2];

    char b[] = "ETEST";
    *a=*"agg";
    // for(int i = 0;*(a+i);i++){
    //     printf("Adresse: %p\n",a+i);
    //     printf("Wert: %c\n", *(a+i));
    //     printf("Wert b: %c\n", b[i]);
    //     *(a+i) = b[i];
    //     printf("AFTER Adresse: %p\n",a+i);
    //     printf("AFTER Wert: %c\n", *(a+i));
    // }

    printf("Wert: %c\n", *a);
    
    //*a = "Hello";
    for(int i = argc-1; i > 0;i--){
        printf("argv[%i]: %s\n", i, argv[i]);
    }
}