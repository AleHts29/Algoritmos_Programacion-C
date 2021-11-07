/*
1:
a) Escribir un programa que defina un tipo enumerativo con los símbolos TRUE y FALSE.
b) Redefinir este tipo enumerativo como tipo bool_t.
c) Declarar una variable de tipo bool_t y asignarle el símbolo TRUE.
d) Escribir una porción de código que imprima por stdout una cadena de caracteres según el valor de la
variable anterior (traducción semántica).
*/


#include <stdio.h>

int main(void){

    typedef enum  {
        TRUE, 
        FALSE
        } bool_t;

    bool_t state = TRUE;

    printf("%u\n", state);

    return 0;
}
