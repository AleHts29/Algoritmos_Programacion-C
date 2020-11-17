/*
Eleva al cubo una variable mediante una llamada por referencia, con un
apuntador como argumento.
*/

#include <stdio.h>

void cuboPorReferencia(int *ptrN);

int main(){

	int numero = 5;
	printf("El valor original de numero es: %d", numero );

	/*Pasa la direccion de numero  a cuboPorReferencia*/
	cuboPorReferencia(&numero);
	
	printf("\nEl valor nuevo de numero es: %d\n", numero );

return 0;

}

void cuboPorReferencia( int *ptrN){
	*ptrN = *ptrN * *ptrN * *ptrN;
}

