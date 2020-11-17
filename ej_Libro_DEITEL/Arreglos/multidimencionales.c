/*
Figura 6.21
inicializacion de arreglos multidimencionales
*/

#include <stdio.h>


void despliegaArreglos (const int a[][3]);


/* La funcion main comienza la ejecucion del programa */

int main(){

	int arreglo1[2][3] = {{1,2,3},{4,5,6}};
	int arreglo2[2][3] = {1,2,3,4,5};
	int arreglo3[2][3] = {{1,2},{4}};


	printf("Los valores en el arreglo1 por linea son: \n");
	despliegaArreglos (arreglo1);

	printf("Los valores en el arreglo2 por linea son: \n");
	despliegaArreglos (arreglo2);

	printf("Los valores en el arreglo3 por linea son: \n");
	despliegaArreglos (arreglo3);	


	return 0;
}


/* funcion para mostrar un arreglo con dos filas y tres columnas*/
void despliegaArreglos (const int a[][3]){
	
	int i; /* contador de filas*/ 
	int j; /* contador de columnas*/

	/*Ciclo a traves de las filas*/
	for ( i = 0; i <= 1; i++){

		/* muestra los valores de las columnas */
		for ( j = 0; j <= 2; j++){
			printf("%d", a[i][j]);
		}

		printf("\n");
	}

}


