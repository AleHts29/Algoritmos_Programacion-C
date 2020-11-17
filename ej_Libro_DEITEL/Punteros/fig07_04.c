#include <stdio.h>

int main(void){
    int a;
    int *B;

    a = 7;
    B = &a;

    printf("La direccion de '&a' es %p"  /* %p despliega la ubicacion en memoria en hexadecimal */    
          "\nLa direccion de '&B' es %p", &a, &B);

    printf("\n\nEl valor de 'a' es %d" 
          "\nEl valor de 'B' es %p"
          "\nEl valor de '*B' es %d", a, B, *B);
    
    printf("\n\nMuestra de que '*' y '&' son complementos uno del otro\n"          
          "\n&*B = %p\n*&B = %p", &*B, *&B);
    
    return 0;
}


