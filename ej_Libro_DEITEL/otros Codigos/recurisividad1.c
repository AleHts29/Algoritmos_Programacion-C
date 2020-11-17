/*
Calculo de factorial con una funcion recursiva
*/


#include <stdio.h>

long factorial (long numero);

int main(){

	int i; 

	for (i = 0; i <= 10; i++){
		printf("%2d! = %ld\n",i, factorial(i) );
	}
	return 0;
}

/*Funcion recursiva*/

long factorial(long numero){
	long rta;
	if(numero <= 1)
		rta = 1;
	else
		rta = numero * factorial(numero-1);

	return rta;

}


