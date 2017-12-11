#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,A[10],B[10]={};
	printf("Introduce 10 valores por favor: \n");
	for(i=0;i<10;i++){
		scanf("%i",&A[i]);
		
	}
	//B[0]=A[0];
	for(j=0;j<10;j++){
		B[j]=A[j];
		for(i=0;i<j;i++){
	  		if(A[j]==A[i]){	  			
	  			B[j]=0;
	  		    }
			}  
   }
   printf("\n");
   for(i=0;i<10;i++){
		printf("%i ",B[i]);
	}
	return 0;
}
