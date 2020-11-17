#include <stdio.h>
#include <stdlib.h>


int main (){

	int i; 

	for(i = 1; i<=20; i++){
		
		/*Obtiene y despliega un numero aleatorio entre 1 a 6*/
		printf("%10d", 1 +(rand()%6) );

		/*Si el contador es div ente 5, comienza una nueva linea de salida*/
		if((i % 5) == 0){
			printf("\n");
		}
	}
	return 0;
}