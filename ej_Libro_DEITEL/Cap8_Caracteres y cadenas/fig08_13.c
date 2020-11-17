/*Uso de gets y putchar, invertir cadenas de caracteres*/

#include <stdio.h>

void inverso(const char * const ptrS);

int main (void){
    char enunciado[80];

    printf(" Introduzca una linea de texto: \n");
    gets(enunciado);/*lee una cadena de texto*/

    printf("\nLa linea de impresa al reves es: \n");
    inverso(enunciado);
    printf("\n");
   
    return 0; 
}

/*imprime recursivamente los caracteres de una cadena en orden inverso*/
void inverso(const char * const ptrS){
    /*Si es el final de la cadena*/
    if( ptrS[0] == '\0'){
        return;
    }
    else{ /*si no es el final de la cadena*/
        inverso(&ptrS[1]);/*paso recursivo*/
        //puts(ptrS);   
        printf("\n");
        putchar(ptrS[0]);/*utiliza putchar para desplegar los caracteres*/
    
    }
}