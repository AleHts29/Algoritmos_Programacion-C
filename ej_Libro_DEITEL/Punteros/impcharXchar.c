/* Figura 7.11
Impresion de una cadena caracter por caracter mediante un apuntador no constante a un dato constante.
*/

#include <stdio.h>

void impCaracteres(const char *ptrS);

int main(){

	char cadena [] = "Imprime los impCaracteres de una cadena";

	printf("La cadena es: \n");
	impCaracteres(cadena);
	printf("\n");

return 0;
}

/* ptrS no puede modificar el caracter al cual apunta, es decir, ptrS es un apuntador de solo lectura */
void impCaracteres(const char *ptrS){

	/* repite el ciclo para toda la cadena */
	for ( ; *ptrS != '\0'; ptrS++){
		printf("%c", *ptrS );
	}
}
