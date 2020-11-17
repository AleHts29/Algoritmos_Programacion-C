/*Randomizacion del programa de dados*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int i; 
	unsigned semilla;

	printf("Introduzca la semilla: ");
	//scanf("%u", &semilla);

	//srand(semilla);
	srand(time(NULL));

	for(i = 0; i <= 10; i++){
		printf("%10d", 1 + (rand()%6));

		/*Si el contador es div ente 5, comienza una nueva linea de salida*/
		if (i % 5 == 0){
			printf("\n");
		}
	}
	return 0;
}
