/*
11) Escribir un programa que invierta los dígitos de un número positivo entero (sugerencia: usar
operadores módulo, %, y división, /, para obtener los dígitos de a uno por vez).
*/


#include <stdio.h>
#include <stdlib.h>

#define MSG_INVALID_DATA "ERROR: Dato ingresado no valido"

int main (void){
    size_t st;
    int num = 0, auxRest = 0;

    if(!(st = scanf("%i", &num))){
        fprintf(stderr,"%s", MSG_INVALID_DATA);
        return 1;
    }

auxRest = 0;
    while (num != 0){
        auxRest = auxRest*10 + num % 10;
        num = num / 10;     
    }

    printf("%i", auxRest);
    
    return 0;

}

