#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num_productos,seleccion,total,i;
	
	printf("MENU:\n--------------------------------------------------------\n\n\t1. Hamburguesa chica con papas y refresco       $20\n\t2. Hot dog y refresco   \t\t\t$18\n\t3. Ensalada rusa\t\t\t\t$15");
	printf("\nPor favor indique el numero de productos que desea llevar: "); scanf("%i",&num_productos);
	for(i=0;i<num_productos;i++){
		printf("\nSeleccione por favor: ");
		scanf("%i",&seleccion);
		switch (seleccion){
			case 1:
				total+=20;
				break;
			case 2:
				total+=18;
				break;
			case 3:
				total+=15;
				break;
				
		}
		
	}
printf("\nSerian $%i en total",total);	
	return 0;
}
