/*
5) Escribir un programa que calcule la raíz cuadrada y el inverso de un número ingresado por el teclado. Antes de calcular la raíz cuadrada se debe verificar que el número sea no negativo y antes de calcular el inverso, se debe verificar que el número no sea cero.
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MSG_RAIZ "Calcule la Raiz Cuadrada de:"
#define MSG_INVERSO "Calcule el Inverso Multiplicativo de:"
#define MSG_INVALID_DATA "ERROR: TIpo de dato no valido"
#define MSG_RIAZ_CERO "El numero ingresado debe ser mayor a cero"
#define MSG_INVERSO_CERO "No se puede dividir entre cero"

int main(void){
    int c;
    size_t st = 0;
    float numRaiz = 0;
    float numInverso = 0;

    
puts(MSG_RAIZ);
    if(!(st = scanf("%f", &numRaiz))){
        fprintf(stderr,"%s", MSG_INVALID_DATA);
        return 1;
    }
    else{
        while ((c = getchar()) != '\n' && c != EOF);
        if(numRaiz < 0){
            fprintf(stderr,"%s", MSG_RIAZ_CERO);
            return 1;
        }
        numRaiz = sqrt(numRaiz);
        printf("la raiz cuadrada del numero ingresado es: %.2f \n", numRaiz);
    }

puts(MSG_INVERSO);
    if(!(st = scanf("%f", &numInverso))){
        fprintf(stderr,"%s", MSG_INVALID_DATA);
        return 1;
    }
    else{
        if(numInverso == 0){
            fprintf(stderr,"%s", MSG_INVERSO_CERO);
            return 1;
        }
        numInverso = 1/numInverso;
        printf("El inverso multiplicativo del numero ingresado es: %.2f\n", numInverso);
    }

   return 0;
}

