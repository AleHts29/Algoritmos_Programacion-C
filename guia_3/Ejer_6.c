/*
Escribir un programa que dada una cadena de caracteres y un arreglo de caracteres con espacio suficiente, copie la cadena en el arreglo y coloque el carácter '\0' (equivalente a la función de biblioteca strcpy(), encabezado <string.h>).
*/



#include <stdio.h>
#include <string.h>

#define MAX_STR 100

int main(void){
    char source[MAX_STR]="Hola Mundo 1";
    char destination1[MAX_STR];
    char destination2[MAX_STR];
    size_t i;

        
/*  
    for(i=0;(destination2[i]=source[i])!='\0';i++);
    for(j=i;(destination2[j]=destination1[j-i]);j++);
*/
        
    strcpy (destination1, "Hello World");

    for(i=0;source[i]!='\0';i++)
        destination2[i]=source[i];
    destination2[i] = '\0';

    



    puts(source);
    puts(destination1);
    puts(destination2);


    return 0;
}
