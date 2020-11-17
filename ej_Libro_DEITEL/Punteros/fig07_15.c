/*Este programa coloca valores dentro de un arreglo, ordena los valores en orden ascendente, e imprime los resultados del arreglo*/

#include <stdio.h>
#define TAMANIO 10

void ordenaMBurbuja(int *const arreglo, const int tamnio);

int main(void){
    int a[TAMANIO] = {2, 6, 4, 7, 39, 8, 1, 4, 34, 2};
    int i;

    printf("Elementos de datos en el orden original\n");
    /*Cilco a traves del arreglo*/
    for(i = 0; i < TAMANIO; i++){
        printf("%4d", a[i]);
    }

    ordenaMBurbuja(a, TAMANIO);

    printf("\nElementos de datos en orden ascendente\n");
    /*Cilco a traves del arreglo*/
    for(i = 0; i < TAMANIO; i++){
        printf("%4d", a[i]);
    }
    printf("\n");
    return 0;
}

/* algoritmo de ordenamiento Burbuja */
void ordenaMBurbuja(int *const arreglo, const int tamanio){
    
    void intercambia(int *ptrElemento1, int *ptrElemento2); /* prototipo funcion */
    int pasada;
    int j;

    /*controla las pasadas*/
    for(pasada = 0; pasada < TAMANIO; pasada++){

        /*Controla las comparaciones durante cada pasada*/
        for(j = 0; j < tamanio -1; j++){
            
            /*intercambia los elementos adyacentes, si no estan en orden*/
            if(arreglo[j] > arreglo[j +1]){
                intercambia(&arreglo[j], &arreglo[j +1]);
            }
        }
        
    }       
}

/*intercambia los valores en las ubicaciones de memoria a a los cuales apunta prtElemento1 y prtElemento2*/
void intercambia (int *ptrElemento1, int *ptrElemento2){
    int almacena = *ptrElemento1;
    *ptrElemento1 = *ptrElemento2;
    *ptrElemento2 = almacena;
}
