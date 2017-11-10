#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int kwh;
	float costo=0;
	printf("Este programa calcula cuanto debe de pagar dependiendo de los kWh\nque consuma, por favor ingrese los kWh consumidos: ");
	scanf("%i",&kwh);
	if (kwh<=50){
	costo=kwh*2.288+52.84;
	}else if(kwh<100){
		costo= (50*2.288)+((kwh-50)*2.762)+52.84;		
	
	}else{
		costo= (50*2.288)+(50*2.762)+((kwh-100)*3.042)+52.84;
	}
	printf("Usted debe de pagar: %f",costo);
	return 0;
}
