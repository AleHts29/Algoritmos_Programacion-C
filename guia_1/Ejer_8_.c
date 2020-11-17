/*8) Escribir un programa que permita calcular de forma iterativa el factorial de un número ingresado por teclado. Finalizado el ingreso de datos, mostrar el resultado por stdout. Realizar todas las validaciones que considere necesarias.
*/

#include <stdio.h>

int main (void){
    int fact, i, resultado;
    int st;
    printf("Ingrese numero\n");
    if(!(st = scanf("%i",&fact))){
        fprintf(stderr,"%s\n", "ERROR DE INGRESO DE DATO");
        return 1;
    }

    if(fact<0){
        printf("Numero invalido\n");
        return 1;
    }

    resultado = 1; 
    for (i=1; i <= fact; i++)
    resultado = resultado*i;

    fprintf(stdout, "El factorial del nnumero ingresado es: %i \n", resultado);
    return 0;

}
