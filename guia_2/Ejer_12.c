/*
12: Indicar si el codigo es correcto.

typedef enum {CORRECTO, INCORRECTO} resultado_t;
int x;
resultado_t proceso = CORRECTO;
if (proceso == CORRECTO) x = 1;
else x = -1; ///proceso incorrecto ///

*/

#include <stdio.h>



typedef enum {
    CORRECTO, 
    INCORRECTO
    } resultado_t;


int main(void){

int x;
resultado_t proceso = CORRECTO;

if (proceso == CORRECTO) 
     x = 1;
else x = -1;

printf("X = %d", x);

return 0;

}
