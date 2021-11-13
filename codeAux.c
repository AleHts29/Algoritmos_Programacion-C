#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STR 100
#define MAX_NUMBER_TO_COPY 7

int main (void){
    char str1[MAX_STR] = "HELLO World";
    char str2[MAX_STR];

    size_t i;

    for (i = 0; str1[i] != '\0'; i++)
        str2[i] = tolower(str1[i]);
    str2[i] = '\0';

    printf("Cadena original: %s\n", str1);
    printf("Conviercion a minuscula: %s\n", str2);
        
    return EXIT_SUCCESS;
}
