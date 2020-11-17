#include <stdio.h>
#include <time.h>

int main(){

    time_t tiempoA;
    time(&tiempoA);
    printf("%s\n", ctime(&tiempoA));

    struct tm * myTime = localtime(&tiempoA);
    printf("%d / %d / %d\n", myTime->tm_mday, myTime->tm_mon+1, myTime->tm_year+1900);

       return 0;
}
