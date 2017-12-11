#include <stdio.h>
#include <stdlib.h>
struct fecha{
	int dia;
	char mes[15];
	int anio;
};
struct cd{
	char titulo[15];
	char artista[15];
	int nocanciones;
	float precio;
	struct fecha fec;	
}cds[2];

int main(int argc, char *argv[]) {
	int i;
	float total=0;
	printf("Cuantos cd´s?");
	scanf("%i",&i);
	for(i=0;i<2;i++){
		printf("Ingrese titulo del cd%i \n",i+1);
		scanf("%s",cds[i].titulo);
		printf("Ingrese artista del cd%i\n",i+1);
		scanf("%s",cds[i].artista);
		printf("Ingrese el numero de canciones del cd%i\n",i+1);
		scanf("%i",&cds[i].nocanciones);
		printf("Ingrese el precio del cd\n");
		scanf("%f",&cds[i].precio);
		printf("Ingresa dia de creacion del cd\n");
		scanf("%i",&cds[i].fec.dia);
		printf("Ingresa mes de creacion del cd\n");
		scanf("%s",cds[i].fec.mes);
		printf("Ingresa anio de creacion del cd\n");
		scanf("%i",&cds[i].fec.anio);
		total=cds[i].precio+total;
	}
	
	printf("El suma de los precios de los cds es : $%.3f",total);
	return 0;
}
