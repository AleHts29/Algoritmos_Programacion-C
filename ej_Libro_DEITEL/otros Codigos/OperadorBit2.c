#include <stdio.h>

#define AZUL		1 << 7
#define VERDE 		1 << 6
#define ROJO 		1 << 5
#define NARANJA 	1 << 4
#define AMARILLO 	1 << 3
#define PARDO	 	1 << 2
#define BLANCO 		1 << 1
#define NEGRO	 	1 << 0

void operaciones( unsigned char colores ){

	colores &= ~ (VERDE); /*Apagamos el Verde*/
	if (colores & AZUL){
		printf("AZUL\n" );
	}

	if (colores & VERDE){
		printf("VERDE\n" );
	}

	if (colores & ROJO){
		printf("ROJO\n" );
	}

	if (colores & NARANJA){
		printf("NARANJA\n" );
	}

	if (colores & AMARILLO){
		printf("AMARILLO\n" );
	}

	if (colores & PARDO){
		printf("PARDO\n" );
	}

	if (colores & BLANCO){
		printf("BLANCO\n" );
	}

	if (colores & NEGRO){
		printf("NEGRO\n" );
	}
}

int main (){
	operaciones (AZUL | VERDE | PARDO);
}