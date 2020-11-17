/*
El juego de dados conocido como “craps” (tiro perdedor) es muy popular, realice un programa que simule dicho juego, a
continuación se muestran las reglas para los jugadores.
· Un jugador tira dos dados. Cada dato tiene seis caras. Las caras contienen 1, 2, 3, 4, 5 y 6 puntos.
· Una vez que los dados se hayan detenido, se calcula la suma de los puntos en las dos caras superiores.
· Si a la primera tirada, la suma es 7, o bien 11, el jugador gana.
· Si a la primera tirada la suma es 2, 3 o 12 (conocido como “craps”), el jugador pierde (es decir la casa “gana”).
· Si a la primera tirada la suma es 4, 5, 6, 8, 9 ó 10, entonces dicha suma se convierte en el “punto” o en la “tirada”.
· Para ganar, el jugador deberá continuar tirando los dados hasta que haga su “tirada”.
· El jugador perderá si antes de hacer su tirada sale una tirada de 7.
*/



#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

/*#include <windows.h>*/

#define GANA 0
#define PIERDE 1
#define CONTINUA 2

int primertiro = 1, /* 1 si el lazamiento actual es el primero */
	sumaDados = 0, 	/*Suma de los datos*/
	MiPunto = 0,	/*Tirada o puntos si no gana o pierde en el primer lanzamiento*/
	p = 0,
	estadoJuego = CONTINUA;  

int lazaDados();
int Juego();

int main (){
	printf("\n CRAPS \n");
	Juego();

	if(estadoJuego==GANA)
		printf("\n YOU WIN!!\n");
		else
			printf("\n YOU LOSE..");

	sleep(5000);

	return 0; 
	}


/*Funcion Lanza dados*/
int lazaDados(){
	srand(time(NULL));
		int dado1, dado2, suma;
		dado1 = 1 + (rand()%6);
		dado2 = 1 + (rand()%6);
		suma = dado1 + dado2;
		//printf("suma: %d\n", suma);

	return suma;
	}


/*Funcíón Juego*/

int Juego(){
		int puntos, n_lazamientos;
		n_lazamientos = 1;

		while(estadoJuego == CONTINUA){
			puntos = lazaDados();

			if(primertiro == 1){
				printf("Primer lanzamiento: %d", puntos);
				switch(puntos){
					case 7: case 11:   estadoJuego = GANA; break;
					//case 11: estadoJuego = GANA; break;
					case 2:  estadoJuego = PIERDE; break;
					case 3:  estadoJuego = PIERDE; break;
					case 12: estadoJuego = PIERDE; break;
					default:{
						primertiro = 0;
						estadoJuego = CONTINUA; 
						MiPunto = puntos;
						p=MiPunto;
						break;
					}
					
				}
			}
		    else{
		    	n_lazamientos = n_lazamientos + 1;
		    	
		    	
		    	printf("\n Lanzamiento numero %d: %d", n_lazamientos,puntos);
		    	switch(puntos){
		    		case 7: estadoJuego = PIERDE; break;
		    		case 'p': estadoJuego = GANA; break;
		    		default:{
		    			primertiro = 0;
		    			estadoJuego = CONTINUA;
		    			MiPunto = puntos;
		    			p=MiPunto;
		    			break;
		    		}
		    	}

		    }

		  
		}
		return estadoJuego;
	}



















