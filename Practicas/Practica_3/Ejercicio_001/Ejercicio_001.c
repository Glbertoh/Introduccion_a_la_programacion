#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,A[100],B[10]={};
	for (i=0;i<100;i++){
		A[i]=rand()%10+1;
		printf("%i ",A[i]);
	}
	for(j=0;j<10;j++){
		for(i=0;i<100;i++){
			if(A[i]==j+1){
				B[j]++;
			}
		}
	}
	for(j=0;j<10;j++){
		printf("\nEl numero %i esta %i veces\n",j+1,B[j]);
	}
	printf("\nSon: %i numeros",B[0]+B[1]+B[2]+B[3]+B[4]+B[5]+B[6]+B[7]+B[8]+B[9]);
	
	
	return 0;
}
