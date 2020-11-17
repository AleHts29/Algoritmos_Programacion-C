/*Investigacion crediticia*/

#include <stdio.h>

int main(){
    int consulta;
    int cuenta;
    double saldo;
    char nombre[50];

    FILE* ptrCf;

    if((ptrCf = fopen("Clientes.txt", "r")) == NULL){
        printf("El archivo no pudo ser leido\n");
    }
    else{
        /*Opciones*/
        printf("Elegir opcion\n"
        " 1 - Cuentas con saldo Cero\n"
        " 2 - Cuentas con saldo a favor\n"
        " 3 - Cuentas con saldo en contra\n"
        " 4 - Salir\n>");

        scanf("%d", &consulta);

        /*Procesa consulta*/
        while( consulta != 4 /*consulta < 1 || consulta > 4*/){
            
            fscanf(ptrCf, "%d%s%lf", &cuenta, nombre, &saldo);

            switch ( consulta ){
                
                case 1:
                printf("\nCuentas con saldo cero: \n");
                while(!feof(ptrCf)){
                    
                    if (saldo == 0){
                        printf("%-10d%-13s%7.2f\n", cuenta, nombre, saldo);            
                    }
                    fscanf(ptrCf, "%d%s%lf", &cuenta, nombre, &saldo);
                }
                break;

                case 2:
                printf("\nCuentas con saldo a favor: \n");
                while(!feof(ptrCf)){
                    
                    if (saldo > 0){
                        printf("%-10d%-13s%7.2f\n", cuenta, nombre, saldo);            
                    }
                    fscanf(ptrCf, "%d%s%lf", &cuenta, nombre, &saldo);
                }
                break;

                case 3:
                printf("\nCuentas con saldo en contra: \n");
                while(!feof(ptrCf)){
                    
                    if (saldo < 0){
                        printf("%-10d%-13s%7.2f\n", cuenta, nombre, saldo);            
                    }
                    fscanf(ptrCf, "%d%s%lf", &cuenta, nombre, &saldo);
                }
                break;
            }

            rewind(ptrCf); /* Devuelve ptrCf al principio del archivo*/
            printf("\n>");
            scanf("%d", &consulta);
        }
        printf("Fin de la ejecucion\n");
        fclose(ptrCf);
    }
    return 0;
}
