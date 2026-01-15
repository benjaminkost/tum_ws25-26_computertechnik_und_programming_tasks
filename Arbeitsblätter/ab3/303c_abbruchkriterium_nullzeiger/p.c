#include <stdio.h>

int main(int argc, char * argv[])
{
    for(int i = 1; argv[i]; i++){
        printf("argv[%i]: %s\n", i, argv[i]);
    }
}