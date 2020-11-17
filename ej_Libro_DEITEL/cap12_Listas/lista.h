

#ifndef lista_h
#define lista_h

#include <stdio.h>
#include "libros.h"

typedef struct Nodo{
    Libro libro;
    struct Nodo* siguiente;
}Nodo;

typedef struct Lista{
    Nodo* cabeza;
    int longitud; /*Me indica cuantos elementos tengo en mi lista*/
}Lista;

#endif