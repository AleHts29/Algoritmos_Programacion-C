
/* 5
a) Definir un tipo enumerativo mes_t con 12 símbolos que representen cada uno de los meses del año.
b) Escribir un fragmento de código que a partir del contenido de una variable de tipo mes_t, imprima por pantalla la descripción del mes (traducción).
*/

#include <stdio.h>
#include "lenguage.h"


typedef enum {
    MONTH_JANUARY,
    MONTH_FEBRUARY, 
    MONTH_MARCH,
    MONTH_APRIL,
    MONTH_MAY,
    MONTH_JUNE,
    MONTH_JULY,
    MONTH_AUGUST,
    MONTH_SEPTEMBER,
    MONTH_OCTOBER,
    MONTH_NOVEMBER,
    MONTH_DECEMBER
} month_t;


int main (void){

    month_t now; 

    for (now = MONTH_JANUARY; now <= MONTH_DECEMBER; now++ ){
        
        switch (now){
            case MONTH_JANUARY:
                printf("%s\n", JANUARY_NAME);
                break;
            case MONTH_FEBRUARY:
                printf("%s\n", FEBRUARY_NAME);
                break;
            case MONTH_MARCH:
                printf("%s\n", MARCH_NAME);
                break;
            case MONTH_APRIL:
                printf("%s\n", APRIL_NAME);
                break;
            case MONTH_MAY:
                printf("%s\n", MAY_NAME);
                break;
            case MONTH_JUNE:
                printf("%s\n", JUNE_NAME);
                break;
            case MONTH_JULY:
                printf("%s\n", JULY_NAME);
                break;
            case MONTH_AUGUST:
                printf("%s\n", AUGUST_NAME);
                break;
            case MONTH_SEPTEMBER:
                printf("%s\n", SEPTEMBER_NAME);
                break;
            case MONTH_OCTOBER:
                printf("%s\n", OCTUBER_NAME);
                break;
            case MONTH_NOVEMBER:
                printf("%s\n", NOVEMBER_NAME);
                break;
            default:
                printf("%s\n", DECEMBER_NAME);
                break;
        }
    }

    return 0;

}

