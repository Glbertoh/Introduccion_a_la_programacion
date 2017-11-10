#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float x=0,fx;
	printf("Este programa calcula el seno(2x)-x de diferentes angulos\n");
	while(x<=10){
		fx=sin(2*x)-x;
		printf("f(%f)=%f\n",x,fx);
		x+=0.5;
	}
	/*for(x=0;x<=10;x+=0.5){
		fx=sin(2*x)-x;
		printf("f(%f)=%f\n",x,fx);
	}*/
	return 0;
}
