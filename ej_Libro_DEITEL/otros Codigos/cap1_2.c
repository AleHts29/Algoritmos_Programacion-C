
/*
El siguiente programa utiliza la formula °C=(5/9)(°F-32) para una tabla de temperatura Fahenheit
y si equivalente en Celsius.
*/

#include <stdio.h>

/* imprimir tabla °F a °C para los valores de 0 a 300 */

int main(){

	float fahr, Celsius;
	int lower, upper, step;

	lower = 0; 		/*Limite inferior de la tabla de temp*/
	upper = 300; 	/*Limite superior*/
	step = 20; 		/*Tamaño del incremento*/

	printf("Conversion de temperatura\n");
	fahr = lower;
	while (fahr <= upper){
		Celsius = (5.0/9.0)*(fahr-32.0);
		
		printf("%3.0f\t%6.2f\n",fahr, Celsius); /*Si aumentamos a cada %d, los numeros impresos seran justificados hacia su derecha*/
		fahr=fahr+step;
	 }

	return 0;
}






