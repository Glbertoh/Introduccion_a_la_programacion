#include <stdio.h>
#include <stdlib.h>
int sumar (int a,int b);
main(int argc, char *argv[]) {
	int num1,num2;
	num1=5;
	num2=8;
	int total = sumar (num1,num2);
	
	printf("La numero 1 es : %d\n",num1);
	printf("La numero 2 es : %d\n",num2);
	printf("La suma es : %d\n",total);
}
int sumar (int a,int b){
	int c=0;
	c=a+b;
	return c;
}
