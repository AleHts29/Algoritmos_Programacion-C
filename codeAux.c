#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STR 100
#define MAX_NUMBER_TO_COPY 7


#define USM_MSG_INPUT_OPTION "Por favor elija una opcion"
#define USM_MSG_INPUT_TEXT "Ingrese un texto que inicie con espacion en blaco"
#define INVALID_OPTION "Opcion de conversion no valida"
#define ERROR_INPUT_OPTION "Error: Dato ingresado no valido"

#define FTM_UPPERCASE_NAMING "Convertir a Mayuscula"
#define FTM_LOWERCASE_NAMING "Convertir a Minuscula"

#define FTM_UPPERCASE_ID 1
#define FTM_LOWERCASE_ID 2



int main (void){
    char str1[MAX_STR] = "Holc, soy la cadena fuentes";
    char str2[MAX_STR] = "cadenaAA";
    char *result;
    size_t i=0, j=0;
    

    int retorno;

    result = strstr(str1, str2);
    printf("Usando la funcion strstr(): %s\n", result);

    /* Funcion mejorada de strstr() - busca str2 dentro de str1 */
    for(i=0; str1[i] != '\0'; i++){

        if(str1[i] == str2[j]){
            retorno = strncmp(str1 + i, str2, strlen(str2)-1);
            if(retorno != 0){
                i++;
            }
            else{
                printf("str2:'%s', se encuentra dentro de str1.\n", str2);
                return 0;
            }
        }
    }
    printf("str2:'%s' no se encuentra dentro de str1!", str2);
        
    return EXIT_SUCCESS;
}
