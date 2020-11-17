

#include <time.h>


int main (void){

    char s1[]= "hola";
    char s2[]= "iola";
    size_t i = 0;

    int cmp;

    i = 0; 

    while (s1[i] == s2[i] && s1[i] != '\0'){
        i++;
    }
    
    if (s1[i] == s2[i])
        cmp = 0;
    
    else if( s1[i] > s2[i]){
        cmp = 1;
    
    }
    else
    cmp = -1;

    printf("cmp: %d \n", cmp);
    

    return 0;
}
