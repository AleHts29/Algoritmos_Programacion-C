#include <string.h>
#include <stdlib.h>
#include "lista.h"


Nodo* CrearNodo(Libro* libro){
    Nodo* nodo = (Nodo *)malloc(sizeof (Nodo));
    strncpy(nodo->libro.titulo, libro->titulo, 50);
    strncpy(nodo->libro.autor, libro->autor, 50);
    strncpy(nodo->libro.isbn, libro->isbn, 13);
    nodo->siguiente = NULL;
    return nodo;
}

void DestruirNodo(Nodo* nodo){
    free(nodo);
}


void InsertarPrincipio(Lista* lista, Libro* libro){
    Nodo* nodo = CrearNodo(libro);
    nodo->siguiente = lista->cabeza;
    lista->cabeza = nodo;
    lista->longitud++;
}

void InsertarFinal(Lista* lista, Libro* libro){
    Nodo* nodo = CrearNodo(libro);
    if(lista->cabeza == NULL){
        lista->cabeza = nodo;
    }
    else{
        Nodo* puntero = lista->cabeza;
        while(puntero->siguiente){
            puntero = puntero->siguiente;
        }
        puntero->siguiente = nodo;
    }
    lista->longitud++;
}

void InsertasDespues(int n, Lista* lista, Libro* libro){
    Nodo* nodo = CrearNodo(libro);
    if(lista->cabeza == NULL){
        lista->cabeza = nodo;
    }
    else{
        Nodo* puntero = lista->cabeza;
        int posicion = 0; 
        while(posicion < n && puntero->siguiente){
            puntero = puntero->siguiente;
            posicion++;
        }
        nodo->siguiente = puntero->siguiente;
        puntero->siguiente = nodo;
    }
    lista->longitud++;
}

/*Obtenr un libro*/
Libro* Obtener(int n, Lista* lista){
    if (lista->cabeza == NULL){
        return NULL; 
    }
    else{
        Nodo* puntero = lista->cabeza;
        int posicion = 0; 
        while(posicion < n && puntero->siguiente){
            puntero = puntero->siguiente;
            posicion++;
        }
        if (posicion != n){
            return NULL;
        }
        else{
            return &puntero->libro;
        }
    }
}

int Contar (Lista* lista){
    return lista->longitud;
}

void EliminarPrincipio(Lista* lista){
    if(lista->cabeza){
        Nodo* eliminado = lista->cabeza;
        lista->cabeza = lista->cabeza->siguiente;
        DestruirNodo(eliminado);
        lista->longitud--;
    }
}

void EliminarUltimo(Lista* lista){
    if(lista->cabeza){
        if(lista->cabeza->siguiente){
            Nodo* puntero = lista->cabeza;
            while(puntero->siguiente->siguiente){
                puntero = puntero->siguiente;
            }
            Nodo* eliminado = puntero->siguiente;
            puntero->siguiente = NULL;
            DestruirNodo(eliminado);
            lista->longitud--;
        }
        else{
            Nodo* elimando = lista->cabeza;
            lista->cabeza = NULL;
            DestruirNodo(elimando);
            lista->longitud--;
        }
    }
}


void EliminarElemento(Lista* lista){
    if(lista->cabeza){
        Nodo* puntero = lista->cabeza;
    }
}