#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159265
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r,h;
	float g,V,A;
	printf("Este programa calcula el volumen de un cono\n");
	printf("Insterte el valor del radio: ");
	scanf("%i",&r);
	printf("\nInserte el valor de la altura: ");
	scanf("%i",&h);
	g=sqrt(pow(r,2)+pow(h,2));
	A=(pi*r*g)+(pi*r*r);
	V=(pi*h*r*r)/3;
	printf("\nEl valor del volumen es: %f y el valor del area es: %f",V,A);
	
	return 0;
}
