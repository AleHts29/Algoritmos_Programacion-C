/*Impresion de uan cadena caracter por caracter mediante un apuntador no constante a un dato constante*/

#include <stdio.h>
#include <ctype.h>

void imprimeCaracteres(const char *ptrS);

int main(void){
    char cadena[] = "Imprime los caracteres de una cadena ";

    printf("La cadena es: \n");
    imprimeCaracteres(cadena);
    printf("\n");
    return 0;
}

/* ptrS no puede midificar el caracter al cual apunta, es decir, ptrS es un apuntador de "solo lectura" */
void imprimeCaracteres(const char *ptrS){
    for( ; *ptrS != '\0'; ptrS++){ /*si inicializacion*/
        /* *ptrS = toupper(*ptrS); */  /*No se puede hacer esta modificacion porque *ptrS es constante*/
        printf("%c", *ptrS);
    }

}