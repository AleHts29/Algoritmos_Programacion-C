/*
17) Escribir un programa que reciba dos cadenas de caracteres denominadas s1 y s2 respectivamente, verifique la existencia de la cadena s2 como subcadena integrante de la s1 e imprima el resultado de la búsqueda por stdout (ver función de biblioteca strstr(), encabezado <string.h>).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STR 100

int main (void){
    char str1[MAX_STR] = "Holc, soy la cadena fuentes";
    char str2[MAX_STR] = "cadena";
    char *result;
    size_t i=0, j=0;
    

    int retorno;

    result = strstr(str1, str2);
    printf("Usando la funcion strstr(): %s\n", result);

    /* Funcion mejorada de strstr() - busca str2 dentro de str1 */
    for(i=0; str1[i] != '\0'; i++){

        if(str1[i] == str2[j]){
            /* Se compara si los n caractreres de str2 son iguales a los n caracteres en str1 desde la primer coincidencia son iguales */
            retorno = strncmp(str1 + i, str2, strlen(str2)-1);
            if(retorno != 0){
                i++;
            }
            else{
                printf("str2:'%s', se encuentra dentro de str1.\n", str2);
                return 0;
            }
        }
    }
    printf("str2:'%s' no se encuentra dentro de str1!", str2);
        
    return EXIT_SUCCESS;
}
