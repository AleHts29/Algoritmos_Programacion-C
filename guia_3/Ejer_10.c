/*
9) Escribir un programa que dada una cadena de caracteres y un arreglo de caracteres con espacio suficiente, copie los primeros "n" caracteres de la cadena sobre el arreglo, sin terminar la cadena con el carácter nulo. (equivalente a la función de biblioteca strncpy(), encabezado <string.h>).
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR 100
#define MAX_NUMBER_TO_COPY 7

int main (void){
    char str1[MAX_STR] = "Hello World";
    char str2[MAX_STR];
    char str3[MAX_STR];

    size_t i;

    strncpy(str3, str1, MAX_NUMBER_TO_COPY);
    printf("Uso de strncpy(): %s\n", str3);


    for(i=0; i < MAX_NUMBER_TO_COPY; i++)
        str2[i]= str1[i];
    
    str2[i] = '\0';

    printf("Copia de n carascteres de forma manual: %s\n", str2);
        
    return EXIT_SUCCESS;
}
