/*
Uso del estandar error en fprintf
Dirijir el flujo a un archivo para informar los errores: 

    ./archivo.c > out.txt ----> estandar output
    ./archivo.c 2> out.txt ----> estandar error
    ./archivo.c 2>> out.txt ----> estandar error y hace append
*/


#include <stdio.h>

int main (void){

    fprintf(stdout, "Hola stdout\n");
    fprintf(stderr, "Hola stderr\n");

    if(1){
         fprintf(stderr, "Hola stderr dentro del if()\n");
    } 


    return 0;

}


