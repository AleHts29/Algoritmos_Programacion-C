/*Realizar un programa para controlar varias bibliotecas usando estructuras dentro de estructuras
YOUTUBE: https://www.youtube.com/watch?v=fFjmbymw2Ug&list=PLw8RQJQ8K1ySN6bVHYEpDoh-CKVkL_uOF&index=33*/

#include <stdio.h>
#include <string.h>
#define TAMANIO 50
#define TAMANIO_BI 3
#define CANT_LIB 10

typedef struct{
    char nombre_lib[TAMANIO];
    char autor[TAMANIO];
    int lleno_lib;
}libro;

typedef struct{
    char nombre_bi[TAMANIO];
    libro lib[CANT_LIB];
    int lleno_bi;
}biblioteca;

biblioteca bi[TAMANIO_BI];

typedef enum {
    b300, 

} baudios_t;


void addBI();
void addLIB();
void consulta();
void vacio();
void Cambio(char palabra [TAMANIO]);
void flush_in();


int main(){
    

    int op;
    char key;

    vacio();

    do{
        do{
            printf("Menu:\n");
            printf("(1) Nueva biblioteca.\n");
            printf("(2) Agregar un libro a una biblioteca.\n");
            printf("(3) Consultar un libro.\n");
            scanf("%i",&op);
        }
        while(op < 1 || op > 3);

        switch (op){
            case 1:
                addBI();
                break;
            case 2:
                addLIB();
                break;
            case 3:
                consulta();
                break;
        }
        flush_in();
        printf("Desea realizar otra operacion? (S/N) ");
        
        scanf("%c",&key);       
    }
    while(key == 'S' || key == 's');

    return 0;
}

/*Funcion para validar espacios vacios en el diccionario*/
void vacio(){
    int i, j; 

    for(i = 0; i < TAMANIO_BI; i++){
        bi[i].lleno_bi = 0;
        for(j = 0; j < CANT_LIB; j++){
            bi[i].lib[j].lleno_lib = 0;
        }
    }
}

/*Funcion para crear una biblioteca*/
void addBI(){
    int i, aux;

    aux = 0;

    for(i = 0; i < TAMANIO_BI && aux == 0; i++){
        if (bi[i].lleno_bi == 0){
            printf("Ingresar nombre de la nueva Biblioteca: ");
            flush_in();
            fgets(bi[i].nombre_bi, TAMANIO, stdin); 
            Cambio(bi[i].nombre_bi);

            bi[i].lleno_bi = 1;
            aux = 1; /*rompe iteracion del for*/
        }
    }
    if(aux == 0){
        printf("No queda ningun espacio para una nueva Biblioteca. \n");
    }
}

/*Funcion para agregar un libro*/
void addLIB(){
    int i, op, aux;

    aux = 0;

    for(i = 0; i < TAMANIO_BI; i++){
        if (bi[i].lleno_bi == 1){
            printf("(%i) %s.\n", i, bi[i].nombre_bi);
        }
    }
    //flush_in();
    scanf("%i", &op);

    for(i = 0; i < CANT_LIB && aux == 0; i++){
        if(bi[op].lib[i].lleno_lib == 0){
            printf("Introduzca el nombre del libro: ");
            flush_in();
            fgets(bi[op].lib[i].nombre_lib, TAMANIO, stdin);
            Cambio(bi[op].lib[i].nombre_lib);

            printf("Introduzca el nombre del autor: ");
            /*flush_in();*/ /*genera error (Validar despues)*/
            fgets(bi[op].lib[i].autor, TAMANIO, stdin);
            Cambio(bi[op].lib[i].autor);
            /*printf("Autor es: %s \n", bi[op].lib[i].autor);*/
            
            bi[op].lib[i].lleno_lib = 1;
            aux = 1;
        }
    }
}


void consulta(){

    int op, i, j, aux;  
    char buscar[TAMANIO];

    aux = 1;
    do{
        printf("Consultar:\n");
        printf("(1) Nombre del Libro.\n");
        printf("(2) Nombre del Autor.\n");
        scanf("%i", &op);
    }
    while (op < 1 || op > 2);

    switch(op){
        case 1:
            printf("Ingrese nombre del libro: ");
            flush_in();
            fgets(buscar, TAMANIO, stdin);
            Cambio(buscar);

            for(i = 0; i < TAMANIO_BI; i++){
                aux = 1;
                for(j = 0; j < CANT_LIB; j++){
                    aux = strcmp(buscar, bi[i].lib[j].nombre_lib); /*devuelve un 0 si las dos cadenas son iguales*/
                    if(aux == 0){
                        printf("El libro %s se encuentra en la biblioteca \"%s\" \n", buscar, bi[i].nombre_bi);
                        printf("El autor del libro es \"%s\". \n", bi[i].lib[j].autor);
                    }
                }
            }
            break;
        

        case 2:
            printf("Ingrese nombre del Autor: ");
            flush_in();
            fgets(buscar, TAMANIO, stdin);
            Cambio(buscar);

            for(i = 0; i < TAMANIO_BI; i++){
                aux = 1;
                for(j = 0; j < CANT_LIB; j++){
                    aux = strcmp(buscar, bi[i].lib[j].autor); /*devuelve un 0 si las dos cadenas son iguales*/
                    if(aux == 0){
                        printf("El libro %s se encuentra en la biblioteca \"%s\" \n", bi[i].lib[j].nombre_lib, bi[i].nombre_bi);
                        printf("Autor: %s. \n",buscar);
                    }
                }
            }
            break;
        
    }
}


/*funcion para cambiar el '\n' que agrega fgets */
void Cambio(char palabra [TAMANIO]){
    int i; 

    for(i =0; i < TAMANIO; i++){
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

