/*Funciones de comparacion. Uso de strcmp y strncmp*/

#include <stdio.h>
#include <string.h>

int main(){
    const char *s1 = "abc def";
    const char *s2 = "abc def";
    const char *s3 = "abc eef zx";

    printf("s1: %s\ns2: %s\ns3: %s\n", s1, s2, s3);
    
    printf( "\nstrcmp(s1 , s2) = %2d\nstrcmp(s1 , s3) = %2d\nstrcmp(s3 , s1) = %2d\n",  
            strcmp(s1, s2),
            strcmp(s1, s3),
            strcmp(s3, s1));

    printf( "\nstrncmp(s1 , s2) = %2d\nstrncmp(s1 , s3) = %2d\nstrncmp(s3 , s1) = %2d\n",  
            strncmp(s1, s2, 6),
            strncmp(s1, s3, 4),
            strncmp(s3, s1, 5));

    return 0;
    
}