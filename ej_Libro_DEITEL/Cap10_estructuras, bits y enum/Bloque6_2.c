/*Crear un formulario de registros YOUTUBE: https://www.youtube.com/watch?v=W9KIZxC48to&list=PLw8RQJQ8K1ySN6bVHYEpDoh-CKVkL_uOF&index=31*/

#include <stdio.h>

/*estructura*/
typedef struct{
    char nombre[50];
    char empleo[50];
    int edad;
}reg;

/*Funcion para vaciar baffer*/
void flush_in(){
    int c;
    while((c = fgetc(stdin)) != EOF && c != '\n'){}
}

int main(){
    reg f1, f2;

    puts("\nIntroduce valores para el formulario 1: \n");
    printf("Introduce tu nombre: ");
    fgets(f1.nombre, 50, stdin);
    printf("Introduce tu empleo: ");
    fgets(f1.empleo, 50, stdin);
    printf("Ingresa tu edad: ");
    scanf("%i", &f1.edad);
    flush_in();

    puts("\n\nIntroduce valores para el formulario 2: \n");
    printf("Introduce tu nombre: ");
    fgets(f2.nombre, 50, stdin);
    printf("Introduce tu empleo: ");
    fgets(f2.empleo, 50, stdin);
    printf("Ingresa tu edad: ");
    scanf("%i", &f2.edad);
    flush_in();

    puts("\n\n[******************************]");
    printf("\nLos datos de f1 son: \n");
    printf("Nombre: %s", f1.nombre);
    printf("Edad: %i\n", f1.edad);
    printf("Empleo: %s", f1.empleo);
    
    printf("\nLos datos de f2 son: \n");
    printf("Nombre: %s", f2.nombre);
    printf("Edad: %i\n", f2.edad);
    printf("Empleo: %s", f2.empleo);

    return 0;

}