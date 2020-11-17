/*
Inicializa los elementos del arreglo S a los enteros pares de 2 a 20
*/

#include <stdio.h>
#define TAMANIO 20 

int main(){

	int s[TAMANIO];
	int j;

	printf("\n%s%10s\n", "Elemento", "Valor" );
	for (j = 0; j < TAMANIO; j++){
		s[j] = 2 + 2*j;
	printf("s[%d]%10d\n",j, s[j] );
	}
	return 0;

}