/*ejemplo de estructuras YOUUTBE: https://www.youtube.com/watch?v=sKCtFFf6v7A&list=PLw8RQJQ8K1ySN6bVHYEpDoh-CKVkL_uOF&index=30 */

#include <stdio.h>
#include <string.h>

typedef struct{
    int paginas;
    char nombre[50];
    float precio;
}Libros;

int main(){
    
    Libros HG, GT;

    strcpy(HG.nombre, "The Hunger Games");
    HG.paginas = 300;
    HG.precio = 550.30;

    strcpy(GT.nombre, "Game of Thrones");
    GT.paginas = 550;
    GT.precio = 850.20;

    printf("El nombre del libro es \"%s\"\n", HG.nombre);
    printf("EL libro \"The Hunger Games\" tiene %d paginas.\n", HG.paginas);
    printf("El precio del libro %s es: %.2f\n\n", HG.nombre, HG.precio);

    printf("El nombre del libro es \"%s\"\n", GT.nombre);
    printf("EL libro \"Game of Thrones\" tiene %d paginas.\n", GT.paginas);
    printf("El precio del libro %s es: %.2f Arg\n", GT.nombre, GT.precio);

}
