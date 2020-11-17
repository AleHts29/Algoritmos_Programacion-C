#include <stdio.h>


/*Imprime la tabla de Fahrenheit-Celsius*/

#define LOWER 0 /*Limite inferior*/
#define UPPER 300 /*limite superior*/
#define STEP 20 /*tamaño del incremento*/



int main (){

		int fahr;
		printf("Conversion de temperatura\n\n");
		printf("%s\t%s\n","Fahr","Celsius");
		for(fahr = LOWER; fahr<= UPPER; fahr = fahr + STEP)
			printf("%3d\t%6.2f\n", fahr,(5.0/9.0)*(fahr-32));

		return 0;
}