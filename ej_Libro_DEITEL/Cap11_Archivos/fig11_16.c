/*Este programa lee de manera secuecial un archivo de acceso aleatorio, actualiza los datos ya escritos en el archivo, crea nuevos datos para colocarlos en el archivo, y elemina los datos ya existentes en el archivo*/

#include <stdio.h>


typedef struct {
    int numCta;
    char apellido[15];
    char nombre[10];
    double saldo;
}datosCliente;

/*Prototipos*/
int intOpciones(void);
void archivoTexto(FILE *ptrLee);
void actualizaRegiistro(FILE *ptrF);
void nuevoRegistro(FILE *ptrF);
void eliminaRegistro(FILE *ptrF);



int main (){

    FILE *ptrCf; /*apuntador de archivo credito.dat*/
    int elecion; /*eleccion del user*/

    if((ptrCf = fopen("Credito.dat", "rb+")) == NULL){ /* rb+ : abre archivo para actualizacion (lectura y escritura) modo binario*/
        printf("No pudo abrirce el aechivo,\n");
    } 
    else{
        /*Permite al usuario elegir una opcion*/
        while((elecion = intOpciones()) != 5){
            switch (elecion){
                /*Crea el archivo desde el registro*/
                case 1:
                    archivoTexto(ptrCf);
                    break;

                /*Actualiza registro*/
                case 2:
                    actualizaRegiistro(ptrCf);
                    break;
                
                /*crea registro nuevo */
                case 3:
                    nuevoRegistro(ptrCf);
                    break;
                
                /*elemina registro existente*/
                case 4:
                    eliminaRegistro(ptrCf);
                    break;

                /*Opcion no valida*/
                default:
                    printf("Opcion incorrecta\n" );
                    break;
            }
        }
        fclose(ptrCf);
    }
    return 0;
}


/*Crea un archivo de texto con formato para impresion*/
void archivoTexto(FILE *ptrLee){
    FILE *ptrEscribe; /*apuntador del archivo cuentas.txt*/

    /*Crea datos con informacion predeterminada*/
    datosCliente cliente = {0, "", "", 0.0};
    
    if((ptrEscribe = fopen("cuentas.txt", "w")) == NULL){ 
        printf("No pudo abrirce el aechivo,\n");
    } 
    else{

        rewind(ptrLee); /*Establece el aupuntador al incio del archivo*/
        fprintf(ptrEscribe, "%-6s%-16s%-11s%10s\n", "Cta", "Apellido", "Nombre", "Saldo");

        /*Copia todos los registros del archivo de acceso aleatorio dentro del archivo de texto*/
        while(!feof(ptrLee)){
            fread(&cliente, sizeof(datosCliente),1, ptrLee);

            /*escribe un registro individual en el archivo de texto*/
            if (cliente.numCta != 0){
                fprintf(ptrEscribe,"%-6d%-16s%-11s%10.2f\n", cliente.numCta, cliente.apellido, cliente.nombre, cliente.saldo);
            }
        }
        fclose(ptrEscribe);
    }
}


/*Actualiza el saldo en el registro*/
void actualizaRegiistro(FILE *ptrF){
    
    int cuenta; /*nuemro cuenta*/
    double transaccion; /*monto*/

    datosCliente cliente = {0, "", "", 0.0}; /*crea datos cliente sin formato*/

    /*optiene el numero de cuenta para acutalizar*/
    printf("Ingrese numero de cuenta para actualizar, entre (1 - 100): " );
    scanf("%d", &cuenta);

    /*Mueve el apuntador de archivo para corregir el registro del archivo*/
    fseek(ptrF, (cuenta -1)*sizeof(datosCliente),SEEK_SET);

    /*Lee un registro del archivo*/
    fread(&cliente, sizeof(datosCliente),1, ptrF);
        /*Despliega un error si la cuenta no existe*/
        if(cliente.numCta == 0){
            printf("La cuenta #%d no tiene informacion. \n", cuenta);
        }
        else{
            printf("%-6d%-16s%-11s%10.2f\n\n", cliente.numCta, cliente.apellido, cliente.nombre, cliente.saldo);

            /*Pide al user el monto de la transaccion*/
            printf("Ingresar monto (+) o (-): ");
            scanf("%lf", &transaccion);
            cliente.saldo += transaccion; /*actualiza el saldo del registro*/

            printf("%-6d%-16s%-11s%10.2f\n\n", cliente.numCta, cliente.apellido, cliente.nombre, cliente.saldo);

            /*Mueve el apuntador de archivo al registro correcto en el archivo*/
            fseek(ptrF, (cuenta -1)*sizeof(datosCliente),SEEK_SET);

            /*Escribe el registro actualizado sobre sobre el registro anterior*/
            fwrite(&cliente, sizeof(datosCliente),1, ptrF);
        }
}

