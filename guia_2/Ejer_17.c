

/*
17:
Definir un token DEBUG y escribir un fragmento de código que sea compilado (o no) dependiendo de si se está en modo DEBUGing o en modo productivo. ¿Para qué puede servir esta construcción?

*/

#include <stdio.h>

#define DEBUG

/* #ifdef DEBUG
    fprintf(stderr,"%s\n", "DEBUGing.....");
#endif */

int main(void){

    #ifdef DEBUG
    fprintf(stderr,"%s\n", "DEBUGing.....");
    #endif


    printf("hello world\n");

    return 0;
}
