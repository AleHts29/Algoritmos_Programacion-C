/*
4:
Escribir un programa que inicialice arreglo de caracteres con una cadena cualquiera y lo imprima en orden inverso por el flujo de salida estándar.
*/




#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_STR 100

int main(void) {
    char s[MAX_STR]="Hola Mundo";
/*                   0123456789
                     12345678910
     */
    size_t len, j, i=0;

    len=strlen(s);
    printf("Len 1: %ld\n", len);

    while (s[i]!='\0'){
        ++i; 
    putchar(s[i-1]);
    
    }
    printf("\nLen 2: %ld\n", i);

    for(j=len; j > 0;j--){
        putchar(s[j-1]);
    }
    putchar('\n');

    return 0;
}