/*Elimina el registro existente*/
void eliminaRegistro(FILE *ptrF){

    datosCliente cliente; /*Almacena los registros leidos en el archivo*/
    datosCliente clienteEnBlanco ={0, "", "", 0.0}; /*cliente en blanco*/

    int numCuenta; /*Numero de cuenta*/

    /*Obtiene el numero de cuenta para eliminarlo*/
    printf("Ingrese numero de cuenta a eliminar (1 - 100):");
    scanf("%d", &numCuenta);

    /*Mueve el apuntador de archivo al registro correcto en el archivo*/
    fseek(ptrF, (numCuenta -1)*sizeof(datosCliente),SEEK_SET);

    /*Lee el registro del archivo*/
    fread(&cliente, sizeof(datosCliente),1, ptrF);

    /*Si el registro no existe depliega error*/
    if (cliente.numCta == 0){
        printf("La cuenta %d no existe. \n", numCuenta);
    }
    else{ /*elimina registro*/

        /*Mueve el apuntador de archivo hacia el registro correcto en el archivo*/
        fseek(ptrF, (numCuenta -1)*sizeof(datosCliente),SEEK_SET);

        /*Reemplaza el registro existente con un registro en blanco*/
        fwrite(&clienteEnBlanco, sizeof(datosCliente), 1, ptrF);

    }
}
 

 /*Crea e inserta registro*/
 void nuevoRegistro(FILE *ptrF){

     /*Crea datos con informacion predeterminada*/
    datosCliente cliente = {0, "", "", 0.0};
    
    int numCuenta; /*numero de cuenta*/

    /*Obtiene el numero de cuenta a crear*/
    printf("Ingrese nuevo numero de cuenta: \n");
    scanf("%d", &numCuenta);

    /*Mueve el apuntador de archivo al registro correcto en el archivo*/
    fseek(ptrF, (numCuenta -1)*sizeof(datosCliente),SEEK_SET);

    /*Lee el registro del archivo*/
    fread(&cliente, sizeof(datosCliente),1, ptrF);

    /*Si la cuenta ya existe despliega error*/
    if(cliente.numCta != 0){
            printf("La cuenta #%d ya contiene informacion. \n", cliente.numCta);
    }
    else{ /*Crea registro*/
    
        printf("Ingrese Apellido, Nombre y Saldo\n>");
        scanf("%s%s%lf", &cliente.apellido, &cliente.nombre, &cliente.saldo);
        cliente.numCta = numCuenta;

        /*Mueve el apuntador de archivo hacia el registro correcto en el archivo*/
        fseek(ptrF, (cliente.numCta -1)*sizeof(datosCliente),SEEK_SET);

        /*Reemplaza el registro existente con un registro en blanco*/
        fwrite(&cliente, sizeof(datosCliente), 1, ptrF);

    }
}

/*Inhabilita al usuario para introducir una opcion de menu*/
int intOpciones(void){
    int opcionMenu;

    printf("\nElegir Opcion\n"
    "1 - Almacena un archivo de texto con formato, de las cuentas llamadas\n" 
    "       \"cuentas.txt\" para impresion\n"
    "2 - Actualizar una cuenta\n"
    "3 - Agregar una cuenta nueva\n"
    "4 - Elimina una cuenta\n"
    "5 - Fin del programa\n> ");

    scanf("%d", &opcionMenu);

    return opcionMenu;
}

