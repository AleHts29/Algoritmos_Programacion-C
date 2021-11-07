// Devolver un numero de 1 a 9 basado en codigo ASCII

#include <stdio.h>

int main(void){

    int c, n;

/* Implementacion 1
        switch (c)
        {
            case '0':
                n = 0;
            break;
            case '1':
                n = 1;
            break;
            case '2':
                n = 2;
            break;
            case '3':
                n = 3;
            break;
            case '4':
                n = 4;
            break;
            case '5':
                n = 5;
            break;
            case '6':
                n = 6;
            break;
            case '7':
                n = 7;
            break;
            case '8':
                n = 8;
            break;
            case '9':
                n = 9;
            break;
            default:
            fprintf(stderr,"%s\n","Error: símbolo inválido.");
        }
*/

// Implementacion 2 - Mejora

    c = getchar();
    n = c - '0';
    printf("%d", n);

    return 0;
}
 