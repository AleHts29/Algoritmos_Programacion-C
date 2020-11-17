/*Demostracion de un arreglo de apuntdores a funcion*/

#include <stdio.h>

void funcion1(int a);
void funcion2(int b);
void funcion3(int c);

int main (void){
    /*Inicializa el arreglo de 3 apuntadores con funciones que toman un argumento entero y devuelven un void*/
    void (*f[3])(int) = {funcion1, funcion2, funcion3};

    int eleccion; /*variable para almacenar la eleccion del usuario*/

    printf("Introduzca un numero entre 0 y 2, 3 para terminar: ");
    scanf("%d", &eleccion);

    /*procesa la eleccion del usuario*/
    while (eleccion >= 0 && eleccion < 3){
        /*invoca a la funcion en la ubicacion de la eleccion en el arreglo f, y pasa la eleccion como argumento*/
        (*f[eleccion])(eleccion);
        
        printf("Introduzca un numero entre 0 y 2, 3 para terminar: ");
        scanf("%d", &eleccion);
    }

    printf("Termina la ejecucion del programa\n");
    return 0;
}

void funcion1 (int a){
    printf("Usted introdujo %d de manera que invoco a la funcion1\n\n", a);
}

void funcion2 (int b){
    printf("Usted introdujo %d de manera que invoco a la funcion2\n\n", b);
}

void funcion3 (int c){
    printf("Usted introdujo %d de manera que invoco a la funcion3\n\n", c);
}

