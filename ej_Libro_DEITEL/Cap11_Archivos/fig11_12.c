/*Escritura en un archivo de acceso aleatorio, de 100 registros de longitud fija*/

#include <stdio.h>

typedef struct {
    int numCta;
    char apellido[15];
    char nombre[10];
    double saldo;
}datosCliente;

int main (){

    FILE *ptrCf;

    /*Crea datosCliente con informacion predeterminada*/
    datosCliente cliente ={0, "", "", 0.0};

    if((ptrCf = fopen("Credito.dat", "w")) == NULL){ /* rb+ : abre archivo para actualizacion (lectura y escritura) modo binario*/
        printf("No pudo abrirce el aechivo,\n");
    } 
    else{
        
        /*Se requiere que el usuario especifique el numero de cuenta*/
        printf("Introduzca numero de cuenta "
        "(1 a 100, 0 para finalizar)\n> ");
        scanf("%d", &cliente.numCta);

        while( cliente.numCta != 0){

            /*Se cargan datos del cliente*/
            printf("Ingresar: Apellido, Nombre y Saldo\n>");
            fscanf(stdin,"%s%s%lf", cliente.apellido, cliente.nombre, &cliente.saldo);
            //fgets(cliente.apellido, cliente.nombre, &cliente.saldo,sizeof,fo);


            /*Localiza la posicion de un registro especifico en el archivo*/
            fseek(ptrCf, (cliente.numCta -1) * sizeof(datosCliente), SEEK_SET);

            /*Escribe en el archivo la informacion ingresada por el usuario*/
            fwrite(&cliente, sizeof(datosCliente), 1, ptrCf);
            //fprintf(ptrCf, "%-6d%-16s%-11s%10.2f\n",cliente.numCta, cliente.apellido, cliente.nombre, cliente.saldo);

            /*permite ingresar otra cuenta*/
            printf("Introduzca numero de cuenta \n>");
            scanf("%d", &cliente.numCta);
        }
        fclose(ptrCf);
    }
    return 0; 
}
