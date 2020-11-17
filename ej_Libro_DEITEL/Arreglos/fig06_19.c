/* Busqueda binaria dentro de un arreglo */

#include <stdio.h>
#define TAMANIO 15

/* Funciones */
int busquedaBinaria (const int b[], int ClaveDeBusqueda, int bajo, int alto);
void despliegaEncabezado(void);
void despliegaLinea(const int b[], int bajo, int medio, int alto);

int main (){
    int a[TAMANIO];
    int i;
    int llave;
    int resultado;

    /*Crear datos*/
    for (i = 0; i < TAMANIO; i++){
        a[i]=2*i;
    }

    printf("Introduzca un numero entre 0 a 28: ");
    scanf("%d", &llave);

    despliegaEncabezado();

    /*busca la llave en el arreglo a*/
    resultado = busquedaBinaria(a, llave, 0, TAMANIO - 1);

    /*Despliega los resultados*/
    if( resultado != -1){
        printf("\n%d Se encuentra en el elemento %d del arreglo \n", llave, resultado);
    }
    else{
        printf("\n%d no se encuentra \n", llave);
    }

    return 0; 
}


/*Funcion para realizar la busqueda binaria en un arreglo*/
int busquedaBinaria (const int b[], int ClaveDeBusqueda, int bajo, int alto){

    int central; /*Variable para mantener el elemento central del arreglo*/

    /*Realiza el ciclo hasta que el subindice bajo es mayor que el subindice alto*/
    while (bajo <= alto){
        
        /*Determina el elemento central del subarreglo en el que se busca*/
        central = (bajo + alto) / 2;

        /*Despliega el subarreglo utilizado en este ciclo*/
        despliegaLinea(b, bajo, central, alto);

        /*Si claveDeBusqueda coincide con el elemento central, devuelve central*/
        if (ClaveDeBusqueda == b[central]){
            return central;
        }

        /*Si claveDeBusqueda es menor que el elemento central, establece el nuevo valor de alto*/
        else if(ClaveDeBusqueda < b[central]){
            alto = central -1; /*Busqueda en la mitad inferior del arreglo*/
        }

        /*Si claveDeBusqueda es mayor que el elemento central, establece el nuevo valor para bajo*/
        else{
            bajo = central +1;
        }
    }

    return -1;
}


/*Imprime un encabezado para la salida*/
void despliegaEncabezado(void){

    int i;
    printf("\nSubindices: \n");

    /*muestra el encabezado de la columna*/
    for( i = 0; i < TAMANIO; i++){
        printf("%3d ", i);
    }

    printf("\n");
    for(i = 1; i <= 4 * TAMANIO; i++){
        printf("-");
    }

    printf("\n");
}


/*Imprime una linea de salida que muestra la parte actual del arreglo que se esta procesando*/
void despliegaLinea(const int b[], int baj, int cen, int alt){
    int i;

    /*ciclo a través del arreglo completo*/
    for(i = 0; i < TAMANIO; i++){

        /*despliega espacios si se encuentra fuera del rango actual del subarreglo*/
        if(i < baj || i > alt){
            printf("   ");
        }
        else if( i == cen){ /*despliega el elemento central*/
            printf("%3d*", b[i]); /*marca el valor central*/
        }
        else{
            printf("%3d ", b[i]);
        }
    }
    printf("\n");
}

