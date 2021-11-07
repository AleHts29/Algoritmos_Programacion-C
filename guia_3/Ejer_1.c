
/*
1:
Escribir un programa que lea una cadena de caracteres ingresada por el flujo de entrada estándar y la imprima por pantalla. Para ello utilizar las funciones de biblioteca scanf() con formato "%s", gets() y fgets(). Comparar los resultados y explicar la conveniencia de utilizar cada una de ellas y en qué circunstancias.
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MSG_USER_WELCOME "Ingrece una texto:"

#define MAX_STR 3

int main(void){
    char string1[MAX_STR], string2[MAX_STR], string3[MAX_STR];

/*scaf y gets son funciones NO SEGURAS (No conocen el tamaño del array, pueden causar comportamientos anormales, fugas de memoria etc...)*/
   
    printf("%s ", MSG_USER_WELCOME);
    scanf("%s", string1);
    printf("string 1: %s\t\n", string1);
    
    printf("\n%s ", MSG_USER_WELCOME);
    gets(string2);
    printf("string 2: %s\t\n", string2);
    
    
    printf("\n%s ", MSG_USER_WELCOME);
    fgets(string3, MAX_STR +1, stdin );
    printf("string  3; %s\n", string3);


    return 0;
}
