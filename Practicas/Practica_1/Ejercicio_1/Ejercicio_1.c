#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,a,b,res;
	printf("Este programa calcula el resultado de la siguiente expresion: ((x+y)^2)*(a-b)\n");
	printf("\nFavor de introducir el valor de x: ");
	scanf("%i",&x);
	printf("\nFavor de introducir el valor de y: ");
	scanf("%i",&y);
	printf("\nFavor de introducir el valor de a: ");
	scanf("%i",&a);
	printf("\nFavor de introducir el valor de b: ");
	scanf("%i",&b);
	res=(((x+y)*(x+y))*(a-b));
	printf("\nEl resultado es: %i",res);
	
	return 0;
}
