#include <stdio.h>
#define ESTUDIANTES 3
#define EXAMENES 4

int minimo (const int calificaciones[][EXAMENES], int alumnos, int examenes);
int maximo (const int calificaciones[][EXAMENES], int alumnos, int examenes);
double promedio (const int estableceCalif[], int examenes);
void despliegaArreglo(const int calificaciones[][EXAMENES], int alumnos, int examenes);


int main (void){
    int estudiante;

    /*Inicializa las calificaciones para tres estudiantes (filas)*/
    const int calificacionesEstudiantes[ESTUDIANTES][EXAMENES] = {{77, 68, 86, 73},
                                                                  {96, 87, 89, 78},
                                                                  {70, 90, 86, 81}};

    /*Muestra el arreglo calificacionesEstudiantes*/
    printf( "El arreglo es:\n" );
    despliegaArreglo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES);

    /*Determina el valor mas pequeño y el valor mas grande de las calificaciones */
    printf("\n\nCalificacion mas baja: %d\nCalificacion mas alta: %d\n",
        minimo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES),
        maximo(calificacionesEstudiantes, ESTUDIANTES, EXAMENES));

    /*Calcula el promedio de calificaciones de cada estudiante*/
    for( estudiante = 0; estudiante < ESTUDIANTES; estudiante++){
        printf("El promedio de calificacion del estudiante %d es %.2f\n",estudiante,promedio(calificacionesEstudiantes[estudiante],EXAMENES));
     
    }
    return 0;
}

/*Encuentra la calificacion minima*/
int minimo(const int calificaciones[][EXAMENES], int alumnos, int examenes){
    int i; 
    int j; 
    int caliBaja = 100; /*inicializa la calificacin maas alta posible*/

    /*ciclo a traves de las filas de calificaciones*/
    for (i = 0; i < alumnos; i++){
        
        /*Ciclo a traves de las columnas de calificaciones*/
        for ( j = 0; j < examenes; j++){
            if ( calificaciones[i][j] < caliBaja){
                caliBaja = calificaciones[i][j];
            }
        }
    }
    return caliBaja;
}

/*Encuentra la calificacion mas alta*/
int maximo(const int calificaciones[][EXAMENES], int alumnos, int examenes){
    int i; 
    int j; 
    int caliAlta = 0; /*inicializa la calificacin mas baja posible*/

    /*ciclo a traves de las filas de calificaciones*/
    for (i = 0; i < alumnos; i++){
        
        /*Ciclo a traves de las columnas de calificaciones*/
        for ( j = 0; j < examenes; j++){
            if ( calificaciones[i][j] > caliAlta){
                caliAlta = calificaciones[i][j];
            }
        }
    }
    return caliAlta;
}

/*Determina la calificacion promedio para un estudiante en especial*/
double promedio(const int conjuntoDeCalificaciones[], int examenes ){
    int i; 
    int total = 0;

    /*total de calificaciones de un estudiante*/
    for(i = 0; i < examenes; i++){
        total += conjuntoDeCalificaciones[i];
    }
    return (double) total / examenes; /*promedio*/
}

/*imprime el arreglo*/
void despliegaArreglo( const int calificacinoes[][EXAMENES],int alumnos, int examenes){
    int i;
    int j; 

    /*Encabezado*/
    printf("                             [0]  [1]  [2]  [3]");

    /*Muestra las calificaciones en forma tabular*/
    for( i = 0; i < alumnos; i++){

        /*Muestra la etiqueta de la fila*/
        printf("\ncalificacionesEstudiantes[%d] ", i);

        /*Muestra las calificaciones de un estudiante*/
        for ( j = 0; j < examenes; j++){
            printf( "%-5d", calificacinoes[i][j]);
        }
    }
}
    
