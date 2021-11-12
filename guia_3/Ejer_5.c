
/* Escribir un programa que calcule la logitud de una cadena (equivalente a la funcion strlen()) */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR 100

int main (void){
    char str1[MAX_STR] = "Hola Mundo";
    size_t len_func = 0, len_manual = 0;

    len_func = strlen(str1);
    printf("Longitud de la cadena usando la funcion 'strlen': %lu\n", len_func);

    while (str1[len_manual] != '\0'){
        len_manual++;
    }
    printf("Longitud de la cadena calculada de forma manual: %lu\n", len_manual);


    return EXIT_SUCCESS;
}
