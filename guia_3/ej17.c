#include <stdio.h>
#include <string.h>

int main (void){
    char s[] = "hola como estas como te vas a ir";
    char t[] = "como";
    char *x;

    x = strstr(s,t);

    if (x == NULL){
        printf("No encontro s en t \n");
        return 0;
    }

    /*putchar(*x);*/
    putchar('\0');
    puts(x);

    return 0;
}