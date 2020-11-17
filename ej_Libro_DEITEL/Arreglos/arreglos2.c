/*
A cuarenta estudiantes se les preguntó respecto a la calidad de la comida de la cafetería escolar, 
en una escala de 1 a 10 (1 significa muy mala y 10 significa excelente). 
Coloque las 40 respuestas en un arreglo entero que resuma los resultados de la encuesta.
*/

#include <stdio.h>
#define TAMANIO_RESPUESTA 40
#define TAMANIO_FRECUENCIA 11


int main (){
	int respuesta; /*Contador que recorre las 40 respuestas*/
	int rango; /*Contador de rangos de 1 a 10*/

	/*inicializa los contadores de frecuencia a 0*/
	int frecuencia[TAMANIO_FRECUENCIA] = {0}; 

	/*respuestas del examen*/
	int respuestas[TAMANIO_RESPUESTA] = {1,2,3,5,9,2,7,1,5,3,
		1,5,3,2,6,7,3,9,2,4, 6,6,4,1,8,9,5,4,3,3, 4,2,3,3,4,8,9,9,1,5};

	for(respuesta = 0; respuesta < TAMANIO_RESPUESTA; respuesta++){

		/*por cada respuesta, selecciona el valor de un elemento del arreglo respuestas
		 y utiliza dicho valor como subindice en el arreglo frecuencia para determinar el
		 elemento a incrementar*/
		++frecuencia[respuestas[respuesta]];
		
/* este codigo muestra de forma hardcodeada como se realiza el incremnto anterior
	int f = ++frecuencia[1];
	int a = ++frecuencia[1];
	int s = ++frecuencia[2];
	int d = ++frecuencia[1];

	printf("%d\n", f );
	printf("%d\n", a );
	printf("%d\n", s );
	printf("%d\n", d );
*/
	}

	printf("%s%17s\n","Rango/Calificacion", "Frecuencia");

	/*Muestra la frecuencia en forma tabular*/
	for(rango = 1; rango < TAMANIO_FRECUENCIA; rango++){
		printf("%6d%25d\n",rango, frecuencia[rango] );
	}

	return 0;	

}


