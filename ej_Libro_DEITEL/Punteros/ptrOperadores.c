/*Uso de los operadores & y * */

#include <stdio.h>

int main (){

	int a; 
	int *ptrA;

	a = 7;
	ptrA = &a;

	printf("La direccion de a es: %p\n"
		   "\nEl valor de ptrA es: %p", &a, ptrA);

	printf("\n\nEl valor de a es: %d\n"
		   "\nEl valor de *ptrA es: %d", a, *ptrA);

	printf("\n\nMuestra de que * y & son complementos uno del otro\n &*ptrA = %p"
		   "\n*&ptrA = %p\n", &*ptrA, *&ptrA);

	return 0;

}












