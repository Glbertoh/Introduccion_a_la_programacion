#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int segundos,minutos,horas,segundos_totales,tiempo_respaldo;
	printf("Este programa convierte los segundos en horas con sus minutos y segundos\nIntroduce los segundos: ");
	scanf("%i",&segundos_totales);
	horas=((segundos_totales/60)<60 ? 0:segundos_totales/3600);
	tiempo_respaldo=segundos_totales-(horas*3600);
	minutos=tiempo_respaldo/60;
	segundos=tiempo_respaldo%60;	
	printf("Son: %i horas, %i minutos y %i segundos",horas,minutos,segundos);	
	
	
	
	
	
	
	return 0;
}
