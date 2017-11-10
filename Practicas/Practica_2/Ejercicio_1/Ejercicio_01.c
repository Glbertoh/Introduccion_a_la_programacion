#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	float fx;
	printf("El siguiente utiliza una funcion la cual si x<=0 entonces f(x)=x^2-x\nsi x>0 entonces f(x)=-x^2+3x\nIntroduce el valor de x: ");
	scanf("%i",&x);
	if(x<=0){
		fx=pow(x,2)-x;
		printf("f(x)=%f",fx);
			
	}else{
		fx=-pow(x,2)+3*x;
		printf("f(x)=%f",fx);
		
	}
		
	return 0;
}
