
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define TAMANIO 5

void convierteToMAYUSCULAS (char *ptrS);

int main(void){
    int i;
    char *arrPtr[TAMANIO];
    char  *cadena[] = {"Hola", "Como", "Estas", "El", "Dia de hoy"};
    
    //arrPtr = &cadena;
    //printf("%s\n", *arrPtr[0]);

    int (*ptrB)[];
    int *B[]={1000,10,20,30,40};
    ptrB = &B;
    printf("%d\n", (*ptrB)[0]);


    //cadena[0]=ptrA[0];

puts("Arreglo de punteros");
    for (i = 0; i < TAMANIO; i++){
        arrPtr[i]=&cadena[i][0];
        printf(" *arrPtr(%d) = %c \n", i,  *arrPtr[i]);

    }

printf("\n");

puts("Arreglo de punteros a una ARREGLOS CADENA DE CARACTERES");
    for (i = 0; i < TAMANIO; i++){
        arrPtr[i]=&cadena[i][0];
        printf("arrPtr(%d) apunta al elemento %d de la Cadena de caractes, igual a: %s \n",i, i, arrPtr[i]);

    }

    
return 0;
}