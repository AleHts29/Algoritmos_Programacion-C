/*
15:
Escribir un programa que lea de stdin una cadena de caracteres que comience con espacios en blanco y
los elimine desplazando los caracteres útiles hacia la izquierda. (operación left-trim).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USM_MSG_INPUT_TEXT "Ingrese un texto que inicie con espacion en blaco"
#define MAX_STR 100


int main (void){
    char str2[MAX_STR];

    size_t i, j = 0;


    puts(USM_MSG_INPUT_TEXT);
    fgets(str2, sizeof(str2) + 2, stdin);
    
    while(str2[j] == ' ')
        j++;

    for (i = 0; str2[j] != '\0'; i++){
            str2[i] = str2[j];
            j++;
        }
    str2[i] = '\0';

    printf("left-trim:%s\n", str2);
        
    return EXIT_SUCCESS;
}
