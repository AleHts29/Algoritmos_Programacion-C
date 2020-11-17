
/*
Una persona invierte $1000.00 en una cuenta de ahorros con un 5% de interés. 
Se asume que todo el interés se de- ja en depósito dentro de la cuenta; 
calcule y despliegue el monto acumulado de la cuenta al final de cada año, du- rante 10 años. 
Utilice la siguiente fórmula para determinar estos montos:
a = p(1 + r)^n
*/


#include <stdio.h>
#include <math.h>


int main (){

	double monto; 
	double principal = 1000.00;
	double tasa = .05;

	int anio;
	

	printf( "%4s %21s \n", "Anio", "Monto del deposito");

	for(anio = 1; anio <= 10; anio++){

		monto = principal*pow(1+tasa,anio); /* la funcion "pow" calcula x^y = pow(x,y)*/

		printf("%4d%21.2f \n",anio, monto);

	}


	return 0;

}