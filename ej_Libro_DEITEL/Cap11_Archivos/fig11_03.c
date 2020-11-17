/*Crea un archivo secuencial*/

#include <stdio.h>
#define TAMANIO 50
//void Cambio(char palabra [128]);

int main (){
    int ID;
    char Nom_recurso[TAMANIO];
    float time;

    FILE *ptrCf;

    if((ptrCf = fopen("cliente.txt", "w")) == NULL){
        printf("El archivo no pudo abrirse\n" );
    }
    else{
        printf("Ingrese el ID, nombre del recurso y tiempo de uso. \n" );
        printf("Ingrece EOF para finalizar. \n");
        printf("? ");
        scanf("%d%s%f", &ID, Nom_recurso, &time);
        //Cambio(Nom_recurso);

        while(!feof(stdin)){
            fprintf(ptrCf, "%010d %-50s %08.2f\n", ID, Nom_recurso, time);
            //Cambio(Nom_recurso);
            printf("? ");
            scanf("%d%s%f", &ID, Nom_recurso, &time);
        }
        fclose(ptrCf);
    }
    return 0;
}

/*funcion para cambiar el '\n' que agrega fgets */
/*
void Cambio(char palabra [128]){
    int i; 

    for(i =0; i < 128; i++){
        if (palabra[i] == '\n'){
            palabra[i] = '\0';
        }
    }
}
*/