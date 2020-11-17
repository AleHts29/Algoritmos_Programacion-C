/*
El jugador tira dos dados. Cada dado tiene seis caras. 
Estas caras contienen 1, 2, 3, 4, 5 y 6 puntos. Una vez que los dados caen, 
se calcula la suma de los puntos que se encuentran en las caras que ven hacia arriba. 
Si la su- ma es igual a 7 u 11 en el primer tiro, el jugador gana. Si la suma es 2, 3 o 12 
en el primer tiro (llamado “craps”), el jugador pierde (es decir, la “casa” gana). 
Si la suma es 4, 5, 6, 8, 9, o 10 en el primer tiro, entonces la suma se convierte en 
el “punto” del jugador. Para ganar, usted debe continuar tirando los dados hasta que “haga su punto”. 
El jugador pierde si tira un 7 antes de hacer su punto.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Constante de enumeracion que representa el estado del juego*/
enum Status {CONTINUA, GANA, PIERDE};

int tiraDados (void); 

int main(){
	int suma;
	int miPunto;

	enum Status statusJuego; /*Puede contener CONTINUA, GANA o PIERDE*/

	srand(time(NULL));


printf("Jueguemos CRAPS!!\n\n");

printf("**Primer lanzamiento de dados**\n");
	suma = tiraDados(); /*Primer tiro de dados*/

	switch(suma){
		/*Gana en el primer tiro*/
		case 7:
		case 11:
			statusJuego = GANA; break;
		
		/*Pierde en el primer tiro*/
		case 2:
		case 3:
		case 12: 
			statusJuego = PIERDE; break; 

		/*Recuerda el punto*/
		default:
			statusJuego = CONTINUA; 
			miPunto = suma; 
			printf("Sus puntos son: %d\n\n", miPunto );
			break;	
	}

	/*Mientras el juego no se completa*/
	while(statusJuego == CONTINUA){
		printf("\n**Tira de nuevo los dados!!**\n");
		suma = tiraDados(); /*Tira de nuevo los dados*/

		/*Determina el status del juego*/
		if( suma == miPunto){ 
			statusJuego = GANA;
		}
		else{
			if(suma == 7){
				statusJuego = PIERDE;
			}
		}
	}
	if(statusJuego == GANA){
		printf("You Win!!! :)\n");	
	}
	else{
		printf("You Lose... :(\n");
	}
	
	return 0;
}

/*Funncion tira Dados*/

int tiraDados(void){
	int dado1, dado2, sumaDados;
	dado1 = 1 + (rand()%6);
	dado2 = 1 + (rand()%6);
	sumaDados = dado1 + dado2;

	printf("El jugador tiro: %d + %d: %d\n",dado1, dado2, sumaDados );

	return sumaDados;
}

