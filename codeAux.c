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



int main(void){
    int c, i; 

    for ( i = 0; i < 20; i++){
        c = getchar();
        putchar(c);
        printf("%d\n", i);
    }
    

    // while(c != EOF){
    //     putchar(c);
    //     c = getchar();
    // }


    return EXIT_SUCCESS;
}
