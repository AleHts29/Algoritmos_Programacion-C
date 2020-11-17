/*F6.9 | Lanza un dado de 6 lados 6000 veces*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANIO 7

int main (){
    int cara, tiro; 
    int frecuencia [TAMANIO] = {0};

    srand(time(NULL)); /* generador de la semilla de numeros aleatorios */

    /*Tira el dado 6000 veces*/
    for(tiro = 1; tiro < 6000; tiro++){
        cara = 1 + rand() % 6; 
        ++frecuencia[cara]; 
    }

    printf("%s%17s\n", "Cara", "Frecuencia");
    
    /*Muestra los elementos de 1 a 6 de frecuencia en forma tabular*/
    for(cara = 1; cara < TAMANIO; cara ++){
        printf("%4d%17d\n", cara, frecuencia[cara]);
    }

    return EXIT_SUCCESS;
}