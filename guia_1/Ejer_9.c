/*
9) Escribir un programa que lea un número entero positivo e imprima por stdout los números naturales impares menores que él.*/

#include <stdio.h>
#include <stdlib.h>

#define MSG_WELCOME "Por favor ingrese un numero entero positivo"
#define MSG_INVALID_DATA "ERROR: Dato ingresado no valido"
#define MSG_INVALID_NUMBER "El numero ingresado debe ser mayor a cero"

int main (void){
    size_t st, i;
    int num;

puts(MSG_WELCOME);
    if(!(st = scanf("%i", &num))){
        fprintf(stderr, "%s", MSG_INVALID_DATA );
        return 1;
    }

    if (num > 0){ 
        printf("Los numeros Naturales impares menores que %i son:\n", num);
        for(i = 0; i < num; i++){  
            if( (i % 2) != 0){
                fprintf(stdout,"%lu\n", i);
            }
        }
    }else{
        fprintf(stderr,"%s", MSG_INVALID_NUMBER);
        return 1;
    }
    
    return 0;

}
