/*Programa para bajar y repartir cartas*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void baraja(int wMazo[4][13]);
void reparte(const int wMazo[4][13], const char *wCara[], const char *wPalo[]);

int main(){

    const char *palo[4] = {"Corazones", "Diamantes", "Treboles", "Espadas"};
    const char *cara[13] = {"As", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", 
                            "Ocho", "Nueve", "Diez", "Joto", "Quina", "Rey"};

    /*Inicializa el arreglo mazo*/
    int mazo[4][13] = {0};
    srand(time(0)); /*Semilla del generador de numeros aleatorios*/

    baraja(mazo);
    reparte(mazo, cara, palo);

    return 0;
}

/*Baraja las cartas del mazo*/
void baraja(int wMazo[4][13]){
    int fila;
    int columna;
    int carta;
    

    /*elige aleatoriamente un espacio para cada una de las 52 cartas*/
    for(carta = 1; carta <= 52; carta++){
        
        /*elije una nueva ubicacion al azar hasta que encuentre un espacio vacio*/
        do{
            fila = rand() % 4;
            columna = rand() % 13;
        } while (wMazo[fila][columna] != 0);

        /*Coloca el numero de carta en el espacio vacio del mazo*/
         wMazo[fila][columna] = carta;
        printf("wMazo[ %d ][%d]  =  %d\n",fila, columna, carta);
        
    }
}

/*reparte cartas*/
void reparte (const int wMazo[4][13], const char *wCara[], const char *wPalo[]){
    int carta;
    int fila;
    int columna;

    /*reparte cada una de las 52 cartas*/
    for(carta = 1; carta <= 52; carta++){
        /*realiza el ciclo a travez de las filas de wMazo*/
        for(fila = 0; fila <= 3; fila++){
            /*realiza el ciclo a traves de las columnas de wMazo en la fila actual*/
            for(columna = 0; columna <= 12; columna++){
                /*si el espacio contiene la carta actual, despliega la carta*/
                if(wMazo[fila][columna] == carta){
                    printf("%6s de %-9s%c", wCara[columna], wPalo[fila],carta % 2 == 0 ? '\n' : '\t');
                }
            }
        }
    }
}


