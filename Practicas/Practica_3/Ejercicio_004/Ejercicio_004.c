#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char dir;
	int k=0,f=0,c=1,i,j,lab[5][6]={
	1,2,1,1,0,0,
	1,0,1,1,0,1,
	1,0,1,1,0,1,
	1,0,0,0,0,1,
	1,1,0,1,1,1
	};
	do{
		for(i=0;i<5;i++){
			for(j=0;j<6;j++){
			printf("%i ",lab[i][j]);	
			}
			printf("\n");
		}
		printf("\nIntroduce la direccion: ");scanf("%c",&dir);
		switch(dir){
			case 'A':
				if(f==0||lab[f-1][c]==1){
					break;
				}
				lab[f][c]=0;
				f--;
				lab[f][c]=2;
				break;
			case 'B':
				if(f==4||lab[f+1][c]==1){
					break;
				}
				lab[f][c]=0;
				f++;
				lab[f][c]=2;
				break;
			case 'D':
				if(c==5||lab[f][c+1]==1){
					break;
				}
				lab[f][c]=0;
				c++;
				lab[f][c]=2;
				break;
			case 'I':
				if(c==0||lab[f][c-1]==1){
					break;
				}
				lab[f][c]=0;
				c--;
				lab[f][c]=2;
				break;
			default:
			printf("\nNo es valido\n");
			break;		
		}
		system("cls");
		
	if(lab[0][5]==2){
		k++;
	}
	}while(k!=1);
	printf("Lo lograste!!!!!!");
	return 0;
}
