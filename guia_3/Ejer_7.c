
/*
7:
Escribir un programa que dadas dos cadenas de caracteres realice la concatenación de una sobre la otra y luego termine la cadena con el carácter '\0' (equivalente a la función de biblioteca strcat(), encabezado <string.h>).
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STR 100

int main (void){
    char str1[MAX_STR] = "Hola Mundo";
    char str2[MAX_STR] = "Hello World-";
    char str3[MAX_STR] = "Hello World_";

    size_t i = 0, len_str3 = 0;

    strcat(str2, str1);
    printf("Uso de strcat(): %s\n", str2);

    len_str3 = strlen(str3);
    for (i = len_str3; (str3[i] = str1[i-len_str3]) != '\0'; i++);
    str3 [i] = '\0';
    printf("Concatenacion manual: %s\n", str3);
        
    return EXIT_SUCCESS;
}

