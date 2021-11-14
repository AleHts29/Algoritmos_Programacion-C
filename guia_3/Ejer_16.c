/*
16:
Escribir un programa que lea de stdin una cadena de caracteres que finalice con espacios en blanco y
los elimine desplazando los caracteres útiles hacia la izquierda. (operación right-trim).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USM_MSG_INPUT_TEXT "Ingrese un texto que finalice con espacion en blaco"
#define MAX_STR 100



int main (void){
    char str2[MAX_STR];
    size_t len = 0;

    puts(USM_MSG_INPUT_TEXT);
    /* fgets(), agrega '\n''\0' si tiene espacio suficiente, de lo contrario solo agrega '\0' */
    fgets(str2, sizeof(str2) + 2, stdin);
    
    len = strlen(str2);
    printf("Tamaño de cadena con espacios en blanco a la derecha: %lu\n", len);

    /* Me posisiono en len-1 ya que en len se encuentra el '\0' */
    while((str2[len-1] == ' ') || (str2[len-1]=='\n'))
        len--;

    str2[len] = '\0';
    len = strlen(str2);

    printf("Right-trim:%s.\nTamaño de cadena sin espacios en blanco: %lu", str2,len);
        
    return EXIT_SUCCESS;
}
