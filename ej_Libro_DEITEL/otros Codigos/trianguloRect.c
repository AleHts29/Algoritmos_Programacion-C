#include <stdio.h>

/*
Un triangulo rectángulo puede tener lados que sean todos enteros. El conjunto de tres valores enteros para los lados de un 
triángulo rectángulo se conoce como una terna pitagórica. Estos tres lados deben satisfacer la relación de que la suma de los 
cuadrados de dos lados es igual al cuadrado de la hipotenusa. Encuentre todas las ternas de Pitágoras para el cateto opuesto, 
cateto adyacente e hipotenusa, todos ellos no mayores de 500.
*/


int main (){
	
	int i,j,k,sum_cuadrados,op,hip,ady;
	printf("Terna Pitagorica\n");
	for (i=1;i<=500;i++){
		hip=i*i; /*Eleva hipotenusa al cuadrado*/
		
		for(j=1;j<=500;j++){
			op=j*j; /*Eleva el cateto opuesto al cuadrado*/
			
			for(k=1;k<=500;k++){
				ady=k*k; /*Eleva el cateto adyacente al cuadrado*/
				
				sum_cuadrados = op + ady;

				/*Determina si existe una terna pitagorica*/
				if( sum_cuadrados == hip){
					printf("\n\n Cateto opuesto = %d",j);
					printf("\n Cateto adyacente = %d",k);
					printf("\n hipotenusa = %d",i);
					printf("\n Comprobacion (Op)^2+(Ady)^2=(Hip)^2: %d + %d = %d \n",op,ady,hip);					
				}
			}

		}
	}
	sleep(1);
	return 0;

}




