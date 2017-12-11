#include <stdio.h>
#include <stdlib.h>

struct fecha{
	int dia;
	char mes[15];
	int anio;
}fec1;
struct cd{
	char titulo[15];
	char artista[15];
	int nocanciones;
	float precio;	
}cd1;

int main(int argc, char *argv[]) {
	printf("Ingrese titulo del cd \n");
	scanf("%s",cd1.titulo);
	printf("Ingrese artista del cd\n");
	scanf("%s",cd1.artista);
	printf("Ingrese el numero de canciones del cd\n");
	scanf("%i",&cd1.nocanciones);
	printf("Ingrese el precio del cd\n");
	scanf("%f",&cd1.precio);
	printf("Ingresa dia de creacion del cd\n");
	scanf("%i",&fec1.dia);
	printf("Ingresa mes de creacion del cd\n");
	scanf("%s",fec1.mes);
	printf("Ingresa anio de creacion del cd\n");
	scanf("%i",&fec1.anio);
	
	return 0;
}
