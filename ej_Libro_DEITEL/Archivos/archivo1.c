#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *archivo;
	char caracter;
	
	archivo = fopen("prueba.txt","a+");
	
	if (archivo == NULL)
        {
            printf("\nError de apertura del archivo. \n\n");
        }
        else
        {
            printf("\nEl contenido del archivo de prueba es \n\n");
            while((caracter = fgetc(archivo)) != EOF)
      	    {
      		  printf("%c",caracter);
            
      	    }
        }
        fprintf(archivo,"segundo Holaaaa\n");
        fprintf(archivo,"esto es una prueba\n");
        fclose(archivo);
	return 0;
}