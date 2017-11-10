#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int cant=0,sum,calif;
	float prom;
	printf("Este programa calcula tu promedio, por lo que se te pediran\n5 calificaciones para promediar\n");
	while (cant<5){
		printf("\nIngresa calificacion: ");
		scanf("%i",&calif);
		sum+=calif;
		cant++;
	}
	prom=sum/5;
	printf("\nTu promedio es de: %f",prom);
	
	return 0;
}
