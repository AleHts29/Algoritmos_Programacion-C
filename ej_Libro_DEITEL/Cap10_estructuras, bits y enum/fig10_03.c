/*Baarajar y repartir cartas, con el uso de estructuras*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Define la struc de carta*/
typedef struct{
    const char *cara;
    const char *palo;
}Carta;


/*Prototipos*/
void llenaMazo (Carta * const wMazo, const char *wCara[], const char *wPalo[]);
void barajar(Carta * const wMazo );
void repartir(const Carta * const wMazo);


int main(){

Carta mazo[52];

    /*Inicializo el arreglo de apuntadores*/
    const char *cara[] = {"As", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve",
                            "Diez", "Joto", "Quina", "Rey"};
    const char *palo[] = {"Corazon", "Diamantes", "Treboles", "Espadas"};

    srand(time(NULL)); 

    llenaMazo(mazo, cara, palo); /*Carga el mazo con las barajas*/
    barajar(mazo); 
    repartir(mazo);

    return 0; 
}


/*Coloca cadenas dentro de las struct Barajas */
void llenaMazo (Carta * const wMazo, const char * wCara[], const char * wPalo[]){
    int i; 
    
    /*Ciclo a traves del wMazo*/
    for( i= 0; i <= 51; i++){
            printf("Cara[%d] Palo[%d]\n", i%13, i/13); /*resto y cociente*/
        
        wMazo[i].cara = wCara[i % 13];
        wMazo[i].palo = wPalo[i / 13];
    }
}

/*Baraja el mazo*/
void barajar(Carta * const wMazo ){
    int i, j;
    Carta temp; /*define la struc temporal para intercambiar cartas*/

    /*ciclo a traves de wMazo para intercambiar aleatoriamente Baraja*/
    for(i = 0; i <= 51; i++){
        j = rand() % 52; /*Valores aleatorios entre 0 - 51*/
        temp = wMazo[i];
        wMazo[i] = wMazo[j];
        wMazo[j] = temp;
    }
}

/*Reparte baraja*/
void repartir(const Carta * const wMazo){
    int i;

    for(i = 0; i <= 51; i++){
        printf ("%5s de %-8s%c", wMazo[i].cara, wMazo[i].palo, (i + 1) % 2 ? '\t' : '\n');
    }
}