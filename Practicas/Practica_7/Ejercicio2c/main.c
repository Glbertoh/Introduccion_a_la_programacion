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
	struct fecha fer;	
}cd1={"Monumentos","Sputnik",14,149.99,10,"Diciembre",2017};

int main() {
	float precioant;
	char op;
	printf("\nTitulo: %s\n",cd1.titulo);
	printf("Artista: %s\n",cd1.artista);
	printf("Numero de Canciones: %d\n",cd1.nocanciones);
	printf("Precio: $%.3f\n",cd1.precio);
	printf("Fecha: %i/%s/%i \n",cd1.fer.dia,cd1.fer.mes,cd1.fer.anio);
	printf("¿Desea aplicar un descuento del 25 al precio de este cd? s/n\n");
	scanf("%c",&op);
	if(op=='s'){
		precioant=cd1.precio*.75;
		cd1.precio=precioant;
		printf("\nTitulo: %s\n",cd1.titulo);
		printf("Artista: %s\n",cd1.artista);
		printf("Numero de Canciones: %d\n",cd1.nocanciones);
		printf("Precio: $%.3f <---\n",cd1.precio);
		printf("Fecha: %i/%s/%i \n",cd1.fer.dia,cd1.fer.mes,cd1.fer.anio);	
	}
	
	return 0;
}
