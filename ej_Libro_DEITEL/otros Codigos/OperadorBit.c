#include <stdio.h>

int main(){

	char numero1 = 5;
	char numero2 = 7;
	char resultado1 = numero1 | numero2; 
	char resultado2 = numero1 >> 1; /* 5/2 = 2.5 = 2 */  
	char resultado3 = numero1 << 1; /* 5*2 = 10 */ 

	printf("Operacion OR: %i\n\n", resultado1 );
	printf("Corrimiento >> : %i\n\n", resultado2 );
	printf("Corrimiento << : %i\n\n", resultado3 );

	char numero = resultado1;


/*Funcion para pasar de decimal a binario*/
	unsigned int contador = 128;

	for(contador; contador > 0; contador >>= 1 ){
		if(contador & numero){
			printf("1");
		}
		else
			printf("0");
	}
	printf("\n");
}

7 6 5 4 3 2 1 0
        0 1 0 1   // 5 
        0 0 1 0	  // 5 >> 1	