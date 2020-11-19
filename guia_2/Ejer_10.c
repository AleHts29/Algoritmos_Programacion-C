/*
10) Cada unidad de disco de un cargamento está marcada con un código del 1 al 4 que indica un fabricante:

Código de fabricante    |   Denominación (naming)
(manufacturer id)  
 
1                            3M Corporation 
2                            Maxell Corporation
3                            Sony Corporation
4                            Verbatim Corporation


Escribir un programa que acepte el número de código como dato de entrada y despliegue el nombre correcto del fabricante con base en el valor introducido (usar tipos enumerativos y constantes simbólicas para la modelización).
*/

#include <stdio.h>

#define MAXWELL_MANUFACTURER_ID 1
#define SONY_MANUFACTURER_ID 2
#define VERBATIM_MANUFACTURER_ID 3

#define MAXWELL_NAMING "Maxwell Corporation"
#define SONY_NAMING "Sony Corporation"
#define VERBATIM_NAMING "Verbatim Corporation"

/* Usar prefijos */
typedef enum {
	CORPORATION_MAXWELL,
	CORPORATION_SONY,
  CORPORATION_VERBATIM	
} manufacturer_t;

typedef unsigned int uint;

int main(void) {

	int option;
	manufacturer_t manufacturer;

	printf("Ingrese el id del fabricante:\n");
	printf("%d - %s\n", MAXWELL_MANUFACTURER_ID, MAXWELL_NAMING);
	printf("%d - %s\n", SONY_MANUFACTURER_ID, SONY_NAMING);
	printf("%d - %s\n", VERBATIM_MANUFACTURER_ID, VERBATIM_NAMING);

	scanf("%d", &option); /* Validar */

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
			manufacturer = CORPORATION_MAXWELL;
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
	}
	
	return 0;
}