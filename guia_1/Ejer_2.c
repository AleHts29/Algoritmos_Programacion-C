/*
Se debe escribir un programa para calcular la resistencia total de un circuito en serie. En tal circuito, la resistencia total es la suma de todos los valores individuales de los resistores. Suponer que el circuito consiste en una cantidad de 2 resistores de 56 Ω, 4 de 33 Ω y 1 de 15 Ω. Responder las siguientes preguntas:

c) Escribir un programa que lea de teclado el conjunto de valores de las resistencias para cualquier circuito serie y calcule la resistencia total del circuito, mostrando el resultado con 2 decimales por pantalla.

d) Probar el algoritmo escrito para la parte 2c) usando la siguiente muestra de datos: 47K, 12K, 680R y 2M2.
*/



#include <stdio.h>
/* #define TOTAL_RESISTORS 8 */
#define INVALID_RESISTORS 0

#define MSG_RESISTOR_AMOUNT "Ingrese la cantidad de resistores"
#define MSG_RESISTOR_VALUE "Ingrese el valor del Resistor"
#define MSG_INVALID_RESISTORS "Valor no valido, intente nuevamente"

int main (void){

int i, numResistors, resistor;
float rTotal = 0;

    puts(MSG_RESISTOR_AMOUNT);
    scanf("%i", &numResistors);

    while (numResistors < INVALID_RESISTORS){
       puts(MSG_INVALID_RESISTORS);
       scanf("%i", &numResistors);
    }
   
    for (i = 1; i <= numResistors; i++){
        printf("%s %i: [ohm] \n",MSG_RESISTOR_VALUE, i);
        scanf("%i", &resistor);

        if (resistor <= INVALID_RESISTORS){
            puts(MSG_INVALID_RESISTORS);
            resistor = 0;
            i--;
            /*return 1;*/
        }

        rTotal += resistor;
    }

    printf("La resistencia total del circuito es: %.2f [ohm]\n", rTotal);
    return 0;

}
