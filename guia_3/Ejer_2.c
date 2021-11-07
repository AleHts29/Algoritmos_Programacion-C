/*
2:
Escribir un fragmento de código que determine si una cadena de caracteres está vacía o no, de dos formas distintas. Utilizar el carácter NUL para una de ellas y la función de biblioteca strcmp() para la otra.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

#define MAX_STR 100

int main(void) {

    int i;
    char s[MAX_STR]= "Hola";

    for (i = 0; i < strlen(s); i++){
        printf("%i - %c\n",i ,s[i]);
    }
    printf("tamaño efectivo del aaray: %lu", strlen(s));

    if (s[0]=='\0')
    {
        puts("Candena vacia");
    }

    if(strcmp(s,"")==0)
        puts("Cadena Vacia");

    return 0;
}
