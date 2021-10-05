/*
7) Mediante el uso de una instrucción do, escribir un programa para validar y aceptar una calificación. El programa debe aceptar una calificación continuamente mientras no se introduzcan calificaciones inválidas. Una calificación inválida es cualquiera menor que 0 o mayor que 100. Si la calificación es inválida, el programa debe imprimir un mensaje, de otra forma, la calificación debe sumarse al total de calificaciones ingresadas. Por último, debe desplegar el total.
*/


#include <stdio.h>

#define MIN_QUALIFICATION 0
#define MAX_QUALIFICATION 100

#define MSG_QUALIFICATION "Ingrese calificacion (Valores entre 0 y 100)"
#define MSG_IVALID_DATA "ERROR: Dato ingresado no valido"
#define MSG_INVALID_QUALIFICATION "Calificacion no valida"

int main(void){
    size_t st;
    float qualification = 0;
    float totalQualification = 0;



do{
    puts(MSG_QUALIFICATION);
    totalQualification += qualification;
    if(!(st = scanf("%f", &qualification))){
        fprintf(stderr, "%s", MSG_IVALID_DATA);
        return 1;
    }
}while(qualification >= MIN_QUALIFICATION && qualification <= MAX_QUALIFICATION );
    puts(MSG_INVALID_QUALIFICATION);
    printf("El total de calificaciones validas ingresadas es: %.2f", totalQualification);

return 0;
}

