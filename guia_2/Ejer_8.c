/* 
8)
El nivel de grado de los alumnos que no han terminado los estudios en una universidad se determina mediante la siguiente tabla: 


Con esta información, escribir un programa que acepte el número de créditos que ha acumulado un alumno y determine en qué grado se encuentra, mostrando los resultados por pantalla.
*/


#include <stdio.h>

#define MSG_USER_WELCOME "Ingrese el numero de creditos acumulados"
#define MSG_ERROR "ERROR!! al momento del ingreso de datos"

#define YEAR_FIRST_NAME "Primer año"
#define YEAR_SECOND_NAME "Segundo año"
#define YEAR_THIRD_NAME "Tercer año"
#define YEAR_FOURTH_NAME "Cuarto año"


#define CREDIT_FIRST 47
#define CREDIT_SECOND 48
#define CREDIT_THIRD 96
#define CREDIT_FOURTH 144 


typedef enum {
    YEAR_FIRST = 1,
    YEAR_SECOND = 2,
    YEAR_THIRD = 3,
    YEAR_FOURTH = 4
} year_t;

int main(void){

    year_t year;
    int st, c;
    int num =0;

    printf("%s\n", MSG_USER_WELCOME);
    if (!(st=scanf("%i", &num))){
        fprintf(stderr, "%s\n", MSG_ERROR);
        return 1;
    }
    while ((c = getchar()) != '\n' && c != EOF);

    if (num <= CREDIT_FIRST)
        year = YEAR_FIRST;
     if (num >= CREDIT_SECOND) {
            year = YEAR_SECOND;
        } if (num >= CREDIT_THIRD) {
                year = YEAR_THIRD;
            }  if (num > CREDIT_FOURTH)
                    year = YEAR_FOURTH;

    switch (year) {
        case YEAR_FIRST:
            printf("%s\n", YEAR_FIRST_NAME);
            break;
        case YEAR_SECOND:
            printf("%s\n", YEAR_SECOND_NAME);
            break;
        case YEAR_THIRD:
            printf("%s\n", YEAR_THIRD_NAME);
            break;
        case YEAR_FOURTH:
            printf("%s\n", YEAR_FOURTH_NAME);
            break;
    }

    return 0;
}
