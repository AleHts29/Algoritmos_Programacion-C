/*Realizar un traductor de ingles a español y viceversa con un vector de estructuras
YOUTUBE:https://www.youtube.com/watch?v=rXqZ4iWx96M&list=PLw8RQJQ8K1ySN6bVHYEpDoh-CKVkL_uOF&index=32 */

#include <stdio.h>
#include <string.h>
#define TAMANIO_DICTIONARY 50

typedef struct{
    char eng[TAMANIO_DICTIONARY];
    char esp[TAMANIO_DICTIONARY];
    int lleno;
} traductor;

traductor Dictionary[TAMANIO_DICTIONARY];


void vacio();
void agregar();
void traducir();
void tradu(int op);
void Cambio(char palabra [TAMANIO_DICTIONARY]);
void flush_in();

int main(){
    

    int op;
    char key;

    vacio();

    do{
        do{
            printf("Menu:\n");
            printf("(1) Agregar palabras al traductor.\n");
            printf("(2) Traducir.\n");
            scanf("%i",&op);
        }
        while(op < 1 || op > 2);

        switch (op){
            case 1:
                agregar();
                break;
            case 2:
                traducir();
                break;
        
        }
        printf("Desea realizar otra operacion: (S/N) ");
        scanf("%c",&key);       
    }
    while(key == 'S' || key == 's');

    return 0;
}

/*Funcion para validar espacios vacios en el diccionario*/
void vacio(){
    int i; 

    for(i = 0; i < TAMANIO_DICTIONARY; i++){
        Dictionary[i].lleno = 0;
    }
}

/*Funcion para agregar palabras*/
void agregar(){
    int i, aux;

    aux = 0;

    for(i = 0; i < TAMANIO_DICTIONARY && aux == 0; i++){
        if(Dictionary[i].lleno == 0){
            printf("Introduce palabra en Ingles: ");
            flush_in();
            fgets(Dictionary[i].eng, TAMANIO_DICTIONARY, stdin);
            Cambio (Dictionary[i].eng);/*funcion para cambiar el '\n' que agrega fgets */
            
            printf("Introduce palabra en Espanol: ");
            //flush_in();
            fgets(Dictionary[i].esp, TAMANIO_DICTIONARY, stdin);
            Cambio (Dictionary[i].esp);/*funcion para cambiar el '\n' que agrega fgets */
           

            Dictionary[i].lleno = 1;
             aux = 1;
        }    
    }
}


/*Funcio menu para traducir*/
void traducir(){
    int op;

    do{
            printf("Opciones:\n");
            printf("(1) Traducir de ingles a espanol.\n");
            printf("(2) Traducir de espanol a ingles.\n");
            scanf("%i",&op);
        }
        while(op < 1 || op > 2);

        switch (op){
            case 1:
                tradu(op);
                break;
            case 2:
                tradu(op);
                break; 
        }
}

void tradu(int op){
    int i, j, temp; 
    char aux[TAMANIO_DICTIONARY];
    temp = 0;

    printf("Ingresar palabra que desea traducir: ");
    flush_in();
    fgets(aux, TAMANIO_DICTIONARY, stdin);
    Cambio (aux);/*funcion para cambiar el '\n' que agrega fgets */
    if (op == 1){
        for (i = 0; i < TAMANIO_DICTIONARY && temp == 0; i++){
            j = strcmp(aux, Dictionary[i].eng);
            if (j == 0){
                printf("La traduccion de %s es \"%s\". \n", Dictionary[i].eng, Dictionary[i].esp);
                temp = 1;
            }
         }
    }
    else{
        for (i = 0; i < TAMANIO_DICTIONARY && temp == 0; i++){
            j = strcmp(aux, Dictionary[i].esp);
            if (j == 0){
                printf("La traduccion de %s es \"%s\". \n", Dictionary[i].esp, Dictionary[i].eng);
                temp = 1;
            }
         }
    }
}

/*funcion para cambiar el '\n' que agrega fgets */
void Cambio(char palabra [TAMANIO_DICTIONARY]){
    int i; 

    for(i =0; i < TAMANIO_DICTIONARY; i++){
        if (palabra[i] == '\n'){
            palabra[i] = '\0';
        }
    }
}

/*Funcion para vaciar baffer*/
void flush_in(){
    int c;
    while((c = fgetc(stdin)) != EOF && c != '\n'){}
}