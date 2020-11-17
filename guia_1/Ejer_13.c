/*
13) Escribir un programa que permita calcular el promedio aritmético de una serie de valores ingresados por teclado (sin almacenar la totalidad de los valores leídos). A tal efecto se debe ingresar primero la cantidad esperada de elementos a promediar, y luego el lote de datos de a uno por vez. Finalizado el ingreso de datos, mostrar el resultado por stdout con 3 decimales. Realizar todas las validaciones que considere necesarias.
*/


#include <stdio.h>


int main (void){

    int N_of_Data, Data_IN, Total_Data;
    float Data_OUT;
    int st, c, i;

    Total_Data = 0;

    printf("Ingrese la cantidad de numeros a promediar: ");
    if(!(st = scanf("%d", &N_of_Data))){
        fprintf(stderr,"%s\n","ERROR DE INGRESO DE DATO");
        return 1;
    }

    if ( N_of_Data > 0){
        for(i = 1; i <= N_of_Data; i++){
            printf("Ingrese un valor numerico: \n");
            if (! (st = scanf("%d", &Data_IN))){
                fprintf(stderr, "%s\n", "ERROR DE INGRESO DE DATO");
                return 1;
            }
            while ((c = getchar()) != '\n' && c != EOF); 

            Total_Data += Data_IN;
        }

        Data_OUT = (float)Total_Data / N_of_Data;
        printf("Promedio: %.3f\n", Data_OUT);
    }else{
        printf("Datos a promediar: NULL\n");
        
    }
   
    
    return 0;
}
