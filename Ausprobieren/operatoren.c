# include <stdio.h>



int main(){
    int wert = 0x06;
    int vergleicher = 6;

    int result = wert & vergleicher;

    if (result){
        printf("%i", result);
    }
    
}