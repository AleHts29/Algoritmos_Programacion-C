
	#include <stdio.h>
	#include <stdlib.h>

	int main(){

		FILE *archivo;
		system("clear");

		/*Creamos el archivo*/
		archivo = fopen("mi_archivo.txt","a");

		fprintf(archivo, " Esto es una prueva..");
		fprintf(archivo, "\nAñadimos una cadena de texto nueva");
		printf("Tu archivo ha sido creado!!\n");

		fclose(archivo);

		return 0;
	}

