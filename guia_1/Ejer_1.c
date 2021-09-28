/*
Escribir un programa para la conversión de divisas (pesos, reales, dólares estadounidenses y euros).
Realizar las validaciones que considere necesarias. ¿Convendría en este caso codificar un programa
interactivo?
*/

#include <stdio.h>
#define EXCHANGE_RATE_USD_TO_ARG 98.60
#define EXCHANGE_RATE_EUR_TO_ARG 115.39
#define EXCHANGE_RATE_BRL_TO_ARG 18.41

#define MSG_USD "Dolar"
#define MSG_EUR "Euro"
#define MSG_BRL "Real"
#define MSG_ARG "Pesos Argentinos"
#define MSG_USER_TOTAL_CHANGE "El monto total en pasos Argentinos es:"
#define MSG_INVALID_OPTION "Opcion no valida, intente nuevamente!"

int main (void){

int option;
float USD, EUR, BRL, ARG;

    do{
        printf("Conversor de Divisas a %s\nOpciones: \n1: %s\n2: %s\n3: %s\n0: Exit\n\nOption: ",MSG_ARG, MSG_USD, MSG_EUR, MSG_BRL);
        scanf("%i", &option);
        switch (option){
                case 1:
                    puts("Ingrese la cantidad de Dolares a Convertir");
                    scanf("%f", &USD);
                    ARG = USD*EXCHANGE_RATE_USD_TO_ARG;
                    printf("%s %.2f\n\n---------------\n\n", MSG_USER_TOTAL_CHANGE, ARG);
                    break;

                case 2:
                    puts("Ingrese la cantidad de Euros a Convertir");
                    scanf("%f", &EUR);
                    ARG = EUR*EXCHANGE_RATE_EUR_TO_ARG;
                    printf("%s %.2f\n\n---------------\n\n", MSG_USER_TOTAL_CHANGE, ARG);
                    break;

                case 3:
                    puts("Ingrese la cantidad de Reales a Convertir");
                    scanf("%f", &BRL);
                    ARG = BRL*EXCHANGE_RATE_BRL_TO_ARG;
                    printf("%s %.2f\n\n---------------\n\n", MSG_USER_TOTAL_CHANGE, ARG);
                    break;

                default:
                    puts(MSG_INVALID_OPTION);
                    puts("\n---------------\n");                 
                    break;
            }
    }
    while (option != 0);

}

