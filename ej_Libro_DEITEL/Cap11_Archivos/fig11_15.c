/*Lectura secuencial de un archivo de acceso aleatorio*/

#include <stdio.h>

typedef struct {
    int numCta;
    char apellido[15];
    char nombre[10];
    double saldo;
}datosCliente;

int main (){

    FILE *ptrCf;
    FILE *ptrCe;


    

    /*Crea datosCliente con informacion predeterminada*/
    datosCliente cliente ={0, "", "", 0.0};

    if((ptrCf = fopen("Credito.dat", "r")) == NULL){ /* rb : abre archivo modo lectura*/
        printf("No pudo abrirce el aechivo,\n");
    } 

    if((ptrCe = fopen("creditos.txt", "w")) == NULL){
            printf("El archivo no pudo abrirse\n" );
    }

    else{
        printf("%-6s%-16s%-11s%10s\n", "Cta", "Apellido", "Nombre", "Saldo");

        while(!feof(ptrCf)){
            fread(&cliente, sizeof(datosCliente),1,ptrCf);
        

        /*Despliega los registros*/
            if(cliente.numCta != 0){
            printf("%-6d%-16s%-11s%10.2f\n", cliente.numCta, cliente.apellido, cliente.nombre, cliente.saldo);

            fprintf(ptrCe,"%-6d%-16s%-11s%10.2f\n", cliente.numCta, cliente.apellido, cliente.nombre, cliente.saldo);
            }
        }
        fclose(ptrCf);
    }
    return 0;
}
