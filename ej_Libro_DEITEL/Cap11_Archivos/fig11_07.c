/*Lectura e impresion de un archivo secuencial*/

#include <stdio.h>
#define TAMANIO 50 /*Para el CE2 debe ser 128*/


int main (){
    int ID;
    char Nom_recurso[TAMANIO];
    float time;

    FILE *ptrCf;
    FILE *ptrCe;

    if((ptrCf = fopen("altas.txt", "r")) == NULL){
        printf("El archivo no pudo abrirse\n" );
    }

    if((ptrCe = fopen("inventario.txt", "w")) == NULL){
            printf("El archivo no pudo abrirse\n" );
    }

    else{
        printf("%-10s%-50s%-60s\n", "ID", "Nom_recurso", "time" );
        fprintf(ptrCe,"%-10s%12s%44s\n", "ID", "Nom_recurso", "time" );
        //fprintf(ptrCe, "%010d %-50s %08.2f\n", ID, Nom_recurso, time);
        fscanf(ptrCf, "%d%s%f", &ID, Nom_recurso, &time);

        while(!feof(ptrCf)){
            printf("%010d%-50s%08.2f\n", ID, Nom_recurso, time);
            fprintf(ptrCe, "%010d %-50s %08.2f\n", ID, Nom_recurso, time);
            fscanf(ptrCf, "%d%s%f", &ID, Nom_recurso, &time);
            
            
            //else{
            //fscanf(ptrCf, "%d%s%f", &ID, Nom_recurso, &time);
              //  while(!feof(stdin)){
               // fprintf(ptrCe, "%010d %-50s %08.2f\n", ID, Nom_recurso, time);
               // fscanf(ptrCf,"%d%s%f", &ID, Nom_recurso, &time);
     
     
                //}
            //}
        }
        fclose(ptrCe);
        fclose(ptrCf);
        
    }


    
    return 0;
}
