/*
3:
Escribir un fragmento de código que inicialice un arreglo de caracteres con una cadena cualquiera y la imprima por el flujo de salida estándar.
*/


#include <stdio.h>
#include <string.h>


#define MAX_STR 100

int main(void){
    char string[MAX_STR] = "Hola como estas?";

    printf("string 2: %s\t\n", string);


    return 0;
}