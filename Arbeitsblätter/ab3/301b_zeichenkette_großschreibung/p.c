#include <stdio.h>

int main()
{
    char str[24] = "Heute ist ein guter Tag!";
    
    for(int i = 0; i < 24; i++){
        if (str[i] <= 0x7A && str[i] >= 0x61){
            printf("%c", (str[i]-32));
        } else {
            printf("%c", str[i]);
        }
    }

}