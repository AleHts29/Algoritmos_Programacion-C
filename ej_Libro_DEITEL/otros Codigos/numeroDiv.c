/*
 Programe un algoritmo que, dados dos números enteros que entran como datos, indique si uno es divisor del otro.
*/

#include <stdio.h>

int main(){


	int Num1=0, Num2=0;
		printf("Introdusca un numero: \n");
		scanf("%i", &Num1);
		printf("Introdusca un numero: \n");
		scanf("%i", &Num2);

		if (Num1>=Num2){

			if(Num1%Num2==0){
				printf("%i: es divisor de %i\n",Num2,Num1);
			}
			else
				printf("%i: No es Divisor de %i\n\n", Num2,Num1);
		}
		else
			printf("No es divisor porque %i es mayor\n",Num2);
	return 0; 
		

}