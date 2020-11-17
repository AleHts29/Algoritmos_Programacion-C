/* Ej3. Calcular la desviacion estandar... Z = (X-μ)/σ , cuando x = 85,3, μ = 80 y σ = 4 */

#include <stdio.h>
#define VALOR_MEDIO 80
#define DESVIACION_ESTANDAR 4
#define VALOR_DE_X 83,3
#define SIMBOLO_RESISTENCIA "R"


int main(void){
    int resistencia_total;

    resistencia_total=(2*RESISTOR_A + 4*RESISTOR_B + RESISTOR_C); 
    printf("\nLos valores de resistencia son: 2(%d) ohm ; 4(%d) ohm ; %d ohm", RESISTOR_A, RESISTOR_B, RESISTOR_C);
    printf("\nLa resistencia total del circuito serie es567: %d %s \n", resistencia_total, SIMBOLO_RESISTENCIA);

    return 0;
}
