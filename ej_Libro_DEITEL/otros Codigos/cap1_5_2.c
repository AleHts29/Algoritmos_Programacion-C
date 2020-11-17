#include <stdio.h>

/*Cuenta los caracteres de la entrada*/

int main(){

	long nc;

	nc = 0;
	while(getchar() != EOF)
		++nc;
	printf("%ld\n", nc);
}