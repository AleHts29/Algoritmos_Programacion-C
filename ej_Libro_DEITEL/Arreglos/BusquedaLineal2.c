/*
Figura 6.19
BUsqueda binaria dentro de un arreglo
*/

#include <stdio.h>
#define TAMANIO 15

/*Funciones*/
int busquedaBinaria (const int b[], int clavedeBusqueda, int bajo, int alto);
void despliegaEncabezado (void);
void despliegaLinea (const int b[], int bajo, int medio, int alto);

int main (){
	int a[TAMANIO]; 
	int i; /*Contador para inicializar los elementos de 0 a 14 del arreglo a*/
	int llave; /*Valor a localizar en el arreglo a */
	int resultado; /* variable para almacenar la ubicacion de la llave o -1*/

	/*Crea los datos*/
	for (i = 0; i < TAMANIO; i++){
		a[i] = 2*i;
	}

	printf("Introduzca un numero entre 0 y 28: ");
	scanf("%d", &llave);

	despliegaEncabezado();

	/*Busca la llave en el arreglo a*/
	resultado = busquedaBinaria (a, llave, 0, TAMANIO-1);

	/*despliega los resultados*/
	if (resultado != -1){
		printf("\n%d  se encuentra en el elemento %d del arreglo\n", llave, resultado);
	}
	else{
		printf("\n%d no se encuentra\n", llave);
	}

	return 0; 
}



/*Funcion para realizar la busqueda binaria en arreglo*/
int busquedaBinaria (const int b[], int clavedeBusqueda, int bajo, int alto){
	
	int central; /* Variable para mantener el elemnto central del arreglo */

	/*Realizar el cliclo hasta que el subindice bajo es mayor que el subindice alto*/
	while (bajo <= alto){
		
		/*Determina el elemento central del subarreglo en el que se busca*/
		central = (bajo + alto) / 2;

		/*Despliega el subarreglo utilizado en este ciclo*/
		despliegaLinea (b, bajo, central, alto);

		/*Si claveDeBusqueda coincide con el elemento central, devuelve central*/
		if (clavedeBusqueda == b[central]){
			return central;
		}

		/*Si claveDeBusqueda es menor que el elemento central, establece el nuevo valor de alto*/
		else if (clavedeBusqueda < b[central]){
			alto = central -1; /*busca en la mitad inferior del arreglo*/
		}

		/*Si claveDebusqueda es mayor que el elemto central, establece el nuevo valor para bajo*/

		else{
			bajo = central +1; /*Busca en la mitad superior del arreglo*/
		}
	}
	return -1; /*Nose encontro calve de busqueda*/
}



void despliegaEncabezado (void){
	int i; /*Contador*/
	printf ("\nSubindices: \n");

	/*muestra el encabezado de la columna*/
	for (i = 0; i < TAMANIO; i++){
		printf("%3d", i);
	}

	printf("\n");

	/*Muestra una linea de caracteres - */
	for (i = 1; i <= 4 * TAMANIO; i++ ){
		printf("-");
	}

	printf("\n"); 
}


/*Imprime una linea de salida que muestra la parte actual del arreglo que se esta procesando*/
void despliegaLinea( const int b[], int baj, int cen, int alt){
	int i;

	/*Ciclo a traves del arreglo completo*/
	for (i = 0; i < TAMANIO; i++){

		/* despliega espacios se se encuentra fuera del rango actual del subarreglo */
		if (i < baj || i > alt){
			printf("   ");
		}
		else if (i == cen){
			printf("%3d*", b[i] ); /* marca el valor central */
		}
		else {
			printf("%3d ", b[i] );
		}
	}

	printf("\n");
}














