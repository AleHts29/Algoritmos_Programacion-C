/*
Eleva al cubo una variable mediante una llamada por valor
*/


#include <stdio.h>

int cuboPorValor(int n);

int main(){

	int numero = 5;
	
	printf("El valor original de numero es: %d", numero );

	/*Pasa numero por valor a cuboPorValor*/
	numero = cuboPorValor(numero);

	printf("\nEl valor nuevo de numero es: %d\n", numero );
return 0;
}

int cuboPorValor(int n){
	
	return n * n * n; /*eleva al cubo la variable local n y devuelve el resultado*/

}

