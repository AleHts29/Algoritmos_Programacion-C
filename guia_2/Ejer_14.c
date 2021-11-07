/*
14:
a) Un dispositivo de comunicaciones puede utilizar una velocidad de transferencia de 1200, 2400, 4800, y 9600 baudios. Definir un tipo enumerativo para modelizar dicha situación.
b) ¿Conviene utilizar un prefijo para los tokens del tipo enumerativo? ¿Por qué?
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


#define USM_MSG_INPUT_OPTION "Por favor elija una opcion"
#define INVALID_OPTION "Opcion no valida"
#define ERROR_INPUT_OPTION "Error: Dato ingresado no valido"

#define BAUD_RATE_1200_NAMING "Baud_rate_1200"
#define BAUD_RATE_2400_NAMING "Baud_rate_2400"
#define BAUD_RATE_4800_NAMING "Baud_rate_4800"
#define BAUD_RATE_9600_NAMING "Baud_rate_9600"

#define BAUD_RATE_1200_ID 1
#define BAUD_RATE_2400_ID 2
#define BAUD_RATE_4800_ID 3
#define BAUD_RATE_9600_ID 4


typedef enum {
    BAUD_RATE_1200,
    BAUD_RATE_2400,
    BAUD_RATE_4800,
    BAUD_RATE_9600
} baud_t;


int main (void){

    baud_t baud_rate;
    size_t st;
    int c, option;

    puts(USM_MSG_INPUT_OPTION);
    printf("%d - %s\n", BAUD_RATE_1200_ID, BAUD_RATE_1200_NAMING);
	printf("%d - %s\n", BAUD_RATE_2400_ID, BAUD_RATE_2400_NAMING);
	printf("%d - %s\n", BAUD_RATE_4800_ID, BAUD_RATE_4800_NAMING);
	printf("%d - %s\n", BAUD_RATE_9600_ID, BAUD_RATE_9600_NAMING);

    if( !(st = scanf("%d", &option))){
        fprintf(stderr, "%s", ERROR_INPUT_OPTION );
        return EXIT_FAILURE;
    }
    while( ((c = getchar()) != '\n') && (c != EOF));



    /* Traduccion */
    switch (option)
    {
    case BAUD_RATE_1200_ID:
        baud_rate = BAUD_RATE_1200;
        break;

    case BAUD_RATE_2400_ID:
        baud_rate = BAUD_RATE_2400;
        break;

    case BAUD_RATE_4800_ID:
        baud_rate = BAUD_RATE_4800;
        break;

    case BAUD_RATE_9600_ID:
        baud_rate = BAUD_RATE_9600;
        break;
    
    default:
        baud_rate = BAUD_RATE_9600;
        break;
    }

    
    /* Procesamiento */
    switch (baud_rate)
    {
    case BAUD_RATE_1200:
        printf("%s\n", BAUD_RATE_1200_NAMING);
        break;

    case BAUD_RATE_2400:
        printf("%s\n", BAUD_RATE_2400_NAMING);
        break;

    case BAUD_RATE_4800:
        printf("%s\n", BAUD_RATE_4800_NAMING);
        break;

    case BAUD_RATE_9600:
        printf("%s\n", BAUD_RATE_9600_NAMING);
        break;
    
    default:
        break;
    }
     

    return EXIT_SUCCESS;

}
