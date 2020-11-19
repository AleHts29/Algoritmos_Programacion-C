/*
3.
a) Definir un tipo enumerativo dia_t compuesto por 7 símbolos que representen cada día de la semana.
b) Escribir una porción de código que muestre por stdout el contenido de una variable de tipo dia_t (traducción).
*/


#include<stdio.h>

typedef enum  {
        DIA_LUNES       , 
        DIA_MARTES      ,
        DIA_MIERCOLES   ,
        DIA_JUEVES      ,
        DIA_VIERNES     ,
        DIA_SABADO      ,
        DIA_DOMINGO     
        } dia_t;

int main(void){

     dia_t hoy;

    for( hoy = DIA_LUNES; hoy <= DIA_DOMINGO; hoy++){
        printf("%d\n", hoy);
    }

    return 0;
}
