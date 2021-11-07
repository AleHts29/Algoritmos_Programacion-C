/*
Escribir un programa que lea un texto desde el teclado y calcule la cantidad de caracteres alfanuméricos, no alfanuméricos y numéricos que se ingresan. El programa debe informar esos valores por pantalla.
Sugerencia: usar las funciones de biblioteca isalnum(int caracter), isalpha(int caracter) e isdigit(int carácter).
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MSG_USER "Ingrese un texto"


int main(void){
    int c;
    int alfhanumeric_counter = 0, alfhabetical_counter = 0, numeric_counter = 0 ;


 puts(MSG_USER); 
    c = getchar();
    while(c != '\n'){
        
        if (isalnum(c))
            alfhanumeric_counter++;
        
        if (isalpha(c))
            alfhabetical_counter++;
        
        if (isdigit(c))
            numeric_counter++;
        
        c = getchar();
    }

printf("El texto ingresado tiene:\n%i caracteres alfanumericos\n%i caracteres alfabeticos\n%i caracteres numericos\n", alfhanumeric_counter, alfhabetical_counter, numeric_counter);

    return EXIT_SUCCESS;
}