/*
5) Escribir un programa que calcule la raíz cuadrada y el inverso de un número ingresado por el teclado. Antes de calcular la raíz cuadrada se debe verificar que el número sea no negativo y antes de calcular el inverso, se debe verificar que el número no sea cero.
*/


#include <stdio.h>
#include <math.h>


int main(){
    float n;
    printf("Numero: \n");
    scanf("%f",&n);
    n = sqrt(n);
    printf("Raiz cuadrada: %f\n",n);
return 0;

}
