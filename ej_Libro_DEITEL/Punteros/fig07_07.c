/*Eleva al cubo una variable mediante una llamda por referencia*/

#include <stdio.h>

int cuboPorReferencia (int *ptrN);

int main (void){
    int numero = 5;

    printf("El valor original del numero es %d", numero);

    /*Pasa la direccion de numero*/
    cuboPorReferencia(&numero);

    printf("\nEl nuevo valor de numero es %d\n", numero);

    return 0;
}

int cuboPorReferencia (int *ptrN){
    *ptrN = *ptrN * *ptrN * *ptrN;
    return 0;
}