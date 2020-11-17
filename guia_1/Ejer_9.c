/*
9) Escribir un programa que lea un número entero positivo e imprima por stdout los números naturales impares menores que él.*/

#include <stdio.h>

int main (void){

int N, N_Impares;
int st, i;

printf("Ingrese un numero entero positivo: \n");
if(!(st = scanf("%i", &N))){
    fprintf(stderr, "%s", "ERROR DE INGRESO DE DATO");
    return 1;
}

if(N > 0){

printf("Los numero naturales impares menores que [%i] son:\n", N);

        for (i = 0; i < N ; i++){
            if (i%2 != 0){
                N_Impares = i;
                printf("%i\n", N_Impares);
            }
        }
    }else{
        printf("Numero invalido.\n");
    }
    return 0;

}
