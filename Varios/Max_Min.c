#include <stdio.h>
#define MAX_INPUT_VAL 5

int main (void){

    int max, min, valor, i;
    int st, c;
    for(i = 1; i < MAX_INPUT_VAL; i++){
        printf("Ingrese un valor numerico: \n");
        if (! (st = scanf("%d", &valor))){
            fprintf(stderr, "%s\n", "Error de ingreso");
            return 1;
        }
        while ((c = getchar()) != '\n' && c != EOF);


    

        if(i == 1)
            min = max = valor;

        if (valor < min)
            min = valor;
        if (max < valor)
            max = valor;
    }

    printf("Valor maximo: %i\n", max);
    printf("Valor minimo: %i\n", min);
    
    return 0;
}
