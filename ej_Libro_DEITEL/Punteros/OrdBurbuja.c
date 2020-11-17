/* Figura 7.15 
Este programa coloca valores dentro de un arreglo, ordena los valores en orden ascendente, e imprime los resuldatos del arreglo.
*/

#include <stdio.h>
#define TAMANIO 10


void ordenaMBurbuja(int *const arreglo, const int tamanio);

int main(){

    int a [TAMANIO] = {2, 6, 44, 8, 1, 15, 2, 9, 23, 14};

    int i; /*Contador*/
    
    printf("Elementos de datos en el orden original\n");

    /* Ciclo a traves del arreglo a  */
    for (i = 0; i < TAMANIO; i++){
        printf("%4d", a[i]);
    }

    ordenaMBurbuja(a, TAMANIO);

    printf("\nElementos de datos en orden ascendente\n");

    /* Cliclo a traves del arreglo a */
    for (i = 0; i < TAMANIO; i++){
        printf("%4d", a[i]);
    }

    printf("\n");

    return 0; 
}

/* ordena un arreglo de enteros mediante el algoritmo de la burbuja */
void ordenaMBurbuja (int * const arreglo, const int tamanio){
    
    void intercambia(int *ptrElemento1, int *ptrElemento2);
    int pasada; /* contador de pasadas*/
    int j; /* contador de comparaciones */

    /* ciclo para controlar las pasadas */
    for(pasada = 0; pasada < tamanio-1; pasada++ ){

        /* Cliclo para controlar las comparaciones durante cada pasada */
        for ( j = 0; j < tamanio-1; j++){
        
            /* Intercambia los elementos adyacentes, si no estan en orden */
            if (arreglo[j] > arreglo[j+1]){
                intercambia(&arreglo[j], &arreglo[j +1]);
            }
            
        }
        

    }
}

/* intercambia los valores en las ubicaciones de memoria a los cuales apunta ptrElemto1 y ptrElemto2 */

void intercambia (int *ptrElemento1, int *ptrElemento2){
    
    int almacena = *ptrElemento1;
    *ptrElemento1 = *ptrElemento2;
    *ptrElemento2 = almacena;
}












    


