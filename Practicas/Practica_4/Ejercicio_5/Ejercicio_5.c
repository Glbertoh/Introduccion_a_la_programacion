#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double hipotenusa(double lado1,double lado2){
	return pow(pow(lado1,2)+pow(lado2,2),0.5);
}
int main(int argc, char *argv[]) {
	int i;
	float lado1,lado2;
	printf("Este programa calcula la hipotenusa de 3 triangulos\nrectangulos distintos, pidiendo las magnitudes de\nlos lados.\n");
	for(i=0;i<3;i++){
		printf("Inserte el valor del primer lado: ");scanf("%f",&lado1);
		printf("Inserte el valor del segundo lado: ");scanf("%f",&lado2);
		printf("El valor de la hipotenusa del triangulo %i es: %f\n\n",i+1,hipotenusa(lado1,lado2));
	}
	
	return 0;
}
