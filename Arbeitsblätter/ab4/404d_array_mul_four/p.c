#include <stdio.h>
#include <string.h>

void array_mul_four(int length, int a[])
{
    for(int i = 0; i < length;i++){
        a[i]*=4;
    }
}

int main()
{
    int a[100];
    int i;
    int l;

    for(i = 0; i < 100; i++){
        printf("Zahl: ");
        scanf("%i",(a+i));

        if(*(a+i)==0) break;
    }

    array_mul_four(i, a);

    l = i;
    for(int i = 0; i < l; i++){
        printf("Zahl: %i\n", *(a+i));
    }



















}
