#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define g 9.81
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int i=0;
float total=0;
float areas[4],carreras[4],masas[4];
float psi(float area,float masa){
	return (masa*g)/area;
}
float volumen(float area,float carrera){
	return area*carrera;
}
float psi_total(void){
	
	if(i<4){
		total+=psi(areas[i],masas[i]);
		i++;
		psi_total();
	}
	i=0;
	return total;
}
void datos(void){
	if(i<4){
		printf("\nPor favor ingrese el area del cilindro %i: ",i+1);scanf("%f",&areas[i]);
		printf("Por favor ingrese la carrera del cilindro %i: ",i+1);scanf("%f",&carreras[i]);
		printf("Por favor ingrese la masa sobre el cilindro %i: ",i+1);scanf("%f",&masas[i]);
		i++;
		datos();
	}
	i=0;
	return;	
}

int main(int argc, char *argv[]) {
int j;
printf("Este programa calcula la presion y el volumen de 4 valvulas distintas");	
datos();
for(j=0;j<4;j++){
	printf("\nEl volumen del cilindro %i es: %f",j+1,volumen(areas[j],carreras[j]));
	printf("\nLa presion que ejerce el cilindro %i es: %f",j+1,psi(areas[j],masas[j]));
}
printf("\n\nPor lo tanto la presion total es de: %f",psi_total());
	return 0;
}

