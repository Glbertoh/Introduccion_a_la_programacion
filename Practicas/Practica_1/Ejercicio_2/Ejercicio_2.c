#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float pies,yardas,pulgadas,centimetros,metros;
	printf("El siguiente programa convierte las unidades pies en yardas, pulgadas,\ncentimetros y metros");
	printf("\nIntroduce la distancia en pies: ");
	scanf("%f",&pies);
	yardas=pies/3;
	pulgadas=(pies*12);
	centimetros=(pulgadas*2.54);
	metros=centimetros/100;
	printf("\n%f pies es equivalente a:\n%f yardas\n%f pulgadas\n%f centimetros\n%f metros ",pies,yardas,pulgadas,centimetros,metros);
	
	
	
	
	return 0;
}
