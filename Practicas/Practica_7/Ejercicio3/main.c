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
};

int main(int argc, char *argv[]) {
	char op;
	do{
	float precioant;
	int n,i;
	printf("\nSeleccione una opcion:\n");
	printf("1.Ingresar cd큦: \n");
	printf("2.Mostrar cd큦: \n");
	printf("3.Aplicar descuento a un cd: \n");
	printf("4.Obtener ganancia cd큦: \n");
	printf("5.Salir \n");
	
	scanf("%c",&op);
	if(op=='1'){
		printf("풠uantos cd큦 desearias agregar?\n");
		scanf("%d",&n);
		struct cd cds[n];
		for(i=0;i<n;i++){
			printf("Ingrese titulo del cd%i\n",i+1);
			scanf("%s",cds[i].titulo);
			printf("Ingrese artista del cd%i\n",i+1);
			scanf("%s",cds[i].artista);
			printf("Ingrese numero de canciones del cd%i\n",i+1);
			scanf("%d",&cds[i].nocanciones);
			printf("Ingrese precio del cd%i\n",i+1);
			scanf("%f",&cds[i].precio);
			printf("Ingrese dia de creacion del cd%i\n",i+1);
			scanf("%d",&cds[i].fer.dia);
			printf("Ingrese mes de creacion del cd%i\n",i+1);
			scanf("%s",cds[i].fer.mes);
			printf("Ingrese anio de creacion del cd%i\n",i+1);
			scanf("%d",&cds[i].fer.anio);
		}
	}else if(op=='2'){
		for(i=0;i<n;i++){
			printf("Titulo del cd %i : %s\n",i+1,cds[i].titulo);
			printf("Artista del cd%i : %s\n",i+1,cds[i].artista);
			printf("Numero de canciones del cd%i : %d\n",i+1,cds[i].nocanciones);
			printf("Precio del cd%i : %.3f\n",i+1,cds[i].precio);
			printf("Fecha de Creacion del cd%i : %d/%s/%d \n",i+1,cds[i].fer.dia,cds[i].fer.mes,cds[i].fer.anio);
		}
		
	}else if(op=='3'){
		int i;
		float total=0;
		printf("Cuantos cd큦?");
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
	}else if(op=='4'){
		int i;
		float total=0;
		printf("Cuantos cd큦?");
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
		
	}
	}while(op!='5');
	return 0;
}
