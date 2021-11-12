/* Escribir un programa que inicialice un arreglo de caracteres con una cadena cualquiera y lo imprima en orden inverso por el flujo de salida estandar */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR 100

int main (void){
    char str1[MAX_STR] = "Hola Mundo";
    char str2[MAX_STR];
    size_t i, j = 0, len;

    len = strlen(str1);
    for (i = len; i > 0; i--  ){
        printf("%lu - %c\n",i -1  ,str1[i - 1]);
        /* Copio caracter por caracter de forma invertida */
        str2[j] = str1 [i-1];
        j++;
    }
    /* Agreo el '\0' al final */
    str2[j] = '\0';
    printf("%s", str2);

    return EXIT_SUCCESS;
}
