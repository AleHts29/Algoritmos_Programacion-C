/*
Ejeplo de alcance de variables:
-gobales
-locales automaticas
-locales static
*/

#include <stdio.h>

void usoLocal (void);
void usoStaticLocal (void);
void usoGlobal (void);

int x = 1; /*Variable global*/

int main (){

	int x = 5; /*Vvariable local en main*/

	printf("la x local fuera del alcance de main es: %d\n", x);
	
	/*Alcance interno del main*/
	{
		int x = 7; /*Variable local con nuevo alcance*/
		printf("La x local en el alcance interno del main es: %d\n", x);
	}

	printf("La x local en el alcance externo del main es: %d\n", x);

	usoLocal();
	usoStaticLocal();
	usoGlobal();
	usoLocal();
	usoStaticLocal();
	usoGlobal();

	printf("\nLa x local en main es:  %d\n",x );
	return 0;

}

/*Funciones*/

void usoLocal(void){
	int x = 25;

	printf("\nLa x local en usoLocal es %d despues de entrar de entrar usoLocal",x );
	x++;
	printf("\nLa x local en usoLocal es %d antes de salir de usoLocal\n",x );
}

void usoStaticLocal(void){
	static int x = 50;

	printf("\nLa x local estatica es %d al entrar a usoStaticLocal",x );
	x++;
	printf("\nLa x local estatica es %d al salir de usoStaticLocal\n",x );
}


void usoGlobal(void){
	
	printf("\nLa x global es %d al entrar a usoGlobal",x );
	x *= 10;
	printf("\nLa x global es %d al salir de usoGlobal\n",x );
}






