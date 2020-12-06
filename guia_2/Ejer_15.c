
/*
15:
Con respecto al ejercicio anterior, dado que internamente los símbolos se representan como un número entero, ¿es posible compilar lo siguiente? Justificar.
*/



typedef enum { 1200, 2400, 4800, 9600 } baudrate_t;


gcc -Wall -ansi -pedantic Ejer_12.c -o Ejer_12
Ejer_12.c:22:5: error: expected identifier


El mensaje de error es bastante claro dado que un identificador no puede iniciar con un caracter numérico, se podria anteponer un caracter de guión bajo '_1200' antes del número (que es válido en un identificador).