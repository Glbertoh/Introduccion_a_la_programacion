#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1,num2;
	float total;
	char operador,salida;
	printf("Este programa fucniona como una calculadora simple, usted debe ingresar 2\nnumeros y despues la operacion que desea, puede escribir *,-,+ o /, si ingresa\nla letra s o S, el programa terminara\n");
	do{
		printf("\nIngrese el primer numero: ");scanf("%d",&num1);
		printf("\nIngrese el segundo numero: ");scanf("%d",&num2);
		printf("\nQue operacion desea realizar? (*,/,+,-): ");
		scanf("%c", &operador);scanf("%c", &operador);		
		switch (operador){
			case '/':
				total=num1/num2;
				break;
			case '*':
				total=num1*num2;
				break;
			case '+':
				total=num1+num2;
				break;
			case '-':
				total=num1-num2;
				break;
		}
		printf("\nEl resultado es: %f",total);
		printf("\nSi desea salir, presione 's' o 'S': ");
		scanf("%c",&salida);scanf("%c",&salida);
		if(salida=='S'){
			salida='s';
		}
	}while(salida !='s');

	
	return 0;
}
