/*
11) Escribir un programa que invierta los dígitos de un número positivo entero (sugerencia: usar
operadores módulo, %, y división, /, para obtener los dígitos de a uno por vez).
*/


#include <stdio.h>

int main (void){

    int N, a;
    int st; 

    printf("Ingrese un numero entero positivo:\n");
    if(!(st = scanf("%i", &N)) || N < 0){
        fprintf(stderr,"%s","ERROR DE INGRESO DE DATO");
        return 1;
    }
    
    printf("El numero invertido es: ");

    while (N > 0){
        a = N%10; 
        N = N/10;

        printf("%i", a);
    }
    return 0;

}

