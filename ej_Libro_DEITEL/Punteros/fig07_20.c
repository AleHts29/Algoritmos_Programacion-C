/*Uso de las notaciones de subindices y de apuntadores con arreglo*/

#include <stdio.h>

int main (void){

    int b[] = {2, 3, 1, 45};
    int *ptrB =b;
    int i;
    int desplazamiento; 

    printf("Arreglo b impreso con: \nNotacion de subindices de arreglo\n");

        for(i = 0; i < 4; i++){
        printf("b[%d] = %d\n",i, b[i] );
    }

    printf("\nNotacion apuntador/desplazamiento donde\n"
            "EL apuntador es el nombre del arreglo\n");

    for(desplazamiento = 0; desplazamiento < 4; desplazamiento++){
        printf("*(b + %d) = %d\n", desplazamiento, *(b + desplazamiento) );
    }

    printf("\nNotacioin de subindicis de arreglos\n");
        for(i = 0; i < 4; i++){
        printf("ptrB[%d] = %d\n",i, ptrB[i] );
    }

    printf("\nNotacion apuntador/desplazamiento\n");
    
    for(desplazamiento = 0; desplazamiento < 4; desplazamiento++){
        printf("*(ptrB + %d) = %d\n", desplazamiento, *(ptrB + desplazamiento) );
    }
    return 0;

}