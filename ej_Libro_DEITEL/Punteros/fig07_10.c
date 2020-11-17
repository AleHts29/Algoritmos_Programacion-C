/*Conversion de letras minusculas a MAYUSCULAS mediante un apuntador no constante a un dato no constante*/

#include <stdio.h>
#include <ctype.h>

void convierteToMAYUSCULAS (char *ptrS);

int main(void){

    char cadena[] = "Cadena y $32.98";
    int *ptr;
    ptr=&cadena[2];


    printf("La cadena antes de la conversion es: %s", ptr);
    convierteToMAYUSCULAS(cadena); /*Como cadena es un arreglo, este se pasa automaticamente por referencia a la funcion*/

    printf("\nLa cadena despues de la conversion es: %s", cadena);

    return 0;
}

void convierteToMAYUSCULAS (char *ptrS){
    while(*ptrS != '\0'){
        if (islower(*ptrS)){
            *ptrS = toupper(*ptrS);
        }
        ++ptrS;
    }
}

