/* Busqueda lineal en un arreglo */

#include <stdio.h>
#define TAMANIO 100

/* Prototipo de funcion */
int busquedaLineal ( const int arreglo[], int llave, int tamanio );

int main (void){
    int a[TAMANIO];
    int x;
    int llaveBusqueda; /* Valor para localizr en el arreglo */
    int elemento; /* Variable para almacenar la ubicacion llaveBusqueda 0 - 1 */

    /* Crea los datos */
    for ( x = 0; x < TAMANIO; x++ ){
        a[x] = 2 * x;
    }

    printf ("Introduzca la llave de busqueda: \n");
    scanf ("%d", &llaveBusqueda);

    /* intenta localizar llaveBusqueda en el arreglo a */
    elemento = busquedaLineal (a, llaveBusqueda, TAMANIO);

    /* despliega los resultados */
    if ( elemento != -1 ){
        printf ( "Encontre el valor en el elemento %d\n", elemento );
    }
    else {
        printf("Valor no encontrado\n");
    }
    return 0;
}

int busquedaLineal (const int arreglo[], int llave, int tamanio){
    int n;
    for(n = 0; n < TAMANIO; ++n ){
        if ( arreglo[n] == llave ){
            return n;
        }
    }
    return -1;
}