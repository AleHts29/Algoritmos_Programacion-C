/*
Este pregrama introduce el tema del analisis de datos. Calcula la media, la mediana y la moda
de los datos.
*/

#include <stdio.h>
#define TAMANIO 99

/*Prototipos de las funciones*/
void media (const int resp[]);
void mediana (int resp[]);
void moda (int frec[], const int resp[]);
void ordenamientoBurbuja (int a[]);
void imprimeArreglo (const int a[]);

int main (){
	int frecuencia[10] = {0}; /*inicializa el arreglo de frecuencia*/

	/*inicializa el arreglo respuesta*/
	int respuesta [ TAMANIO ] = {

		6,7,1,3,4,5,6,3,2,9,
		3,4,1,3,4,4,6,0,2,2,
		3,4,2,2,5,7,8,9,6,5,
		1,9,6,4,3,6,2,8,8,3,
		4,5,6,2,1,7,8,0,2,1,
		3,2,5,6,3,2,8,9,0,3,
		2,4,8,1,1,2,9,6,4,2,
		3,2,2,1,8,5,4,3,4,5,
		1,1,2,2,3,5,0,9,6,5,
		6,7,3,2,3,8,9,7,3
	};

	/*Procesa las respuestas*/
	media (respuesta);
	mediana (respuesta);
	moda (frecuencia, respuesta);

	return 0; 
}

/*Calcula el promedio de todos los valores de las respuestas*/
void media(const int resp[]){
	int j; /*contador del total de elemtos del arreglo*/
	int total = 0; /*Variable para mantener la suma de los elemtos del arreglo*/

	printf("%s\n%s\n%s\n", "********", "Media", "********" );

	/*total de los valores de las respuestas*/
	for (j = 0; j < TAMANIO; j++){
		total += resp[j];
	}

	printf("La Media es el valor promedio de los datos. \n"
			"La media es igual al total de\n"
			"todos los elementos de datos divididos por\n"
			"el numero de elementos de datos (%d). La media\n"
			"en esta ejecucion es: %d / %d = %.4f\n\n",
			TAMANIO, total, TAMANIO, (double) total / TAMANIO );
}


/*Ordena el arreglo y determina el valor de la mediana*/
void mediana(int resp[]){
	printf("%s\n%s\n%s\n%s\n", "********", "Mediana", "********",
			"El arreglo de respuestas desordenadas es" );

	imprimeArreglo(resp); /*Muestra el arreglo desordenado*/
	ordenamientoBurbuja(resp); /*Ordena el arreglo*/


	printf("\n\nEl arreglo ordenado es");
	imprimeArreglo(resp); /*Muestra el arreglo ordendor*/

	/*Muestra la mediana*/
	printf("\n\nLa mediana es el elemento %d del \n"
			"arreglo ordenado de elementos %d. \n"
			"Para esta ejecucion la mediana es %d\n\n",
			TAMANIO / 2, TAMANIO, resp[TAMANIO/2]);
}


/*determina las respuestas mas frecuentes*/
void moda(int frec[], const int resp[]){
		int rango; /* Contador para acceder a los elementos de 1 a 9 del arrreglo frec */
		int j; /* Contador para sumar los elementos de 0 a 98 de arreglos respuesta*/
		int h; /*Contador para desplegar histogramas de los elementos en el arreglo frec*/
		int masGrande = 0; /*Representa la frecuencia mas grande*/
		int valorModa = 0; /*Representa la respuesta mas frecuente*/


		printf("\n%s\n%s\n%s\n", "********", "Moda", "********" );

		/*inicializa las frecuencias a 0*/
		for(rango = 1; rango <= 9; rango++){
			frec[rango] = 0;
		}

		/*suma las frecuencias*/
		for(j = 0; j<TAMANIO; j++){
			++frec[resp[j]];
		}

		/*muestra los encabezados de las colomnas*/
		printf("%s%11s%19s\n\n%57s\n\n", 
			   "Respuesta", "Frecuencia","Histograma");

		/*Muestra los resultados*/
		for(rango = 1; rango <= 9; rango++){
			printf( "%8d%11d	     		          ",rango, frec[rango] );

		/*Sigue la pista del valor de la moda y del valor de la frecuencia mas grande*/
			if(frec[rango]>masGrande){
				masGrande = frec [rango];
				valorModa = rango;
			}

		/*Muestra los histogramas de barras que representan el valor de a frecuencia*/
			for(h = 1; h<= frec [rango]; h++){
				printf("*");
			}
			printf("\n");
		}

		/*Despliega el valor de la moda*/
		printf("La moda es el valor mas frecuente. \n"
				"Par esta ejecucion la moda es %d el cual ocurrio"
				"%d veces. \n",valorModa, masGrande);
	}


/*Funcion que ordena un arreglo mediante el algoritmo del metodo de la burbuja algorithm*/
void ordenamientoBurbuja(int a[]){

	int pasada;
	int j;
	int almacena;

	/*Ciclo para controlar el numero de pasadas*/
	for(pasada = 1; pasada < TAMANIO; pasada++){

		/*Ciclo para controlar el numero de comparaciones por pasada*/
		for( j = 0; j < TAMANIO -1; j++ ){

			/*Intercambia los elemtos si no se encuentran en orden*/
			if(a[j] > a[j+1]){
				almacena = a[j];
				a[j] = a[j+1];
				a[j+1] = almacena;
			}
		}
	}
}


/*Muestra el contenido del arreglo (20 valores por linea)*/
void imprimeArreglo(const int a[]){
	int j; 

	/*Muestra el contenido del arreglo*/
	for (j = 0; j < TAMANIO; j++){
		
		/*Comienza una linea cada 20 valores*/
		if (j % 20 == 0){
			printf("\n");
		}
		printf("%2d", a[j] );
	}
}











