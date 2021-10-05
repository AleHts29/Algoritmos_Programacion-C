/*8) Escribir un programa que permita calcular de forma iterativa el factorial de un número ingresado por teclado. Finalizado el ingreso de datos, mostrar el resultado por stdout. Realizar todas las validaciones que considere necesarias.
*/

#include <stdio.h>

#define MSG_FACTORIAL "Ingrese un numero para calcular el Factorial"
#define MSG_INVALID_DATA "ERROR: Tipo de dato no valido"
#define MSG_INVALID_NUMBER "El numero ingresado debe ser mayor a cero"

int main (void){
    size_t st;
    int num, c, i;
    double factorial;



    puts(MSG_FACTORIAL);
    /* Validación dato ingresado */
    if(!(st = scanf("%i", &num))){
        fprintf(stderr,"%s", MSG_INVALID_DATA);
        return 1;
    }
    while( (c = getchar()) != '\n' && c != EOF);

    factorial = 1;
    if(num < 0){
        fprintf(stderr,"%s", MSG_INVALID_NUMBER);
        return 1;
    }
    /* Caluculo del Factorial */
    for( i = 1; i <= num; i++ )
            factorial = factorial * i;
    
    fprintf(stdout, "El factorial del numero ingresado es: %f", factorial);
    return 0;

}
