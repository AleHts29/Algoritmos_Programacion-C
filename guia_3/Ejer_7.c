
/*
7:
Escribir un programa que dadas dos cadenas de caracteres realice la concatenación de una sobre la otra y luego termine la cadena con el carácter '\0' (equivalente a la función de biblioteca strcat(), encabezado <string.h>).
*/

#include <stdio.h>

#define MAX_STR 100

int main(void){
    char str[MAX_STR] = "Hola", str2[MAX_STR] = " Como estas?";

    int i=0, j;

    while (str[i] != '\0')
    {
        i++;
    }

    printf("%i\n",i);
    
    for (j=i; (str[j]=str2[j-i]) != '\0'; j++);
    str[j] = '\0';

    puts(str);

    return 0;
}

