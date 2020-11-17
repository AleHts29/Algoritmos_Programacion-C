/*Creacion secuencial de un archivo de acceso aleatorio, de 100 registros de longitud fija*/

#include <stdio.h>

typedef struct {
    int numCta;
    char apellido[15];
    char nombre[10];
    double saldo;
}datosCliente;

int main (){

    int i; 

    /*Crea datosCliente con informacion predeterminada*/
    datosCliente clienteEnblanco ={0, "", "", 0.0};

    FILE *ptrCf;

    if((ptrCf = fopen("Credito.dat", "w")) == NULL){ /*wb*/
        printf("No pudo abrirce el aechivo,\n");
    } 
    else{
        /*escribe 100 registros en blaco en el archivo*/
        for( i = 1; i < 100; i++){
            fwrite(&clienteEnblanco, sizeof(datosCliente), 1, ptrCf);
        }
        fclose(ptrCf);
    }
    return 0;

}


