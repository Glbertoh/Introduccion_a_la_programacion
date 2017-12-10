#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int array1[5]={1,2,3,4,5};
	int array2[5]={5,4,3,2,1};
	int arr1[5],arr2[5],arr3[5];
	int j,op,i=4,f;
	char op1[30]="Imprimir un arreglo";
	char op2[80]="Recibir 2 arreglos y regresar un 3ro con la suma de ambos";
	char op3[80]="Regresar el arreglo introducido de manera invertida";
	char op4[80]="Regresar el arreglo de numeros introducidos con P|I segun el caso";
	char pi[5];
	int n = sizeof(array1) / sizeof(int);
	printf("1.%s \n",op1);
	printf("2.%s\n",op2);
	printf("3.%s\n",op3);
	printf("4.%s\n",op4);
	scanf("%d",&op);
	if(op==1){
		printf("\nSelecciono : %s \n",op1);
		for(j=0;j<n;j++){
			printf("%d\n",array1[j]);
		}
		
	}else if(op==2){
		printf("\nSelecciono : %s\n",op2);
	    printf("Introduce 5 valores para el primer arreglo\n");
	 	for(j=0;j<5;j++){
	        scanf("%d",&arr1[j]);
	    }
	    printf("Introduce 5 valores para el segundo arreglo\n");
	    for(j=0;j<5;j++){
	    	scanf("%d",&arr2[j]);
	    }
	    printf("El arreglo 3 es la suma de los 2 primeros arreglos\n");
	    for(j=0;j<5;j++){
		    arr3[j]=arr1[j]+arr2[j];
	 	    printf("Posicion %d --> %d\n",j,arr3[j]);
	    }
	}else if(op==3){
		printf("\nSelecciono : %s\n",op3);
		
		for (i=0, j = 4;i<5;i++,j--){
			f=i+1;
        	printf ("Ingrese dato %d \n",f);
        	scanf ("%d",&arr1[i]);
        	arr2[j] = arr1[i];
    	}   
    	for (i =0; i < 5; i++){
    		printf("%i: %i\n",i, arr2[i]);
		}
        
	}else if(op==4){
		printf("\nSelecciono : %s\n",op4);
		for (i=0, j = 4;i<5;i++,j--){
			f=i+1;
        	printf ("Ingrese dato %d \n",f);
        	scanf ("%d",&arr1[i]);
    	} 
    	for(j=0;j<5;j++){
			if(arr1[j]% 2 == 0){
				pi[j]='p';
			}else{
				pi[j]='i';
			}
		}
		for(j=0;j<5;j++){
			printf("%c \n",pi[j]);
		}
		  
	}else{
		printf("No ingreso un opcion valida");
	}
	
	
	return 0;
}
