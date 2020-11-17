/*Paso de arreglos y de elementos de una arreglo a funciones*/


#include <stdio.h>
#define TAMANIO 5

void modificaArreglo(int b[], int tamanio);
void modificaElemento( int e);


int main(){
	int a[TAMANIO] = {0,1,2,3,4};
	int i;

	printf("Efectos de pasar arreglos completos por referencia: \n\n"
		   "Los valores del arreglo original son: \n");

	/*Muestra el arreglo original*/
	for(i = 0; i < TAMANIO; i++){
		printf("%3d", a[i]);
	}
	printf("\n");

	/*Pasa el arreglo a modificaArreglo por referencia*/
	modificaArreglo (a, TAMANIO);
	printf("Los valores del arreglo modificado son: \n");

	/*Muestra el arreglo modificado*/
	for(i = 0; i < TAMANIO; i++){
		printf("%3d", a[i]);
	}

	/*Muestra el valor de a[3]*/
	printf("\n\n\n Efectos de pasar un elemento del arreglo"
			"por valor: \n\nEl valor de a[3] es %d\n", a[3]);

	modificaElemento (a[3]); 

	/*Muestra el valor de a[3]*/
	printf("El valor de a[3] es %d\n", a[3] );
	return 0; 
}

/* "b" apunta al arreglo ariginal "a" en menmoria */
void modificaArreglo(int b[], int tamanio){
	int j;

	/*Multiplica cada elemento del arreglo por 2*/
	for(j = 0; j < tamanio; j++){
		b[j] *= 2; 
	}
}


/* "e" es una copia local del elemento a[3] del arreglo que se paso desde main */
void modificaElemento(int e){

	/* multiplica el parametro por 2 */
	printf("El valor en modificaElemento es %d\n", e *= 2 );


}









