/* Figuara 7.10
Conversion de letras minusculas a mayusculas mediante un apuntador no constante a un dato no constante
*/

#include <stdio.h>
#include <ctype.h>


void convToMayuscula(char *ptrS);

int main(){
	char cadena[] = "caracteres y $32.98"; /*inicializa char arreglo*/
	printf("La cadena antes de la conversion es: %s\n",cadena);
	
	convToMayuscula(cadena);
	printf("\nLa cadena despues de la conversion es: %s\n", cadena);

	return 0; 
}


/* convierte cadena a mayuscula */
void convToMayuscula(char *ptrS){
	while(*ptrS != '\0'){  /*Compara cada caracter de la cadena*/
		if (islower(*ptrS)){
			*ptrS = toupper(*ptrS);
		}
		printf("%c",*ptrS ); /*imprime caracter por caracter ya modificada*/
		++ptrS; /* mueve ptrS al siguiente caracter */
	}
}