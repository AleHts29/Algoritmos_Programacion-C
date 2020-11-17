/*uso de strcpy y strncpy*/

#include <stdio.h>
#include <string.h>

int main (){
    char x[] = "Feliz cumple a ti";

    char y[10];
    char z[15];

    /*Contenido de la copia de x en y*/
    printf("La cadena en el arreglo X es: ");
    puts(x);

    printf("La cadena en el arreglo Y es: ");
    puts(strcpy(y, x));

    /*copia los primeros caracteres de X dentro de Z. No copia el caracter nulo*/
    strncpy(z, x, 7);
    z[7] = '\0';

    printf("La cadena en el arreglo Z es: ");
    puts(z);


 return 0;
}