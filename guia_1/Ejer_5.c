/*
5) Escribir un programa que calcule la raíz cuadrada y el inverso de un número ingresado por el teclado. Antes de calcular la raíz cuadrada se debe verificar que el número sea no negativo y antes de calcular el inverso, se debe verificar que el número no sea cero.
*/


#include <stdio.h>
#include <math.h>


int main(){
    float r, i;
    int c, st;

    printf("Calcular raiz cuadrada de: ");
    /*Validacion*/
    if (!(st = scanf ("%f", &r ))){
        fprintf(stderr,"%s\n","ERROR DE INGRESO DE DATO");
        return 1;
    }
    /*Limpia buffer*/
    while((c = getchar()) != '\n' && c != EOF);

    printf("Calcular inverso multiplicativo de: ");
    /*Validacion*/
    if (!(st = scanf ("%f", &i ))){
        fprintf(stderr,"%s\n","ERROR DE INGRESO DE DATO");
        return 1;
    }
    /*Limpia buffer*/
    while((c = getchar()) != '\n' && c != EOF);

    
    printf("\n");

    if(r > 0 ){
    r = sqrt(r);
    printf("La raiz cuadrada es: %.2f\n",r);
    }else{
        fprintf(stderr,"%s\n", "ERROR: No se puede calcular raiz cuadrada de numeros negativos!");
    }

    if (i != 0){
    i = 1/i;
    printf("Su inverso multiplicativo es: %.2f\n", i);
    }else{
        fprintf(stderr, "%s\n", "ERROR: No se puede dividir entre 0");
    }
return 0;

}
