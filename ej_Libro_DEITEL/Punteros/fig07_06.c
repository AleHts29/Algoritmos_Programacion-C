/* Eleva al cubo una variable mediante una llamada por valor */

#include <stdio.h>

int cuboPorValor (int n);

int main (void){
    int numero= 5;

    printf("El valor original de numero es %d", numero);

    /*pasa nuemro por valor*/
    numero = cuboPorValor(numero);

    printf("\nEL nuevo valor de numero es %d\n", numero);

    return 0;
}

int cuboPorValor(int n){

    return n*n*n;
}