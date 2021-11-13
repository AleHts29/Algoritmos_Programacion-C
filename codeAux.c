#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STR 100
#define MAX_NUMBER_TO_COPY 7


#define USM_MSG_INPUT_OPTION "Por favor elija una opcion"
#define USM_MSG_INPUT_TEXT "Ingrese el texto a convertir"
#define INVALID_OPTION "Opcion no valida"
#define ERROR_INPUT_OPTION "Error: Dato ingresado no valido"

#define FTM_UPPERCASE_NAMING "Convertir a Mayuscula"
#define FTM_LOWERCASE_NAMING "Convertir a Mayuscula"

#define FTM_UPPERCASE_ID 1
#define FTM_LOWERCASE_ID 2



typedef enum {
    FTM_UPPERCASE,
    FTM_LOWERCASE
}format_t;

int main (void){
    char str1[MAX_STR] = "HELLO World";
    char str2[MAX_STR];

    format_t formato;
    size_t st;
    int option, c;

    puts(USM_MSG_INPUT_OPTION);
    printf("%d - %s\n", FTM_UPPERCASE_ID, FTM_UPPERCASE_NAMING);
	printf("%d - %s\n", FTM_LOWERCASE_ID, FTM_LOWERCASE_NAMING);
	

    if( !(st = scanf("%d", &option))){
        fprintf(stderr, "%s", ERROR_INPUT_OPTION );
        return EXIT_FAILURE;
    }
    while( ((c = getchar()) != '\n') && (c != EOF));

    puts(USM_MSG_INPUT_TEXT);
    fgets(str2, MAX_STR + 1, stdin);


    /* Traduccion */
    switch (option)
    {
    case FTM_UPPERCASE_ID:
        formato = FTM_UPPERCASE;
        break;

    case FTM_LOWERCASE_ID:
        formato = FTM_LOWERCASE;
        break;
    
    default:
        puts(INVALID_OPTION);
        break;
    }

    /* Procesamiento */
    switch (formato)
    {
    case FTM_UPPERCASE:
        puts("Convierte a Mayuscula");
        break;

    case FTM_LOWERCASE:
        puts("Convierte a minuscula");
        break;
    
    default:
        break;
    }

    printf("Cadena: %s\n", str2);
        
    return EXIT_SUCCESS;
}
