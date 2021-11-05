/*
4
a) Definir un tipo de dato dato_t a partir del tipo nativo float (mediante el uso de typedef).
b) Definir un tipo enumerativo escala_t que contenga los símbolos CELSIUS y FAHRENHEIT.
c) Escribir un fragmento de código que lea del flujo de entrada estándar un número que represente un valor
de temperatura en una de las dos escalas y la convierta paramétricamente a la otra, mostrando el resultado por el flujo de salida estándar.
*/

#include <stdio.h>
#include <stdlib.h>

#define USR_MSG_OPTION "Elija la opcion de conversion"
#define USM_MSG_INPUT_VALUE "Por favor ingrese un valor de temperatura"
#define ERROR_INPUT_OPTION "Error: Dato ingresado no valido"
#define ERROR_INVALID_CONVERSION "Error: No se pudo realizar la conversion"
#define INVALID_OPTION "Opcion no valida"

#define CELSIUS_NAME "Temperatura en Celcius"
#define FAHRENHEIT_NAME "Temperatura en Fahrenheit"

#define CELSIUS_ID 1
#define FAHRENHEIT_ID 2


typedef float dato_t;

    typedef enum {
        CELSIUS_SCALE, 
        FAHRENHEIT_SCALE
    } scale_t;

int main(void){

    int option, dato, st, c;
    scale_t scale;
    dato_t conversion_temperature;


    puts(USR_MSG_OPTION);
    printf("%d - %s\n",CELSIUS_ID, CELSIUS_NAME);
    printf("%d - %s\n",FAHRENHEIT_ID, FAHRENHEIT_NAME);

    /* Leo y valido */
    if(!(st = scanf("%d", &option))){
        fprintf(stderr, "%s", ERROR_INPUT_OPTION);
        return EXIT_FAILURE;
    }
    /* Limpio buffer */
    while(((c = getchar()) != '\n') && (c != EOF));

    

    /* Traduccion */
    switch (option)
        {
        case CELSIUS_ID:
            scale = CELSIUS_SCALE;
            break;

        case FAHRENHEIT_ID:
            scale = FAHRENHEIT_SCALE;
            break;
        
        default:
            puts(INVALID_OPTION);
            return 1;
        }
    
    puts(USM_MSG_INPUT_VALUE);
    /* Leo y valido el valor de temperatura*/
    st = scanf("%d", &dato);
    if(!(st)|| st == EOF){
        fprintf(stderr, "%s", ERROR_INPUT_OPTION);
        return EXIT_FAILURE;
    }
    /* Limpio buffer */
    while(((c = getchar()) != '\n') && (c != EOF))

    /* Procesamiento */
    switch (scale)
        {
        case CELSIUS_SCALE:
            conversion_temperature = (dato - 32) * (float) 5/9;
            break;

        case FAHRENHEIT_SCALE:
            conversion_temperature = (dato * (float) 9/5 ) + 32;
            break;
        
        default:
            puts(ERROR_INVALID_CONVERSION);
            break;
        }


    /* Salida */
    switch (scale)
        {
        case CELSIUS_SCALE:
            printf("%4i %s son %f %s\n", dato, FAHRENHEIT_NAME, conversion_temperature, CELSIUS_NAME);
            break;

        case FAHRENHEIT_SCALE:
            printf("%4i %s son %f %s\n", dato, CELSIUS_NAME, conversion_temperature, FAHRENHEIT_NAME);
            break;
        }

    return EXIT_SUCCESS;
}
