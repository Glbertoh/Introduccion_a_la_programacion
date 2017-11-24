#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	int i,alto[3],ancho[3],longitud[3];
	printf("Este programa calcula el volumen de 3 habitaciones diferentes y el volumen total");
	for(i=0;i<3;i++){
		printf("\nPor favor introduce el alto de la habitacion %i:     ",i+1);scanf("%i",&alto[i]);
		printf("Por favor introduce el ancho de la habitacion %i:    ",i+1);scanf("%i",&ancho[i]);
		printf("Por favor introduce la longitud de la habitacion %i: ",i+1);scanf("%i",&longitud[i]);
	}
	for(i=0;i<3;i++){
		printf("\nEl Volumen de la habitacion %i es: %i",i+1,calcular_volumen(alto[i],ancho[i],longitud[i]));
	}
	printf("\nEl Volumen total de las habitaciones es: %i",calcular_volumen(alto[1],ancho[1],longitud[1])+calcular_volumen(alto[2],ancho[2],longitud[2])+calcular_volumen(alto[0],ancho[0],longitud[0]));
	
	return 0;
}
int calcular_volumen(int alto,int ancho,int longitud){
	return alto*ancho*longitud;
}
