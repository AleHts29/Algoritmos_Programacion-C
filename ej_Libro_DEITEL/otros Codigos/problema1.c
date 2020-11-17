#include <stdio.h>
#include <stdlib.h>
#define Limite_inferior 100
#define Limete_superior 200


/*
Diseñe un algoritmo que, dado un número real que entra como dato, nos indique si está contenido dentro de los límites predeterminados. 
El límite inferior es de 100 y el superior de 200.
*/

int main (){

	float Numero = 0;
	printf("Introduzca un mumero: ");
	scanf("%f",&Numero);
	if (Numero >= Limite_inferior){
		if (Numero <= Limete_superior){
			printf("Esta dentro del intervalo\n" );
		}
		else 
			printf("Supera el limite maximo \n" );
	}
	else 
		printf("No alcaza el limite minimo \n" );

	return 0;

}



