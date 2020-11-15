#include<stdio.h>
/*
int main(void) {

	printf("Insert a character:");

	char character = getchar();

	printf("You inserted: %c", character);

	return 0;
}
// *************************************************
// *************************************************
int main(void) {

	int exit = 0;
	do {

		printf("Insert a character:");

		char character = getchar();		

		if(character == 'h') {
			printf("You inserted h!\n");
		}
		else {
			exit = 1;
			printf("You inserted '%c'!\n", character);
			printf("Exiting...");
		}
	}
	while(exit == 0);

	return 0;
}
*/
/*************************************************/
/*************************************************/
int main(void) {

	
    char Character;
    char c;
    int exit = 0;
	do {

		printf("Insert a character:");
        /*La 1er lectura del buffer se almacena en Character */
        Character = getchar();	
		
        /*La 2da lectura del buffer se almacena en c */
        /*Cada que se lee el buffer, se elimina lo que se lee*/
		while((c = getchar()) != '\n' && c != EOF){
            printf("Se carga el caracter [ %c ] en la variable aux [C] y luego de ser leida se elimina del buffer...\n", c);
        }

		if(Character == 'h') {
			printf("\nYou inserted h!\n");

		}
		else {
			exit = 1;
			printf("\nYou inserted '%c'!\n", Character);
			printf("Exiting...");
		}
	}
	while(exit == 0);

	return 0;
}
