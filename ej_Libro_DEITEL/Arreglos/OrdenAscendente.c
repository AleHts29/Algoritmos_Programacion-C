/*
Este programa ordena los valores de un arreglo en forma ascendente
*/

#include <stdio.h>
#define TAMANIO 10

int main()

{
	int a [TAMANIO] = {2,4,1,5,7,8,2,1,8,3};
	int pasada; /*Contador de pasada*/
	int i; /*Contodor de comparaciones*/
	int alamacena; /*Ubicacion temporal utilizada para el intercambio de elementos*/

	printf("Elementos de datos en orden orioginal \n");

	for (i = 0; i < TAMANIO; i++){
		printf("%4d", a[i] );
	}

	/*Ordenamiento burbuja*/
	/*Ciclo para controlar el numero de pasos*/
	for(pasada = 1; pasada < TAMANIO; pasada++){

		/*Ciclo para controlar el numero de comparaciones por pasada*/
		for(i = 0; i < TAMANIO; i++){

			/*
			Compara los elementos adyacentes y los intercambia si el primer elemto es mayor 
			que el segundo
			*/
			if(a[i] > a[i+1]){
				alamacena = a[i];
				a[i] = a[i+1];
				a[i+1] = alamacena;			
			}
		}
		printf("\n");
        for (i = 0; i < TAMANIO; i++){
			printf("%4d", a[i] );
		}
		printf(" | Pasada numero: %d",pasada);
		
	}


printf("\n\nElementos de datos en orden ascendente \n");
	
	for (i = 0; i < TAMANIO; i++){
		printf("%4d", a[i] );
	}

	printf("\n");

	return 0;

}
