/*
32:
Escribir un programa que dado un vector de un tipo determinado (float, double o entero) y una variable de un tipo enumerativo extreme_t, halle el máximo o el mínimo elemento del arreglo en función de la variable de control y lo muestre por pantalla.
*/


#include <stdio.h>

#define MAX_STR 1222
#define MAXI "El numero mayor fue: "
#define MINI "El numero menor fue: "


/*TODO: Funciona, pero falta implementar el tipo enum*/
typedef enum  {
    MAXIMUM,
    MINIMUN
}extreme_t;

int main(void){

    int vector[MAX_STR]={
        1, 2, 3, 5, 8, 85, 110,-1,5 
    };

    int MAX, MIN;
    int i;

    MAX=MIN=vector[0];

    for (i = 1; vector[i] != '\0'; i++)
    {
        if (vector[i]<MIN)
        {
            MIN = vector[i];
        } else
        {
            if (vector[i]>MAX)
            {
                MAX = vector[i];
            }
        }
    }
    
    fprintf(stdout, "%s%d\n", MAXI, MAX);
    fprintf(stdout, "%s%d\n", MINI, MIN);

    return 0;
    
}
