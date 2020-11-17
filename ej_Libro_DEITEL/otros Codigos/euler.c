#include <stdio.h>

/*
Escriba un programa que calcue el valor de e^x = 1+(x/1!)+(x^2/2!)+(x^3/3!)+...
formula del factorial: n!=n*(n-1)*n(n-2)*n(n-3)...1
*/
int main(){
int i, j, factorial, potencia, X;
float e;

printf("Introduce un valor de X: \n");
scanf("%d",&X);

	/* Calculo los primeros 10 valores para e^x */
	e=1.000;
	for(i=1; i<=10; i++){

		/* Calculo x elevado a una potencia i */
		potencia = 1;
		for(j=1; j<=i; j++)
			potencia = potencia*X;

		/* Calculo el factorial de i */
		factorial = 1; 
		for(j=i; j>0; j--)
		factorial = factorial*j;

		/* Acumula el valor de e */
		e = e +(potencia/factorial);
	}
	printf("El valor de e^x: %f\n", e);

	return 0; 
}
