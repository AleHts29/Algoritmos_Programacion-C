/*Impresion en bits de  un entero sin signo*/

#include <stdio.h>

void despliegaBits( unsigned valor);

int main(){
    unsigned x; 
    printf("Introduzca un entero sin signo: ");
    scanf("%u", &x);


    despliegaBits(x);
    return 0; 
}

void despliegaBits( unsigned valor){
    unsigned c;

    /*define Mask y desplaza 31 bits hacia la izquierda*/
    unsigned despliegaMask = 1 << 31;
    printf("%10u = ", valor);

    /*Ciclo a traves de los bits*/

    for( c = 1; c <= 32; c++){
        putchar(valor & despliegaMask ? '1' : '0');
        valor <<= 1; /*desplaza valor 1 hacia la izquierda*/
        //printf("\n%10u = ", valor);

        if ( c % 8 == 0){ /*Despliega espacio despues de 8 bits*/
            putchar( ' ' );
        }
    }
    putchar('\n');
}
