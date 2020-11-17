/*Intenta modificr un puntero constante a un dato no constante*/

#include <stdio.h>

int main(void){
    int x;
    int y;

    /* ptr es un apuntador constante a un entero que se puede modificar a través de ptr, pero ptr siempre apunta a la misma ubicacion de memoria */

    int * const ptr = &x;

    *ptr = 7; /* Permitido: *ptr no es constante */
    ptr = &y; /* error: ptr es constante; no se puede asignar una nueva dirección */

    return 0;

}

