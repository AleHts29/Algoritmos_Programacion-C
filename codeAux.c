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
    char str1[MAX_STR];
    char str2[MAX_STR];
    
    size_t i=0, j=0, counter=0, len;

    
    puts(USM_MSG_INPUT_TEXT);
    /* fgets(), agrega '\n''\0' si tiene espacio suficiente, de lo contrario solo agrega '\0' */
    fgets(str1, sizeof(str1) + 2, stdin);

    /* saco el '\n' si fgets() lo agrego */
    if(str1[strlen(str1)-1] == '\n')
        str1[strlen(str1)-1] = '\0';


    /* Elimino los espacios en blanco y convierto a minusculas */
    for (i = 0; str1[i] != '\0'; i++){
        if( str1[i] != ' ' ){
            str2[j] = tolower(str1[i]);
            j++;
        }
    }
    str2[i] = '\0';

    i=0;
    len  = strlen(str2);
    /* Realizo comparaciones en dos sentidos hasta la mitad de la cadena */
    while(counter != len/2){
        if(str2[i] != str2[(len-1)-i]){
            puts("No es palindromo");
            return 0;
        }
        i++;
        counter++;
    }
            
    printf("'%s' - Es palindromo", str1);
    
        
    return EXIT_SUCCESS;
}
