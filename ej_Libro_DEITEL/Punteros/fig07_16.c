/*Cuando el operador sizeof se utiliza en un nombre de arreglo., este devuelve el numero de bytes en el arreglo*/

#include <stdio.h>

size_t obtieneTamanio (int *ptr);

int main (){

    int arreglo1[10];
    int A2, arreglo2[] = {1, 2, 3, 3, 5, 22, 9};
    int A;
    int *ptrA;

    A2 = sizeof(arreglo2)/sizeof(int); /*Me dice el numero de elemtos del arreglo2*/

    
    printf("El numero de bytes en arreglo1 es %d"
           "\nEl numero de elementos en arreglo2 es %d"
           "\nEl numero de bytes en A es %d"
           "\nEl numero de bytes en el *prtA es %d" /*Un puntero ocupa siempre 4 o 8 bytes, independiente del tipo de dato que sea*/
            "\nEl numero de bytes devueltos por obtieneTamanio es %d" /*Puntero a un arreglo, por tanto siempre ocupa 4 o 8 bytes*/
            "\nEl numero de bytes de la funcion obtieneTamanio es %d\n", 
            sizeof(arreglo1), A2, sizeof(A), sizeof(ptrA), obtieneTamanio(arreglo1), sizeof(obtieneTamanio));
    
    return 0;
}

size_t obtieneTamanio (int *ptr){
    return sizeof(ptr);
}