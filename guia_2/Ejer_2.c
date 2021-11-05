#include <stdio.h>

#define MSG_USER "Ingrese un valor numerico"


 typedef enum{
        OK,
        ERROR
    } status_t;


int main(void){
    int data_Int = 0, d = 0,  c;
    status_t st;

    puts(MSG_USER);
    do{
        if (! (st = scanf("%d", &data_Int))){
                    return ERROR;
                }
        while((c = getchar()) != '\n' && c != EOF);

        // scanf("%d", &d);
        
        d = getchar();

        printf("El numero ingresado es: %d\n scanf2: %c\n", data_Int, d);


    }while(data_Int != EOF);

    return OK;

}
