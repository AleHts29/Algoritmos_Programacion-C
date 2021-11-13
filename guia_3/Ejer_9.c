/*
9) Escribir un programa que dadas dos cadenas de caracteres, compare en forma lexicográfica los primeros "n" caracteres y devuelva un valor positivo, cero o negativo, según corresponda (equivalente a la función de biblioteca strncmp(), encabezado <string.h>).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR 100
#define MAX_NUMBER_TO_COMPARED 11

int main (void){
    char str1[MAX_STR] = "Hello Word";
    char str2[MAX_STR] = "Hello World";

    size_t i;
    int retorno, retorno2 = 0;

    retorno = strncmp(str1, str2, MAX_NUMBER_TO_COMPARED);
    printf("Uso de strcmp(): %d\n", retorno);


    for(i = 0; i <= MAX_NUMBER_TO_COMPARED ; i++){
        /* Devuelve un numero >0 si el primer caracter No coincidente en str1 es mayor (en ASCII) que el de str2 */
        if(str1[i] > str2[i]){
            retorno2 = str1[i] - str2[i];
            printf("Lexicograficamente str1 es mayor a str2 --> Valor de retorno: %i\n", retorno2);
            return 0;
        }

        /* Devuelve un numero <0 si el primer caracter No coincidente en str1 es menor (en ASCII) que el de str2 */
        if(str1[i] < str2[i]){
            retorno2 = str1[i] - str2[i];
            printf("Lexicograficamente str1 es menor a str2 --> Valor de retorno: %i\n", retorno2);
            return 0;
        }
    }
    printf("Lexicograficamente str1 es igual a str2 --> Valor de retorno: %i\n", retorno2);
        
    return EXIT_SUCCESS;
}
