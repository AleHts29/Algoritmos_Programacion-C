#include <stdio.h>
#define N 20

int main (void){

    char s[N] = "hola";
    char t[N] = "Mundo ";
    size_t i = 0;
    size_t j = 0;

    while(t[i] != '\0'){
    i++;
    }
    
    while((t[i] = s[j]) != '\0' && i < N -1 ){
        i++;
        j++;
    }

    t[N-1] = '\0';
    puts(t);

    return 0;   
}