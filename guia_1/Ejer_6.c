/*
6) Escribir un programa que calcule las soluciones de una ecuación cuadrática con coeficientes reales.
*/

#include <stdio.h>
#include <math.h>

#define INVALID_NUMBER 0

#define MSG_CUADRATICA_DATOS "Ecuacion Cuadratica, por favor ingrese los valores de a, b y c"
#define MSG_INVALID_DATA "ERROR: Tipo de dato no valido"
#define MSG_INVALID_NUMBER "No se puede dividir entre cero"


int main(void){
    int buffer;
    size_t st = 0;
    int a, b, c;
    float x1, x2;


puts(MSG_CUADRATICA_DATOS);
/*Validacion de cada una de las entradas*/
if(!(st = scanf("%d", &a))){
    fprintf(stderr,"%s",MSG_INVALID_DATA );
    return 1;
}
while((buffer = getchar()) != '\n' && buffer != EOF);

if(!(st = scanf("%d", &b))){
    fprintf(stderr,"%s",MSG_INVALID_DATA );
    return 1;
}
while((buffer = getchar()) != '\n' && buffer != EOF);

if(!(st = scanf("%d", &c))){
    fprintf(stderr,"%s",MSG_INVALID_DATA );
    return 1;
}
while((buffer = getchar()) != '\n' && buffer != EOF);



if( a != INVALID_NUMBER){
    /*Ecuacion Cuadratica*/
    x1 = (-b + sqrt((pow(b,2)) - (4*a*c)))/(2*a);
    x2 = (-b - sqrt((pow(b,2)) - (4*a*c)))/(2*a);

    printf("Las solucion de la Ecuacion cuadratica para los numeros ingresados son:\nX1: %.2f\nX2: %.2f", x1, x2);
}
puts(MSG_INVALID_NUMBER);

return 0;

}
