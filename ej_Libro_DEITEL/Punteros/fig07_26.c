/*Programa de ordenamiento multiproposito que utiliza apuntadores a funciones*/

#include <stdio.h>
#define TAMANIO 10

/*Prototipos*/
void burbuja(int trabajo[], const int tamanio, int(*compara)(int a, int b));
int ascendente(int a, int b);
int descendente(int a, int b);

int main (void){
    int orden; /* 1 para el orden ascendente o 2 para el orden desendente */
    int contador; 

    int a[TAMANIO] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    printf("Introduzca 1 para ordenar en forma ascendente.\n"
            "Introduzca 2 para ordenar en forma descendente.\n ");
    scanf("%d", &orden);

    printf("\nElementos de datos en el orden original\n");
    /*Muestra el arreglo original*/
    for(contador = 0; contador < TAMANIO; contador++){
        printf("%5d", a[contador]);
    }

        /*Clasifica el arreglo en orden ascendente; pasa la funcion ascendente como un argumento para especificar el orden ascendente*/
        if(orden == 1){
            burbuja(a, TAMANIO, ascendente);
            printf("\nElementos de datos en orden ascendente\n");
        }
        else{/*pasa la funcion descendente*/
            burbuja(a, TAMANIO, descendente);
            printf("\nElementos de datos en orden descendente\n");
        }

    /*Muestra el arreglo ordena*/
    for(contador = 0; contador < TAMANIO; contador++){
        printf("%5d",a[contador]);
    }

    printf("\n");

    return 0; 
}

/*Ordenamiento burbuja multiproposito; el parametro compara es un apuntador a la funcion de comparacion que determina el tipo de ordenamiento */
void burbuja(int trabajo[], const int tamanio, int(*compara)(int a, int b)){
    int pasada;
    int cuenta; /*cont de comparacion*/

    void intercambia(int *ptrElemento1, int *ptrElemento2); /*Prototipo*/

    for (pasada = 1; pasada < tamanio; pasada++){
        /*Ciclo para comparar el numero de comparaciones por pasada*/
        for(cuenta = 0; cuenta < tamanio -1; cuenta++ ){
            /*Si los elementos adyacentes no se encuentran en orden, los intercambia*/
            if((*compara)(trabajo[cuenta], trabajo[cuenta +1])){ 
                intercambia(&trabajo[cuenta], &trabajo[cuenta +1]);
            }
        }
    }


}

/*Intercambia los valores en las ubicaciones de memoria a las que apunta ptrElemento1 y ptrElemento2*/
void intercambia(int *ptrElemento1, int *ptrElemento2){
    int almacena;

    almacena = *ptrElemento1;
    *ptrElemento1 = *ptrElemento2;
    *ptrElemento2 = almacena;
}

/*determina si los elementos estan en desorden para un ordenamiento ascendente*/
int ascendente(int a, int b){
    return b < a; /*intercambia si b es menor que a*/
}

/*determina si los elementos estan en desorden para un ordenamiento descendente*/
int descendente(int a, int b){
    return b > a; /*intercambia si b es mayor que a*/
}
