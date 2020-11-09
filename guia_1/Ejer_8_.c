#include <stdio.h>

/*Ejemplo 8*/

int main (void){
    int fact, i, res;

    printf("Ingrese numero\n");
    scanf("%i", &fact);

    if(fact<0){
        printf("Numero invalido\n");
        return 1;
    }

    res = 1; 
    for (i=1; i <= fact; i++)
    res = res*i;

    printf("El factorial del nnumero ingresado es: %i \n", res);
    return 0;

}
