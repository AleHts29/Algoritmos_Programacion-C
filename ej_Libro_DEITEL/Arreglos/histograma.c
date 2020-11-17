/*
Programa de impresionde histograma
*/

#include <stdio.h>
#define TAMANIO 10

int main (){
	int n[TAMANIO] = {24,3,7,15,23,14,25,36,17,41};
	int i; /*Contador for externo para los elementos del arreglo*/
	int j; /*Contador for interno, cuenta "*" en cada barra del histograma*/

	printf("\t%s%13s%17s\n","Elemnto", "Valor", "Histograma");

	/*Para cada elemento del arrreglo n, muestra una barra en el histograma*/
	for(i = 0; i < TAMANIO; i++){
		printf("\t  n[%d]%13d        ", i, n[i] );

		for(j = 1; j <= n[i]; j++){
			printf("%c", '*' );
		}
		printf("\n");
	}
	return 0;
}