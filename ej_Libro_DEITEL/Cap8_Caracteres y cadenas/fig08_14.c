/*leer e imprimir con getchar y puts*/

#include <stdio.h>

int main (){
    char c; /*almacena los caractares ingresados por el usuario*/
    char enunciado [80]; /*Crea un arreglo de caracteres*/
    int i = 0;

    /*indica al usuario que introduzca una linea de texto*/
    puts("Introduzca una linea de texto");
    
    /*utiliza getchar para leer cada caracter*/
    while (( c = getchar() ) != '\n'){
        enunciado[i++] = c;
    }
    enunciado[i] = '\0'; /*termina la cadena*/

    /*utiliza puts para desplegar el enunciado*/
    puts("\nLa linea introducida es: ");
    puts(enunciado);

    return 0;
}

