/*Este programa ordena los valores de un arreglo en orden ascendente*/
#include <stdio.h>
#define TAMANIO 10

int main(void){
    int a [TAMANIO] = {2, 3, 4, 8, 10, 12, 89, 68, 45, 37};
    int pasadas;
    int i;
    int almacena; /* Ubicacion tempporal utilizada para el intercambio de elementos*/

    printf("Elementos de datos en el orden original\n");

    /* Muestra el arreglo original */
    for (i = 0; i < TAMANIO; i++ ){
        printf ("%4d", a[i]);
    }

    /* Ordenamiento burbuja */
    /* Ciclo para controlar el numero de pasos */
    for ( pasadas = 1; pasadas < TAMANIO; pasadas++ ){

        /* Ciclo para controlar el numero de comparaciones por pasada */
        for (i = 0; i < TAMANIO -1; i++ ){

            /* Compara los elementos adyacentes y los intercambia si el primer 
            elemento es mayor que el segundo*/
            if (a[i] > a [i+1]){
                almacena = a[i];
                a[i] = a[i+1];
                a[i+1] = almacena;
            }
        }
    }

    printf ( "\nElementos de datos en orden ascendentes\n" );

    /* Muestra el arreglo ordenado */
    for(i = 0; i < TAMANIO; i++){
        printf("%4d", a[i]);
    }

    printf("\n");

    
    return 0;
}

