#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <dos.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,tiempo=0;
	float humedad=0;
	char cultivo[2];
	printf("Este programa controla la humedad para un ivernadero\nlos tomates deben de estar entre 50 y 60 porciento\nel melon entre 60 y 70 porciento\nlos pepinos entre 70 y 90 porciento\nla calabacita entre 55 y 80 porciento");
	printf("\n\nCuales desea cultivar? para tomate, ingrese 't'\npara melon,ingrese'm', para pepino, ingrese 'p' ");scanf("%c",&cultivo[0]);	
	printf("\nDesea anuar la calabacita?\n(Si es asi,introduza 's', si no, introduzca cualquier otra tecla) ");scanf("%c",&cultivo[1]);scanf("%c",&cultivo[1]);	
	printf("\nIngrese el nivel de humedad: ");scanf("%f",&humedad);
	
	
	switch(cultivo[0]){
		case 't':
			printf("Usted a seleccionado tomates");
			break;
		case 'm':
			printf("Usted a seleccionado melon");
			break;
		case 'p':
			printf("Usted a seleccionado pepino");
			break;
		default:
		printf("Por favor introduzca el dato correctamente");
		return 0;
		break;
	}
	if(cultivo[1]=='s'){
		printf("\nUsted a decidido anuar calabacita");
	}
	sleep(3);
	system("cls");
	
	
	
	if(cultivo[1]=='s'){
		do{
		switch(cultivo[0]){
			case 't':
				do{	
				   //-------------------------------------------- Humedad cuando es baja para tomate con calabacita	
				  if(humedad<55){
				
				    for(i=0;i<3;i++){
					  printf("\nRegando...");
					  tiempo++;
					  sleep(1);
					  if(tiempo%10==0){
						break;
					  }					
				    }
				    if(tiempo%10!=0){					
				    	humedad+=(humedad*.04);
				     }
				     printf("\nHumedad: %f",humedad);
				     //--------------------------------------------cuando es baja
			      }else if(humedad>60){
			        for(i=0;i<5;i++){
					  printf("\nAbriendo ventanas...");
					  tiempo++;
					  sleep(1);
					    if(tiempo%10==0){
						break;
					    }					
				    }					
				    humedad+=-(humedad*.03);
				    printf("\nHumedad: %f",humedad);
				  //------------------------------------------------cuando esta chido
				  }else{
				  	  for(i=0;i<10;i++){
				  	  printf("\nHumedad estable.");
				  	  tiempo++;
				  	   sleep(1);
				  	    if(tiempo%10==0){
						break;
				         }
				      }
			      }
			      //------------------------------------------------el while de abajo es para que pasen los 10 segundos antes de la siguiente inspeccion			    
			      }while(tiempo%10!=0);
				
				break;
			case 'm':
				do{	
				   //-------------------------------------------- Humedad cuando es baja para melon con calabacita	
				  if(humedad<60){
				
				    for(i=0;i<3;i++){
					  printf("\nRegando...");
					  tiempo++;
					  sleep(1);
					  if(tiempo%10==0){
						break;
					  }					
				    }
				    if(tiempo%10!=0){					
				    	humedad+=(humedad*.04);
				     }
				     printf("\nHumedad: %f",humedad);
				     //--------------------------------------------cuando es baja
			      }else if(humedad>70){
			        for(i=0;i<5;i++){
					  printf("\nAbriendo ventanas...");
					  tiempo++;
					  sleep(1);
					    if(tiempo%10==0){
						break;
					    }					
				    }					
				    humedad+=-(humedad*.03);
				    printf("\nHumedad: %f",humedad);
				  //------------------------------------------------cuando esta chido
				  }else{
				  	  for(i=0;i<10;i++){
				  	  printf("\nHumedad estable.");
				  	  tiempo++;
				  	   sleep(1);
				  	    if(tiempo%10==0){
						break;
				         }
				      }
			      }
			      //------------------------------------------------el while de abajo es para que pasen los 10 segundos antes de la siguiente inspeccion			    
			      }while(tiempo%10!=0);
				
				break;
			case 'p':
				do{	
				   //-------------------------------------------- Humedad cuando es baja para pepino con calabacita	
				  if(humedad<70){
				
				    for(i=0;i<3;i++){
					  printf("\nRegando...");
					  tiempo++;
					  sleep(1);
					  if(tiempo%10==0){
						break;
					  }					
				    }
				    if(tiempo%10!=0){					
				    	humedad+=(humedad*.04);
				     }
				     printf("\nHumedad: %f",humedad);
				     //--------------------------------------------cuando es baja
			      }else if(humedad>80){
			        for(i=0;i<5;i++){
					  printf("\nAbriendo ventanas...");
					  tiempo++;
					  sleep(1);
					    if(tiempo%10==0){
						break;
					    }					
				    }					
				    humedad+=-(humedad*.03);
				    printf("\nHumedad: %f",humedad);
				  //------------------------------------------------cuando esta chido
				  }else{
				  	  for(i=0;i<10;i++){
				  	  printf("\nHumedad estable.");
				  	  tiempo++;
				  	   sleep(1);
				  	    if(tiempo%10==0){
						break;
				         }
				      }
			      }
			      //------------------------------------------------el while de abajo es para que pasen los 10 segundos antes de la siguiente inspeccion			    
			      }while(tiempo%10!=0);
				break;
		}
		printf("\nInserte el nivel de humedad actual: ");scanf("%f",&humedad);
		system("cls");
      }while(tiempo<60);
	}else{
		do{
		switch(cultivo[0]){
			case 't':
				do{	
				   //-------------------------------------------- Humedad cuando es baja para tomate 
				  if(humedad<50){
				
				    for(i=0;i<3;i++){
					  printf("\nRegando...");
					  tiempo++;
					  sleep(1);
					  if(tiempo%10==0){
						break;
					  }					
				    }
				    if(tiempo%10!=0){					
				    	humedad+=(humedad*.04);
				     }
				     printf("\nHumedad: %f",humedad);
				     //--------------------------------------------cuando es baja
			      }else if(humedad>60){
			        for(i=0;i<5;i++){
					  printf("\nAbriendo ventanas...");
					  tiempo++;
					  sleep(1);
					    if(tiempo%10==0){
						break;
					    }					
				    }					
				    humedad+=-(humedad*.03);
				    printf("\nHumedad: %f",humedad);
				  //------------------------------------------------cuando esta chido
				  }else{
				  	  for(i=0;i<10;i++){
				  	  printf("\nHumedad estable.");
				  	  tiempo++;
				  	   sleep(1);
				  	    if(tiempo%10==0){
						break;
				         }
				      }
			      }
			      //------------------------------------------------el while de abajo es para que pasen los 10 segundos antes de la siguiente inspeccion			    
			      }while(tiempo%10!=0);
				
				break;
			case 'm':
				do{	
				   //-------------------------------------------- Humedad cuando es baja para melon 	
				  if(humedad<60){
				
				    for(i=0;i<3;i++){
					  printf("\nRegando...");
					  tiempo++;
					  sleep(1);
					  if(tiempo%10==0){
						break;
					  }					
				    }
				    if(tiempo%10!=0){					
				    	humedad+=(humedad*.04);
				     }
				     printf("\nHumedad: %f",humedad);
				     //--------------------------------------------cuando es baja
			      }else if(humedad>70){
			        for(i=0;i<5;i++){
					  printf("\nAbriendo ventanas...");
					  tiempo++;
					  sleep(1);
					    if(tiempo%10==0){
						break;
					    }					
				    }					
				    humedad+=-(humedad*.03);
				    printf("\nHumedad: %f",humedad);
				  //------------------------------------------------cuando esta chido
				  }else{
				  	  for(i=0;i<10;i++){
				  	  printf("\nHumedad estable.");
				  	  tiempo++;
				  	   sleep(1);
				  	    if(tiempo%10==0){
						break;
				         }
				      }
			      }
			      //------------------------------------------------el while de abajo es para que pasen los 10 segundos antes de la siguiente inspeccion			    
			      }while(tiempo%10!=0);
				
				break;
			case 'p':
				do{	
				   //-------------------------------------------- Humedad cuando es baja para pepino 
				  if(humedad<70){
				
				    for(i=0;i<3;i++){
					  printf("\nRegando...");
					  tiempo++;
					  sleep(1);
					  if(tiempo%10==0){
						break;
					  }					
				    }
				    if(tiempo%10!=0){					
				    	humedad+=(humedad*.04);
				     }
				     printf("\nHumedad: %f",humedad);
				     //--------------------------------------------cuando es baja
			      }else if(humedad>90){
			        for(i=0;i<5;i++){
					  printf("\nAbriendo ventanas...");
					  tiempo++;
					  sleep(1);
					    if(tiempo%10==0){
						break;
					    }					
				    }					
				    humedad+=-(humedad*.03);
				    printf("\nHumedad: %f",humedad);
				  //------------------------------------------------cuando esta chido
				  }else{
				  	  for(i=0;i<10;i++){
				  	  printf("\nHumedad estable.");
				  	  tiempo++;
				  	   sleep(1);
				  	    if(tiempo%10==0){
						break;
				         }
				      }
			      }
			      //------------------------------------------------el while de abajo es para que pasen los 10 segundos antes de la siguiente inspeccion			    
			      }while(tiempo%10!=0);
				break;
		}
		printf("\nInserte el nivel de humedad actual: ");scanf("%f",&humedad);
		system("cls");
      }while(tiempo<60);
		
		
		
	}
	
	
	
	printf("La simulacion a terminado despues de 1 min");
	
	return 0;
}
