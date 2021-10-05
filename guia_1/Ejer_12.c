/*
12) Escribir un programa que permita determinar el máximo y el mínimo de un conjunto de valores ingresados por teclado (sin almacenar la totalidad de los valores leídos). A tal efecto se debe ingresar primero la cantidad esperada de elementos a procesar y luego el lote de datos de a uno por vez. Finalizado el ingreso de datos, mostrar el resultado por stdout con 3 decimales. Realizar todas las validaciones que considere necesarias.
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_INPUT_VAL 5

#define MSG_INVALID_DATA "ERROR: Dato ingresado no valido"

int main (void){
    size_t st, counter = 1;
    float num, numMax = 0, numMin = 0;
    int c;

    do{
        
        if(!(st = scanf("%f", &num))){
        fprintf(stderr,"%s", MSG_INVALID_DATA);
        return 1;
    }
        while((c = getchar()) != '\n' && c != EOF);

        if(num > numMax){
            numMax = num;
        }

        if(num < numMin){
            numMin = num;
        }
        counter++;

    }while(counter <= MAX_INPUT_VAL);

    fprintf(stdout,"\nEl valor maximo de los numeros ingresados es: %.3f\n", numMax);
    fprintf(stdout,"El valor minimo de los numeros ingresados es: %.3f\n", numMin);
    
    return 0;
}
