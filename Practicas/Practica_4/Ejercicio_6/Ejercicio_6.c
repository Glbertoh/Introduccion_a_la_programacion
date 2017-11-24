#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int resu=1;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n){
	if(n>1){
	resu=resu*(n-1);
	n--;
	factorial(n);	
	}
	return resu;
}
int main(int argc, char *argv[]) {
	int n;
	printf("Este programa calcula el factorial del numero que se desee");
	printf("\nIntroduce el valor de n: ");scanf("%i",&n);
	resu=n;
	printf("\n%i",factorial(n));
	return 0;
}
