/*
7) Mediante el uso de una instrucción do, escribir un programa para validar y aceptar una calificación. El programa debe aceptar una calificación continuamente mientras no se introduzcan calificaciones inválidas. Una calificación inválida es cualquiera menor que 0 o mayor que 100. Si la calificación es inválida, el programa debe imprimir un mensaje, de otra forma, la calificación debe sumarse al total de calificaciones ingresadas. Por último, debe desplegar el total.
*/


#include <stdio.h>


int main (void){

    int Calificacion, Total_Calificacion;
    int d, st;

    Calificacion = 0;
    Total_Calificacion = 0;

    do{
        Total_Calificacion += Calificacion;
        printf("Ingrese Calificacion: \n");
        if(!(st = scanf("%d", &Calificacion))){
            fprintf(stderr,"%s\n","ERROR DE INGRESO DE DATO");
            return 1;
        }
        while((d = getchar()) != '\n' && d != EOF);

        if (Calificacion < 0 || Calificacion > 100){
            printf("La calificacion %i invalida\n", Calificacion);
        }

    }while(Calificacion >= 0 && Calificacion <= 100);
        printf("El total de calificaciones es: %i\n", Total_Calificacion);
  
    return 0; 

}
