#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int resp,i,j,k,estados[10][12]=
	{90 ,90 ,40 ,60 ,20 ,80 ,10 ,10 ,30 ,70 ,50 ,25
	,100,80 ,50 ,10 ,60 ,40 ,100,40 ,80 ,70 ,100,56
	,70 ,90 ,60 ,20 ,80 ,50 ,20 ,60 ,30 ,70 ,110,60
	,50 ,60 ,50 ,30 ,20 ,80 ,50 ,40 ,20 ,70 ,200,70
	,90 ,90 ,60 ,40 ,80 ,70 ,60 ,40 ,30 ,50 ,10 ,40
	,40 ,10 ,50 ,40 ,30 ,90 ,30 ,80 ,80 ,60 ,90 ,86
	,100,40 ,20 ,50 ,10 ,100,90 ,80 ,100,70 ,130,120
	,70 ,10 ,90 ,70 ,50 ,30 ,70 ,60 ,20 ,50 ,40 ,89
	,40 ,30 ,40 ,70 ,10 ,100,20 ,20 ,70 ,20 ,90 ,66
	,10 ,60 ,100,50 ,60 ,40 ,50 ,100,90 ,20 ,15 ,30
	}//Esta tabla tiene el numero de lluvias en cada estado a lo largo del año para cada estado(filas),en cada mes(columnas)
	,sonora[12],aguascalientes[12],oaxaca[12],colima[12],chihuahua[12],potosi[12],durango[12],veracruz[12],yucatan[12],tabasco[12];
	printf("El siguiente programa detecta cual fue el estado con el mayor registro\nde precipitacion pluvial en el ultimo año, el que tuvo menor lluvia\ny el mes en que mas llovio en aguascalientes\n");
	for (i=0;i<10;i++){ //guarda cada dato en su respectivo estado
		for (j=0;j<12;j++){
			if (i==0){
				sonora[j]=estados[i][j];
			}
			if (i==1){
				aguascalientes[j]=estados[i][j];
			}
			if (i==2){
				oaxaca[j]=estados[i][j];
			}
			if (i==3){
				colima[j]=estados[i][j];
			}
			if (i==4){
				chihuahua[j]=estados[i][j];
			}
			if (i==5){
				potosi[j]=estados[i][j];
			}
			if (i==6){
				durango[j]=estados[i][j];
			}
			if (i==7){
				veracruz[j]=estados[i][j];
			}
			if (i==8){
				yucatan[j]=estados[i][j];
			}
			if (i==9){
				tabasco[j]=estados[i][j];
			}			
		}
	}
	
	for(j=0;j<12;j++){
		aguascalientes[j]=estados[1][j];
		printf("Aguascalientes[%i]=%i\n",j,aguascalientes[j]);
	}//Esto esta bien, esta guardando la informacion de estados en "aguascalientes"
	
	
/*  for(k=12;k>0;k--){
		for(i=0;i<12;i++){
			resp=estados[i/11][i%11];
		   	estados[i/11][i%11]=estados[i/11][i%11+1];
		   	estados[i/11][i%11+1]=resp;			
		}	
	}*/	
for(k=12;k>0;k--){	//Este for acomoda todos los datos de lluvias de menor a mayor, para cada estado, pero parece que no
	for(i=0;i<10;i++){ 
		for(j=0;j<12;j++){		
		   if(estados[i][j]>estados[i][j+1]){
		   	resp=estados[i][j];
		   	estados[i][j]=estados[i][j+1];
		   	estados[i][j+1]=resp;			
		   }
	    }
	}
}
for(j=0;j<12;j++){
		printf("Aguascalientes[%i]=%i\n",j,estados[1][j]);
	}
	printf("El mes en el que mas llovio en aguascalientes fue: ");
	for(i=0;i<12;i++){                         //Despues del metodo de la burbuja, este revisa el ultimo dato el cual es mas grande
		if(aguascalientes[i]==estados[1][11]){ //y lo compara con los demas del mismo estado para obtener los meses donde 
			switch(i){                         //llueve igual, pero por alguna razón solo le hace caso a 1
				case 0:
					printf("\nEnero");
					break;
				case 1:
					printf("\nFebrero");
					break;
				case 2:
					printf("\nMarzo");
					break;
				case 3:
					printf("\nAbril");
					break;
				case 4:
					printf("\nMayo");
					break;
				case 5:
					printf("\nJunio");
					break;
				case 6:
					printf("\nJulio");
					break;
				case 7:
					printf("\nAgosto");
					break;
				case 8:
					printf("\nSeptiembre");
					break;
				case 9:
					printf("\nOctubre");
					break;
				case 10:
					printf("\nNoviembre");
					break;
				case 11:
					printf("\nDiciembre");
					break;				
			}			
		}
	}	
	return 0;
}
