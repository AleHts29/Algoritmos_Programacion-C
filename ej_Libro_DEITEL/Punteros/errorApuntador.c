/* Figura 7.12
Intenta modificar un dato a traves de una apuntador no constante a un dato constante.
*/

#include <stdio.h>

void f( const int *ptrX);

int main(){
	
	int y;
	
	printf("%i\n",y);
	
	f(&y); /* f intenta una modificacion ilegal */
	printf("%i\n",y);
	
	return 0;
}


/* NO se puede utilizar ptrX para modificar el valor de la variable a la cual apunta */
void f ( const int *ptrX){
	//*ptrX = 100; /* error: no se modificar un onjetivo const */
}
