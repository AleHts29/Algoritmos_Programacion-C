#include <stdio.h>
#include <stdlib.h>
int main (){



    int num, i; 
    int cuenta_cero = 0; 
        cuenta_uno = 0;
        cuenta_dos = 0;
        cuenta_tres = 0; 
        cuenta_cuatro = 0; 
        cuenta_cinco = 0; 
        cuenta_seis = 0; 
        cuenta_siete = 0; 
        cuenta_ocho = 0; 
        cuenta_nueve = 0; 



        for (i = 0; i < 1000; i++){
            num = rand() % 10; 
            
            switch (num){
                case 0: cuenta_cero = cuenta_cero +1; break;
                case 1: cuenta_uno = cuenta_uno +1; break;
                case 2: cuenta_dos = cuenta_dos +1; break;
                case 3: cuenta_tres = cuenta_tres +1; break;
                case 4: cuenta_cuatro = cuenta_cuatro +1; break;
                case 5: cuenta_cinco = cuenta_cinco +1; break;
                case 6: cuenta_seis = cuenta_seis +1; break;
                case 7: cuenta_siete = cuenta_siete +1; break;
                case 8: cuenta_ocho = cuenta_ocho +1; break;
                case 9: cuenta_nueve = cuenta_nueve +1; break;
            }
        }

    printf("El numero Cero se repitio %i \n", cuenta_cero);


    return 0;


}