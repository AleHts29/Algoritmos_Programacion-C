/*Operaciones y mantenimiento de una lista*/

#include <stdio.h>
#include <stdlib.h>


/*Estructura autoreferenciada*/
 struct nodoLista_t{
    char dato;
    struct nodoLista_t *ptrSiguiente;
};

typedef enum{
    OK,
    ERROR_NULL_POINTER,
    ERROR_NO_MEMORY,
    ERROR_OUT_OF_RANGE
}status_t;

typedef struct nodoLista_t Node_List;
typedef Node_List *ptrNodoLista;

/*Prototipos*/
status_t insertar(ptrNodoLista *ptrS, char valor);
status_t eliminar(ptrNodoLista *ptrS, char valor);
status_t estaVacia(ptrNodoLista ptrS);
void imprimeLista(ptrNodoLista ptrActual);
void intrucciones(void);

int main(){
    ptrNodoLista ptrInicial = NULL; /*Inicialmente no exiten nodos*/
    int eleccion; 
    char elemento;

    intrucciones(); /*Despliega el menu*/
    printf("> ");
    scanf("%d", &eleccion);

    /*repite mientras el usuario no elija 3*/
    while( eleccion != 3){
        switch (eleccion){

            case 1: 
                printf("Ingresar un caracter: ");
                scanf("\n%c", &elemento );
                insertar(&ptrInicial, elemento);
                imprimeLista(ptrInicial);
                break;

            
            case 2:
            /*Si la lista no esta vacia*/
            if(!estaVacia(ptrInicial)){
                printf("Ingrese un caracter para eliminar: ");
                scanf("\n%c", &elemento);

                /*Si encuentra el caracter lo remueve*/
                if(eliminar(&ptrInicial, elemento)){
                    printf("caracter %c eliminado\n", elemento);
                    imprimeLista(ptrInicial);
                }
                else{
                    printf("No se encuentra el caracter %c\n\n", elemento);
                }
            }
            else {
                printf("La lista esta vacia. \n\n" );
            }

            break;

            default:
                printf("Opcion no valida \n\n");
                intrucciones();
                break; 
        }

        printf(">");
        scanf("%d", &eleccion);
    }
    printf("Fin de la ejecucion. \n");
    return EXIT_SUCCESS; 
}

/*FUNCIONES*/

status_t insertar(ptrNodoLista *ptrS, char valor){
    /*Ingresar un valor dentro de la lista en orden*/
    

    ptrNodoLista ptrNuevo;      /*Apuntador a un nuevo nodo*/
    ptrNodoLista ptrAterior;    /*Apuntador a un nodo previo de la lista*/
    ptrNodoLista ptrActual;     /*Apuntador al nodo actual de la lista*/

    if(ptrS == NULL)
        return ERROR_NULL_POINTER;

    ptrNuevo = malloc(sizeof(Node_List));
    if (ptrNuevo != NULL){
        ptrNuevo->dato = valor;
        ptrNuevo->ptrSiguiente = NULL; /*el nodo no se liga a otro nodo*/

        ptrAterior = NULL;
        ptrActual = *ptrS;

        /*Ciclo para realizar la ubicacion correcta en la lista*/
        while(ptrActual != NULL && valor > ptrActual->dato){
            ptrAterior = ptrActual;
            ptrActual = ptrActual->ptrSiguiente;
        }

        /*Inserta un nuevo nodo al principio de la lista*/
        if (ptrAterior == NULL){
            ptrNuevo->ptrSiguiente = *ptrS;
            *ptrS = ptrNuevo;
        }
        else {
            /*Inserta un nuevo nodo entre ptrAnterior y ptrActual*/
            ptrAterior->ptrSiguiente = ptrNuevo;
            ptrNuevo->ptrSiguiente = ptrActual;
        }
    }
    else{
        printf("No se inserto %c. No hay memoria disponible. \n", valor);
    }
    
return OK;

}

status_t eliminar(ptrNodoLista *ptrS, char valor){
    
    
    ptrNodoLista ptrAnterior;    /*Apuntador a un nodo previo de la lista*/
    ptrNodoLista ptrActual;     /*Apuntador al nodo actual de la lista*/
    ptrNodoLista tempPtr;      /*Apuntador a un nodo temporal*/

    /*elimina el primer nodo*/
    if( valor == (*ptrS)->dato){
        tempPtr = *ptrS; /*Almacena el nodo a eliminar*/
        *ptrS = (*ptrS)->ptrSiguiente; /*desata el nodo*/
        free(tempPtr); /*libera el nodo desatado*/
        return valor;
    }
    else {
        ptrAnterior = *ptrS;
        ptrActual = (*ptrS)->ptrSiguiente;

        /*Ciclo para localizar la ubicacion correcta en la lista*/
        while(ptrActual != NULL && ptrActual->dato != valor){
            ptrAnterior = ptrActual;
            ptrActual = ptrActual->ptrSiguiente;
        }

        /*Elimina el nodo ptrActual*/
        if(ptrActual != NULL){
            tempPtr = ptrActual;
            ptrAnterior->ptrSiguiente = ptrActual->ptrSiguiente;
            free(tempPtr);

            return valor;
        }
    }
    return OK;
}


/*Devuelce 1 si la lista esta vacia, de lo contrario, 0*/
status_t estaVacia(ptrNodoLista ptrS){

    return ptrS == NULL;
}

void imprimeLista(ptrNodoLista ptrActual){
    
    if(ptrActual == NULL){
        printf("Lista vacia. \n\n");
    }
    else{
        printf("La lista es: \n");
        while(ptrActual != NULL){
            printf("%c -> ", ptrActual->dato);
            ptrActual = ptrActual->ptrSiguiente;
        }

        printf ("NULL\n\n");
    }

}

void intrucciones(void){

    printf("Introduzca su eleccion: \n"
        "1 - Ingresar elemento en una lista. \n"
        "2 - Eliminar elemento de una lista. \n"
        "3 - Finalizar. \n");

}
