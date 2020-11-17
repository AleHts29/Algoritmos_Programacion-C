/*
6) Escribir un programa que calcule las soluciones de una ecuación cuadrática con coeficientes reales.
*/

#include <stdio.h>
#include <math.h>


int main (void){

    float X1, X2;
    int a, b, c;
    int d, st;

    printf("Ingrese los valores de: \na\tb\tc\n\n");
    if(!(st = scanf("%d%d%d", &a, &b, &c))){
        fprintf(stderr,"%s\n","ERROR DE INGRESO DE DATOS");
        return 1;
    }

    /*Vaciar buffer*/
    while((d = getchar()) != '\n' && d != EOF);

    if(a != 0){
        
        X1 = (-b + sqrt(pow(b,2)-4*a*c))/2*a;
        X2 = (-b - sqrt(pow(b,2)-4*a*c))/2*a;   

        printf("Las raices de la ecuacion cuadratica son:\nX1: %f\nX2: %f", X1, X2); 
    }else{
        fprintf(stderr,"%s\n","ERROR: No se puede dividir entre cero");
    }

    return 0;

}
