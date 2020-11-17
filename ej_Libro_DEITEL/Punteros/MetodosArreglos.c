/* Figura 7.20
uso de las notaciones de subindices y de apuntadores con arreglos
*/

#include <stdio.h>

int main(){
    int b[] = {10, 20, 30, 40};
    int *ptrB = b; 
    int i;  /*Contador*/
    int desplazamineto; /*Contador*/ 

    /*Muestra el arreglo b con la notacion de subindices*/
    printf ("Arreglo b impreso con: \nNotacion de sibindices de arreglos\n");

    /*Ciclo a traves de arreglo b*/
    for(i = 0; i < 4; i++){
        printf("b[%d] = %d\n", i, b[i]);
    }

    /*Muestra el arreglo de b mediante el uso del nombre del arrreglo y notacion apuntador/desplazamiento*/
    printf ("\nNotacion apuntador/desplazamineto donde\nel apuntador es el nombre del arreglo\n");

    /*Ciclo a traves del arreglo b*/
    for (desplazamineto = 0; desplazamineto < 4; desplazamineto++){
        printf("*(b+%d) = %d\n", desplazamineto, *(b+desplazamineto));
    }


    /*Muestra el arreglo de b mediante el uso de ptrB y notacion de subindices de arreglos*/
    printf ("\nNotacion de subindices de arreglos\n");

    /*Ciclo a traves del arreglo b*/
    for (i = 0; i < 4; i++){
        printf("ptrB[%d] = %d\n", i, ptrB[i]);
    }

    /*Muestra el arreglo de b mediante el uso de ptrB y notacion apuntador/desplazamiento*/
    printf ("\nNotacion apuntador/desplazamineto\n");

    /*Ciclo a traves del arreglo b*/
    for (desplazamineto = 0; desplazamineto < 4; desplazamineto++){
        printf("*(ptrB+%d) = %d\n", desplazamineto, *(ptrB+desplazamineto));
    }

    return 0; 

}