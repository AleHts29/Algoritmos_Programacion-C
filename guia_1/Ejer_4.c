/*
4) La ecuación de una curva normal utilizada en aplicaciones estadísticas es:
1 −1(x−μ )2 y= .e2σ
2π σ
¿Cuántos datos de entrada tiene este problema? a) ¿Cuántas salidas tiene este problema?
b) Determinar un algoritmo para convertir los datos entrada en datos de salida. c) Probarelalgoritmoparaμ=90,σ=4,x=80yπ=3,1416.
*/

#include <stdio.h>
#include <math.h>



int main (void){
    float y;
    int u, sigma, x;
    int c, st;

    printf("Ingrese los valores de: \n u\tsigma\tx\n");
    if (!(st = scanf("%i%i%i", &u, &sigma, &x))){
        fprintf(stderr, "%s\n","ERROR DE INGRESO");
        return 1;
    }

    /*Vaciar buffer*/
    while((c = getchar()) != '\n' && c != EOF);

    if (sigma != 0){
        printf("Los datos ingresados son:\nu = %d\nSigma = %d\nx = %d\n", u, sigma, x);

        y = (1/(2*M_PI*sqrt(sigma)))*exp(-0.5*pow((float)(x-u)/sigma,2));

        printf("El valor de la curva normal es: %.4f\n", y);
    }else{
        fprintf(stderr, "%s\n","ERROR: No se puede dividir entre 0");
    }

    return 0;

}
