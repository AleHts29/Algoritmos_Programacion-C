#include <stdio.h>


/*Imprime la tabla de Fahrenheit-Celsius*/


int main (){

		int fahr;
		printf("Conversion de temperatura\n\n");
		printf("%s\t%s\n","Fahr","Celsius");
		for(fahr = 300; fahr>= 0; fahr = fahr - 20)
			printf("%3d\t%6.2f\n", fahr,(5.0/9.0)*(fahr-32));

		return 0;
}