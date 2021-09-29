/*
3) La fórmula de la desviación estándar normal Z, usada en aplicaciones estadísticas es:
z =x−μ σ
en donde μ es el valor medio y σ es la desviación estándar. Usando esta fórmula, escribir un programa que calcule y despliegue el valor de la desviación estándar normal cuando x = 85,3, μ = 80 y σ = 4.
*/



#include <stdio.h>
#include <stdbool.h>

#define MSG_INVALID_DATA "ERROR: Dato ingresado no valido"
#define MSG_WELCOME "Ingrese los valores para u, sigma y X"

int main (void){
    int c;
    float x, Z, u, sigma;

  
    puts(MSG_WELCOME);
    
    if(!(scanf("%f", &u))){
        fprintf(stderr, "%s", MSG_INVALID_DATA );
        return 1;
    }else{
        while ((c = getchar()) != '\n' && c != EOF);
    }
    
    if (!(scanf("%f", &sigma))) {
        fprintf(stderr, "%s", MSG_INVALID_DATA );
        return 1;
    }else{
        while ((c = getchar()) != '\n' && c != EOF);
    }

    if(!(scanf("%f", &x))){
        fprintf(stderr, "%s", MSG_INVALID_DATA );
        return 1;
    }
    else{
        while ((c = getchar()) != '\n' && c != EOF);
        if(sigma != 0){
            Z = (x-u) / sigma;
            printf("El valor de la desviasion estandar normal es: Z = %.2f", Z);
        }else{
            fprintf(stderr, "%s", MSG_INVALID_DATA );
            return 1;
        }
    }
    return 0;
}

