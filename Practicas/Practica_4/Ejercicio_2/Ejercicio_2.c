#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("Este programa cuando recibe el valor de n, calcula el valor de la serie:\n1^1-2^2+3^3-...+-n^n\n\n");
	printf("Inserte n: ");scanf("%i",&n);
	printf("\nEl resultado es: %i",calcular_serie(n));
	return 0;	
}
int calcular_serie(int n){
	int N,i;
	for(i=0;i<n;i++){
		N+=pow(i+1,i+1)*pow(-1,i+2);
	}
	return N;
}
