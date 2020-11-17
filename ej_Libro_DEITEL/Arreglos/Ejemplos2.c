/*F 6.11
Arreglos estaticos que se inicializan a cero*/

#include <stdio.h>
#include <stdlib.h>

void iniciaArregloEstatico (void); /*Funcion*/
void iniciaArregloAutomatico (void); /*Funcion*/


int main (){
    printf("Primera llamada a cada funcion: \n");
    iniciaArregloEstatico();
    iniciaArregloAutomatico();

    printf("\n\n\nSegunda llamada a cada funcion: \n");
    iniciaArregloEstatico();
    iniciaArregloAutomatico();

    return EXIT_SUCCESS;
}

/*Funcion para desmostrar un arreglo estatico local*/
void iniciaArregloEstatico( void ){
    /*Inicializa los elementos a 0 la primera vez que se llama a la funcion*/
    static int arreglo1[3];
    int i;

    printf("\nValores al entrar a iniciaArregloEstatico:\n ");

    /* muestra el contenido del arreglo */
    for( i = 0; i <= 2; i++){
        printf( "arreglo1[%d] = %d ", i, arreglo1[i]);
    }
    printf( "\nValores al salir de iniciaArregloEstatico:\n" );

    /* modifica y muestra el contenido de arreglo1 */
    for ( i = 0; i <= 2; i++){
        printf( "arreglo1[%d] = %d ", i, arreglo1[i] += 5);
    }
}


/* funcion para demostrar un aarglo local automatico */
void iniciaArregloAutomatico(void){
    /*Inicializa los elementos cada vez que se llama a la funcion*/
    int arreglo2[3] = {1, 2, 3};
    int i;

    printf("\n\nValores al entrar a iniciaArregloAutomatico: \n");

    /*muestra el contenido del arreglo2*/
    for (i = 0; i <= 2; i++){
        printf("arreglo2[%d] = %d ", i, arreglo2[i]);
    }
    printf("\nValores al salir de iniciaArregloAutomatico: \n");

    /*modifica y muestra el contenido de arreglo2*/
    for( i = 0; i <= 2; i++){
        printf("arreglo2[%d] = %d", i, arreglo2[i] += 5);
    }
}
