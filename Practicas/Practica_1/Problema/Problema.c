#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define g 9.81
#define agua 1000
#define diesel 820
#define pi 3.14159265

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
float presion,volumen,diametro,altura,densidad;
char liq;
printf("Este programa calcula el volumen de un liquido contenido en un pozo\n");
printf("\nIntroduzca A si el material es agua, si es diesel, introduzca D: ");
scanf("%c",&liq);
printf("\nIntroduzca el valor de la presion hidrostatica que detecta el sensor: ");
scanf("%f",&presion);
printf("\nIntroduzca el diametro del pozo: ");
scanf("%f",&diametro);
presion= presion*100000;
densidad=(liq=='A'?agua:diesel);
altura=presion/(densidad*g);
volumen=pi*(diametro/2)*altura;
printf("\nEl volumen del liquido es de %f metros cubicos",volumen);
		
	return 0;
}
