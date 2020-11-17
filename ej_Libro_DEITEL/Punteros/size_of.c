/* Figura 7.16 
Cuando el operador sizeof se utiliza en un nombre de areglo, este devuelve el  numero de bytes en el arreglo
*/

#include <stdio.h>

size_t obtieneTamanio (float *ptr);

int main(){

    float Arreg[10];

    printf("El numero de bytes en el arreglo es %d\nEl numero de bytes devueltos por obtieneTamanio es %d\n",  sizeof(Arreg),  obtieneTamanio(Arreg));
           
         
           
    return 0; 
}

/* devuelve el tamanio de ptr */
size_t obtieneTamanio(float *ptr){
    return sizeof(*ptr);
}