/*
Se debe escribir un programa para calcular la resistencia total de un circuito en serie. En tal circuito, la resistencia total es la suma de todos los valores individuales de los resistores. Suponer que el circuito consiste en una cantidad de 2 resistores de 56 Ω, 4 de 33 Ω y 1 de 15 Ω. Responder las siguientes preguntas:

c) Escribir un programa que lea de teclado el conjunto de valores de las resistencias para cualquier circuito serie y calcule la resistencia total del circuito, mostrando el resultado con 2 decimales por pantalla.

d) Probar el algoritmo escrito para la parte 2c) usando la siguiente muestra de datos: 47K, 12K, 680R y 2M2.
*/



#include <stdio.h>

int main (void){
    float i, R, Rt;

    
    for (i = 0; i < 8; i++){

        printf("Ingrese valor de R: \n");
        scanf("%f", &R);

        if (R<0){
            printf("Valor invalido \n");
            R = 0;
            /*return 1;*/
        }

        Rt = Rt+R;
    }

    printf("La Rt del circuito es: %.2f \n", Rt);
    return 0;

}
