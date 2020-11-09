/*
14) El valor aproximado del número de Euler, e, se puede obtener con la siguiente fórmula:
*/


#include <stdio.h>
#define SUM_ERROR 10E-4

int main (void){

    int N = 1; 
    double e = 1;
    double invf = 1;

    while (invf > SUM_ERROR)
    {
        invf /= N;  /*invf = invf /N */
        e += invf; /* e = e +invf */
        N++;
    }

    printf("El valor del error es: %.10f\n", SUM_ERROR);
    printf("El valor de e es: %.10f\n", e);
    printf("El valor de N es: %d\n", N);

    return 0;
    
}
