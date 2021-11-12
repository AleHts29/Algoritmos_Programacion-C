/*
8) Escribir un programa que dadas dos cadenas de caracteres, realice una comparación lexicográfica entre ellas y devuelva valores positivos, cero y negativos, según el resultado obtenido (equivalente a la función de biblioteca strcmp(), encabezado <string.h>).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR 100

int main (void){
    char str1[MAX_STR] = "Hello World";
    char str2[MAX_STR] = "Hello Worl";

    size_t i;
    int retorno, retorno2 = 0;

    retorno = strcmp(str1, str2);
    printf("Uso de strcmp(): %d\n", retorno);


    for(i = 0; (str1[i] || str2[i]) != '\0'; i++){
        /* Devuelve un numero >0 si el primer caracter No coincidente en str1 es mayor (en ASCII) que el de str2 */
        if(str1[i] > str2[i]){
            retorno2 = str1[i] - str2[i];
            printf("%i", retorno2);
            return 0;
        }

        /* Devuelve un numero <0 si el primer caracter No coincidente en str1 es menor (en ASCII) que el de str2 */
        if(str1[i] < str2[i]){
            retorno2 = str1[i] - str2[i];
            printf("%i", retorno2);
            return 0;
        }
    }
    printf("%i", retorno2);
        
    return EXIT_SUCCESS;
}
