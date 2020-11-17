/*Uso de strcat y srtncat*/

#include <stdio.h>
#include <string.h>

int main (){
    char s1[20] = "Feliz ";
    char s2[] = "Anio Nuevo";
    char s3[40] = "";

    printf("s1 = %s\ns2 = %s\n", s1, s2);
    
    /*concaterna s2 y s1*/
    printf("strcat(s3, s1, 6) = %s\n", strcat(s1, s2));

    /*concatena los primeros 6 caracteres de s1 a s3. Coloca '\0' despues del ultimo caracter*/
    printf("strncat(s3, s1, 6) = %s\n", strncat(s3, s1, 6));

    /*Concatena s1 a s3*/
    printf("strcat(s3, s1) = %s\n", strcat(s3, s1));

    return 0;
}