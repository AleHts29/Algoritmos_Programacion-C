
/* Calcular la resistencia total de un circuito en serie */

#include <stdio.h>
#define RESISTOR_A 50
#define RESISTOR_B 33
#define RESISTOR_C 15
#define SIMBOLO_RESISTENCIA "R"


int main(void){
    int resistencia_total;

    resistencia_total=(2*RESISTOR_A + 4*RESISTOR_B + RESISTOR_C); 
    printf("\nLos valores de resistencia son: 2(%d) ohm ; 4(%d) ohm ; %d ohm", RESISTOR_A, RESISTOR_B, RESISTOR_C);
    printf("\nLa resistencia total del circuito serie es567: %d %s \n", resistencia_total, SIMBOLO_RESISTENCIA);

    return 0;
}
