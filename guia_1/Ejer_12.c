/*
12) Escribir un programa que permita determinar el máximo y el mínimo de un conjunto de valores ingresados por teclado (sin almacenar la totalidad de los valores leídos). A tal efecto se debe ingresar primero la cantidad esperada de elementos a procesar y luego el lote de datos de a uno por vez. Finalizado el ingreso de datos, mostrar el resultado por stdout con 3 decimales. Realizar todas las validaciones que considere necesarias.
*/

#include <stdio.h>
#define MAX_INPUT_VAL 5

int main (void){

    float max, min, valor;
    int st, c, i;

    for(i = 1; i < MAX_INPUT_VAL; i++){
        printf("Ingrese un valor numerico: \n");
        if (! (st = scanf("%f", &valor))){
            fprintf(stderr, "%s\n", "Error de ingreso");
            return 1;
        }
        while ((c = getchar()) != '\n' && c != EOF);


        if(i == 1)
            min = max = valor;

        if (valor < min)
            min = valor;
        if (max < valor)
            max = valor;
    }

    printf("\nValor maximo: %.3f\n", max);
    printf("Valor minimo: %.3f\n", min);
    
    return 0;
}
