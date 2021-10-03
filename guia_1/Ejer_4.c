/*
4) La ecuación de una curva normal utilizada en aplicaciones estadísticas es:
1 −1(x−μ )2 y= .e2σ
2π σ
¿Cuántos datos de entrada tiene este problema? a) ¿Cuántas salidas tiene este problema?
b) Determinar un algoritmo para convertir los datos entrada en datos de salida. c) Probarelalgoritmoparaμ=90,σ=4,x=80yπ=3,1416.
*/

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MSG_INVALID_DATA "ERROR: Dato ingresado no valido"
#define MSG_WELCOME "Ingrese los valores para u, sigma y X"


int main (void){
    double Y;
    float sigma, x, u;
    int c;
   

    puts(MSG_WELCOME);
    
    if(!(scanf("%f", &u))){
        fprintf(stderr, "%s", MSG_INVALID_DATA );
        return 1;
    }else{
        while ((c = getchar()) != '\n' || c != EOF);
    }
    
    if (!(scanf("%f", &sigma))) {
        fprintf(stderr, "%s", MSG_INVALID_DATA );
        return 1;
    }else{
        while ((c = getchar()) != '\n' || c != EOF);
    }

    if(!(scanf("%f", &x))){
        fprintf(stderr, "%s", MSG_INVALID_DATA );
        return 1;
    }
    else{
        while ((c = getchar()) != '\n' || c != EOF);
        if(sigma != 0){
            Y = (1/(2*M_PI*sqrt(sigma)))*exp(-0.5*pow((x-u)/sigma,2));
            printf("El valor de la curva normal es: %.4f\n", Y);

        }else{
            fprintf(stderr, "%s", MSG_INVALID_DATA );
            return 1;
        }
    }



    return 0;
}
