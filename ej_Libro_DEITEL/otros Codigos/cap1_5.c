#include <stdio.h>

/*Ejemplo getchar y putchar*/

int main(){

/*
	int c;

	c= getchar();
	while(c != EOF){
		putchar(c);
		c=getchar();
	}
*/

	int c;
	while((c=getchar()) != EOF)
	putchar(c);

return 0; 
}

