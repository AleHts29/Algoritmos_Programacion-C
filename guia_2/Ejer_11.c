/*
Modificar el ejer_10 para si en vez de ingresar el código, se quisiera ingresar los símbolos “3”, “M”, “S” y “V” respectivamente?
*/

#include <stdio.h>
#include <stdlib.h>

#define MAXWELL_MANUFACTURER_ID 'M'
#define SONY_MANUFACTURER_ID 'S'
#define VERBATIM_MANUFACTURER_ID 'V'
#define _3M_MANUFACTURE_ID '3'

#define MAXWELL_NAMING "Maxwell Corporation"
#define SONY_NAMING "Sony Corporation"
#define VERBATIM_NAMING "Verbatim Corporation"
#define _3M_NAMING "3M Corporation"

#define ERROR_INPUT_OPTION "Error: Dato ingresado no valido"

/* Usar prefijos */
typedef enum {
	CORPORATION_MAXWELL = 'M',
	CORPORATION_SONY = 'S',
  	CORPORATION_VERBATIM = 'V',
	CORPORATION_3M = 3
} manufacturer_t;

typedef unsigned int uint;

int main(void) {

	int  st;
	char option;
	manufacturer_t manufacturer;

	printf("Ingrese el id del fabricante:\n");
	printf("%c - %s\n", MAXWELL_MANUFACTURER_ID, MAXWELL_NAMING);
	printf("%c - %s\n", SONY_MANUFACTURER_ID, SONY_NAMING);
	printf("%c - %s\n", VERBATIM_MANUFACTURER_ID, VERBATIM_NAMING);
	printf("%c - %s\n", _3M_MANUFACTURE_ID, _3M_NAMING);

	if(!(st=scanf("%c", &option)))
        {
            fprintf(stderr, "%s\n", ERROR_INPUT_OPTION);
            return EXIT_FAILURE;
        }

	/*Traducción*/
	switch(option) {
		case MAXWELL_MANUFACTURER_ID:
			manufacturer = CORPORATION_MAXWELL;
			break;
		case SONY_MANUFACTURER_ID:
			manufacturer = CORPORATION_SONY;
			break;
		case VERBATIM_MANUFACTURER_ID:
			manufacturer = CORPORATION_VERBATIM;
			break;
		default:
			manufacturer = CORPORATION_3M;
			break;
	}

	/*Procesamiento*/

	switch(manufacturer) {
		case CORPORATION_MAXWELL:
			printf("%s\n", MAXWELL_NAMING);
			break;
		case CORPORATION_SONY:
			printf("%s\n", SONY_NAMING);
			break;
    case CORPORATION_VERBATIM:
			printf("%s\n", VERBATIM_NAMING);
		  break;
	case CORPORATION_3M:
			printf("%s\n", _3M_NAMING);
		  break;
	}
	
	return EXIT_SUCCESS;
}
