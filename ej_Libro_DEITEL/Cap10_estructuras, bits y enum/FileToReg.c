/*desde un fichero de texto se lee una serie de campos y se introduce dentro de diferentes variables de una Estructura Dinamica.
YOUTUBE: https://www.youtube.com/watch?v=hC2lrn81eco*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *nombre;
    int edad; 
}Trabajadores;

Trabajadores *empleado;

void vaciar(char temp[]);
void copiar(char temp[], int i);

int main(){

    int i, j;
    char aux;
    char temp[50]; /*max de caracteres en cada linea*/
    int cont = 0; /*Me indica cuantas lineas tiene mi archivo*/

    FILE *f;

    if((f = fopen("Empleados.csv", "r")) == NULL){ 
        printf("No pudo abrirce el aechivo,\n");
    } 
    else {
        while(!feof(f)){
            /*Se lee el total del archivo, para luego reservar memoria*/
            fgets(temp, 50, f);
            cont++; 
        }
       rewind(f); /* Devuelve ptrCf al principio del archivo*/
     /*se pide memoria para TODOS los registros (No APLICA PARA EL CE2 de Martin)*/
        empleado = (Trabajadores*)malloc(cont*sizeof(Trabajadores));
        if(empleado == NULL){
            free(empleado);
            printf("No se pudo reservar memoria. \n");
        }

        /*Lectura caracter por caracter*/
        for( i = 0; !feof(f); i++){
            vaciar(temp);
            aux = '0';
            for (j = 0; aux != '-'; j++){
                aux = fgetc(f);
                if (aux != '-'){
                    temp[j]=aux;
                }
            }
            copiar(temp, i);

            fgets(temp,4,f); /*el 4 es para que fgets me lea solo 4 caracteres (27'\n''\0')*/
            empleado[i].edad = atoi(temp);

            printf("Nombre: %s Edad: %i \n", empleado[i].nombre, empleado[i].edad);
            
        }
        fclose(f);
    }
    return 0;
}

void vaciar(char temp[]){
    int i;

    for(i = 0; i < 50; i++){
        temp[i] = '\0';
    }
}

void copiar(char temp[], int i){
    
    int N = strlen(temp) +1;

    empleado[i].nombre = (char*)malloc(N*sizeof(char));
    if(empleado[i].nombre == NULL){
        free(empleado);
        printf("No se ha podido reservar Memoria. \n");
    }
    strcpy(empleado[i].nombre, temp);
    
}
