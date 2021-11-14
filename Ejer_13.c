/*
13.
a) Definir un tipo enumerativo format_t compuesto por los símbolos FMT_MAYUSCULAS y FMT_MINUSCULAS.
b) Escribir un programa que lea del flujo de entrada estándar una cadena de caracteres y la convierta de forma paramétrica a minúsculas o mayúsculas, según una opción ingresada por el usuario mediante stdin, y muestre el resultado de la conversión por stdout. Usar tipos enumerativos para la decodificación de la selección ingresada por el usuario.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STR 100
#define MAX_NUMBER_TO_COPY 7


#define USM_MSG_INPUT_OPTION "Por favor elija una opcion"
#define USM_MSG_INPUT_TEXT "Ingrese el texto a convertir"
#define INVALID_OPTION "Opcion de conversion no valida"
#define ERROR_INPUT_OPTION "Error: Dato ingresado no valido"

#define FTM_UPPERCASE_NAMING "Convertir a Mayuscula"
#define FTM_LOWERCASE_NAMING "Convertir a Minuscula"

#define FTM_UPPERCASE_ID 1
#define FTM_LOWERCASE_ID 2



typedef enum {
    FTM_UPPERCASE,
    FTM_LOWERCASE,
    FTM_NO_CONVERSION
}format_t;

int main (void){
    char str2[MAX_STR];

    format_t formato;
    size_t st, i;
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
        formato = FTM_NO_CONVERSION;  
        break;
    }

    /* Procesamiento */
    switch (formato)
    {
    case FTM_UPPERCASE:
        for(i = 0; str2[i] != '\0'; i++)
            str2[i] = toupper(str2[i]);
        break;

    case FTM_LOWERCASE:
        for(i = 0; str2[i] != '\0'; i++)
            str2[i] = tolower(str2[i]);
        break;
    
    default:
        puts(INVALID_OPTION);  
        break;
    }

    printf("Conversion: %s\n", str2);
        
    return EXIT_SUCCESS;
}
