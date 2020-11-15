/*
3) La fórmula de la desviación estándar normal Z, usada en aplicaciones estadísticas es:
z =x−μ σ
en donde μ es el valor medio y σ es la desviación estándar. Usando esta fórmula, escribir un programa que calcule y despliegue el valor de la desviación estándar normal cuando x = 85,3, μ = 80 y σ = 4.
*/



#include <stdio.h>


int main (void){
    int c;
    double x, Z, u, sigma;

    x=85.3;
    u=80;
    sigma=4;

/*
    printf("Ingrese el valor de X\n");
    scanf("%f", &x);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Ingrese el valor de u\n");
    scanf("%i", &u);
    while ((c = getchar()) != '\n' && c != EOF);

    printf("Ingrese el valor de sigma\n");
    scanf("%i", &sigma);
    while ((c = getchar()) != '\n' && c != EOF);
*/

    Z = (x-u) / sigma ; 

    printf("El valor de la desviasion estandar normal Z, es: %.2f \n ", Z);

    return 0; 
}

