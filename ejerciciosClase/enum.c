#include <stdio.h>
#include <stdlib.h>

typedef enum{
    FALSE,
    TRUE
}bool_t;


int main (void){
    bool_t is_empty = TRUE;

    if(is_empty == TRUE){
        printf("Esta vacio..");
    }


   return  EXIT_SUCCESS; 
}