/*
12:
Escribir un programa que convierta una cadena de caracteres a Mayuscula (equivalente a la función no ANSI strupr()).
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_STR 100

int main (void){
    char str1[MAX_STR] = "HELLO World";
    char str2[MAX_STR];

    size_t i;

    for (i = 0; str1[i] != '\0'; i++)
        str2[i] = toupper(str1[i]);
    str2[i] = '\0';

    printf("Cadena original: %s\n", str1);
    printf("Conviercion a Mayuscula: %s\n", str2);
        
    return EXIT_SUCCESS;
}
