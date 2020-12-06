
/*
16:
Escribir un fragmento de código basado en una directiva al preprocesador para realizar la siguiente tarea: Si la constante simbólica TRUE está definida, eliminarla y volverla a definir como 1.
*/

#include <stdio.h>
#define TRUE 0

int main(void){

    printf("%i\n", TRUE);

    #undef TRUE
    #define TRUE 1

    printf("%i\n", TRUE);

    return 0;
}