#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float grados;
	char letra;
	printf("Este programa transformara los grados celcius a farenheit y viceversa\ndependiendo si se le coloca una c o f");
	printf("\nIntrodusca la temperatura: ");
	scanf("%f%c",&grados,&letra);
	grados=(letra=='c'?(grados*9/5)+32:(grados-32)*5/9);
	letra=(letra=='c'?'f':'c');
	printf("Son %f %c",grados,letra);
	
	return 0;
}
