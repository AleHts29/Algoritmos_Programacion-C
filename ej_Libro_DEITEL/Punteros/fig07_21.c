/*Copia de una cadena por medio de la notacion de arreglo y la notacion de apuntadores*/

#include <stdio.h>

void copia1( char *s1, const char *s2);
void copia2( char *s1, const char *s2);

int main (void){
    char cadena1[10];
    char *cadena2 = "Hola";
    char *cadenaA[]= {"Hola", "Adios"};
    char *p;
    char cadena3[10];
    char cadena4[] = "Adios";

    
    
    
    printf("%s\n", cadenaA[0]);/*prueba de Puntero a un Arreglo*/
    copia1(cadena1, cadena2);
    printf("cadena1 = %s\n", cadena1);

    copia2(cadena3, cadena4);
    printf("cadena3 = %s\n", cadena3);

    return 0;
}

/*Copia S2 en el S1 con el uso de la notacion de arreglos*/
void copia1(char *s1, const char *s2){
    int i;

    /*Realiza el ciclo a traves de la cadena*/
    for ( i = 0; (s1[i] = s2[i]) != '\0'; i++){
        /*No realiza tarea alguna en el cuerpo*/
    }
}

/*Copia S2 en el S1 con el uso de la notacion de apuntadores*/
void copia2(char *s1, const char *s2){
    /*Realiza el ciclo a través de las cadenas*/  
    for( ; (*s1 = *s2) != '\0'; s1++, s2++){
        /*No se realiza tarea en el cuerpo*/
    }
}