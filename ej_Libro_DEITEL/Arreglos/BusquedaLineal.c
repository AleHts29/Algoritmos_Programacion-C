/*
Figura 6.18

La busqueda lineal, compara cada elemento de un arreglo con la clave de busqueda. Debido a que el arreglo no se encuentra en un orden particular, la
probabilidad de que el valor se encuentre en el primer elemento o en el ultimo, es nula. Por lo tanto, en promedio, el programa tendra que comparar
la clave de busqueda con la mitad de los elemtos del arreglo.
*/

#include <stdio.h>
#define TAMANIO 10

int busquedaLineal(const int arreglo[], int llave, int tamanio);

int main(){

	int a [TAMANIO]; /*Se crea el arreglo*/
	int x; /*Count de elemento de 0 a 99*/
	int llaveBusqueda; /*Valor para localizar el arreglo a*/
	int elemento; /*Variable para almacenar la ubicacion de la llaveBusqueda o -1*/

	/*Crea los datos*/
	for (x = 0; x < TAMANIO; x++){
		a[x] = 2*x;
	}
	printf("Introduzca la llave de busqueda entera: \n");
	scanf("%d", &llaveBusqueda);

	/*Intenta localizar llaveBusqueda en el arreglo a */
	elemento = busquedaLineal (a, llaveBusqueda, TAMANIO);

	/*Resultados*/
	if (elemento != -1){
		printf("Encontre el valor en el elemento %d\n", elemento );
	}
	else{
		printf("Valor no encontrado\n");
	}
	return 0; 
}


/*Compara la llava con cada elemento del arreglo hasta que localiza el elemento o alcanza el final del arreglo*/
int busquedaLineal(const int arreglo[], int llave, int tamanio){

	int n;

	/*Clliclo a traves del arreglo*/
	for (n = 0; n < tamanio; ++n){

		if (arreglo[n] == llave){
			return n;
		}
	}

	return -1; /*Llave no encontrada*/

}









