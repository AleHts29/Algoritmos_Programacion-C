/*Tiro de un dado 6000 veces*/

#include <stdio.h>
#include <stdlib.h>

int main(){

	int Frecuencia1 = 0;
	int Frecuencia2 = 0;
	int Frecuencia3 = 0;
	int Frecuencia4 = 0;
	int Frecuencia5 = 0;
	int Frecuencia6 = 0;

	int tiro; /*Representa lanzamientos*/
	int cara;


	/*Repetir 6000 veces y resume los resultados*/
	for(tiro = 1; tiro <= 6000; tiro++){
		cara = 1 + rand()%6;

		switch(cara){
			case 1:
				++Frecuencia1; break;
			case 2:
				++Frecuencia2; break;
			case 3:
				++Frecuencia3; break;
			case 4:
				++Frecuencia4; break;
			case 5:
				++Frecuencia5; break;
			case 6:
				++Frecuencia6; break;
		}

	}

	printf("%s%13s\n", "Cara", "Frecuencia" );

	printf("1: %13d\n",Frecuencia1 );
	printf("2: %13d\n",Frecuencia1 );
	printf("3: %13d\n",Frecuencia1 );
	printf("4: %13d\n",Frecuencia1 );
	printf("5: %13d\n",Frecuencia1 );
	printf("6: %13d\n",Frecuencia1 );

	return 0;


}