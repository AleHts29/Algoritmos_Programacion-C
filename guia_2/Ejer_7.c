#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


#define USM_MSG_INPUT_VALUE "Por favor ingrese un Angulo (grados)"
#define ERROR_INPUT_OPTION "Error: Dato ingresado no valido"

#define ACUTE_ANGLE_NAMING "Angulo Agudo"
#define OBTUSE_ANGLE_NAMING "Angulo Obtuso"
#define RIGHT_ANGLE_NAMING "Angulo Recto"

#define RIGHT_ANGLE_VALUE 90


typedef enum {
    ACUTE_ANGLE,
    OBTUSE_ANGLE,
    RIGHT_ANGLE
} angle_t;


int main (void){

    float dato;
    angle_t angle;
    size_t st;

    int c;

    puts(USM_MSG_INPUT_VALUE);
    if( !(st = scanf("%f", &dato))){
        fprintf(stderr, "%s", ERROR_INPUT_OPTION );
        return EXIT_FAILURE;
    }
    while( ((c = getchar()) != '\n') && (c != EOF));

    /* Procesamiento */
    if(dato < RIGHT_ANGLE_VALUE){
        angle = ACUTE_ANGLE;
    }
    else if(dato > RIGHT_ANGLE_VALUE){
        angle = OBTUSE_ANGLE;
    }
    else
        angle = RIGHT_ANGLE;

    
    /* Salida */
    switch (angle)
    {
    case ACUTE_ANGLE:
        printf("%s",ACUTE_ANGLE_NAMING);
        break;

    case OBTUSE_ANGLE:
        printf("%s",OBTUSE_ANGLE_NAMING);
        break;

    case RIGHT_ANGLE:
        printf("%s",RIGHT_ANGLE_NAMING);
        break;
    
    default:
        break;
    }

    return EXIT_SUCCESS;

}
