/*
14:
a) Un dispositivo de comunicaciones puede utilizar una velocidad de transferencia de 1200, 2400, 4800, y 9600 baudios. Definir un tipo enumerativo para modelizar dicha situación.
b) ¿Conviene utilizar un prefijo para los tokens del tipo enumerativo? ¿Por qué?
*/


#include<stdio.h>

#define BAUD_RADE_1200_ID 1
#define BAUD_RADE_2400_ID 2
#define BAUD_RADE_4800_ID 3
#define BAUD_RADE_9600_ID 4

#define BR1200_NAMING "Baud_rate 1200"
#define BR2400_NAMING "Baud_rate 2400"
#define BR4800_NAMING "Baud_rate 4800"
#define BR9600_NAMING "Baud_rate 9600"


typedef enum {
    BAUD_1200,
    BAUD_2400,
    BAUD_4800,
    BAUD_9600
} baudrate_t;

int main (void){

    int option, st;
    baudrate_t baudrate;

    printf("Ingrese el id de la velocidad de transferencia:\n");
	printf("%d - %s\n", BAUD_RADE_1200_ID, BR1200_NAMING);
	printf("%d - %s\n", BAUD_RADE_2400_ID, BR2400_NAMING);
	printf("%d - %s\n", BAUD_RADE_4800_ID, BR4800_NAMING);
	printf("%d - %s\n", BAUD_RADE_9600_ID, BR9600_NAMING);

if(!(st=scanf("%i", &option)))
        {
            fprintf(stderr, "%s\n", "ERROR AL INGRESO DE DATOS");
            return 1;
        }

/*Traduccion*/
switch (option){
    case BAUD_RADE_1200_ID:
        baudrate = BAUD_1200;
        break;
    case BAUD_RADE_2400_ID:
        baudrate = BAUD_2400;
        break;
    case BAUD_RADE_4800_ID:
        baudrate = BAUD_4800;
        break;
    default:
        baudrate = BAUD_9600;
}


/*Procesamiento*/
switch(baudrate){
    case BAUD_1200:
        printf("%s\n", BR1200_NAMING);
        break;
    case BAUD_2400:
        printf("%s\n", BR2400_NAMING);
        break;
    case BAUD_4800:
        printf("%s\n", BR4800_NAMING);
        break;
    case BAUD_9600:
        printf("%s\n", BR9600_NAMING);
        break;
}

return 0;

}

