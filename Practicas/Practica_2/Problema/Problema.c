#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <dos.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float humedad,tiempo,humedadpep,humedadtom,humedadmel,humedadcal;
	printf("Este programa controla la humedad para un ivernadero\nlos tomates deben de estar entre 50 y 60 porciento\nel melon entre 60 y 70porciento\nlos pepinos entre 70 y 90 porciento\nla calabacita entre 55 y 80 porciento");
	printf("\nIngrese el nivel de humedad: ");scanf("%f",&humedad);
	system("cls");
	printf("\nTomates, humedad: %f",humedad);
	printf("\nMelones, humedad: %f",humedad);
	printf("\nPepinos, humedad: %f",humedad);
	printf("\nCalabacita, humedad: %f",humedad);
	humedadpep=humedad;
	humedadtom=humedad;
	humedadmel=humedad;
	humedadcal=humedad;
	sleep(5);
	system("cls");
	while(tiempo!=1){
	 /*if(humedad<70){
		humedad=humedad+humedad*.04;
	  printf("\nTomates, humedad: %f",humedad);
	  printf("\nMelones, humedad: %f",humedad);
	  printf("\nPepinos, humedad: %f",humedad);
      printf("\nCalabacita, humedad: %f",humedad);
      printf("\nRegando...");
      sleep(3);
      system("cls");
	 }else{
	 	humedad=humedad-humedad*.03;
	 	printf("\nTomates, humedad: %f",humedad);
	    printf("\nMelones, humedad: %f",humedad);
	    printf("\nPepinos, humedad: %f",humedad);
        printf("\nCalabacita, humedad: %f",humedad);
        printf("\nAbriendo ventanillas...");
        sleep(5);
        system("cls");
	    }*/
	 if(humedadtom<50){
	 	humedadtom=humedadtom+humedadtom*.04;
	 	printf("Humedad de tomates: %f\nRegando...\n",humedadtom);
	 	sleep(3);
	 }else if(humedadtom>60){
	 	humedadtom=humedadtom-humedadtom*.03;
	 	printf("Humedad de tomates: %f\nAbriendo ventanas...\n",humedadtom);
	 	sleep(5);
	 	}else{
	 		printf("Humedad de tomates: %f\nEstable...\n",humedadtom);
	 		sleep(10);
		     }
	 
	 if(humedadmel<60){
	 	humedadmel=humedadmel+humedadmel*.04;
	 	printf("Humedad de melones: %f\nRegando...\n",humedadmel);
	 	sleep(3);
	 }else if(humedadmel>70){
	 	humedadmel=humedadmel-humedadmel*.03;
	 	printf("Humedad de melones: %f\nAbriendo ventanas...\n",humedadmel);
	 	sleep(5);
	 	}else{
	 		printf("Humedad de melones: %f\nEstable...\n",humedadmel);
	 		sleep(10);
		     }
	 
	 if(humedadpep<70){
	 	humedadpep=humedadpep+humedadpep*.04;
	 	printf("Humedad de pepinos: %f\nRegando...\n",humedadpep);
	 	sleep(3);
	 }else if(humedadpep>90){
	 	humedadpep=humedadpep-humedadpep*.03;
	 	printf("Humedad de pepinos: %f\nAbriendo ventanas...\n",humedadpep);
	 	sleep(5);
	 	}else{
	 		printf("Humedad de pepinos: %f\nEstable...\n",humedadpep);
	 		sleep(10);
		     }
	 
	 if(humedadcal<55){
	 	humedadcal=humedadcal+humedadcal*.04;
	 	printf("Humedad de calabacita: %f\nRegando...\n",humedadcal);
	 	sleep(3);
	 }else if(humedadcal>80){
	 	humedadcal=humedadcal-humedadcal*.03;
	 	printf("Humedad de calabacita: %f\nAbriendo ventanas...\n",humedadcal);
	 	sleep(5);
	 	}else{
	 		printf("Humedad de calabacita: %f\nEstable...\n",humedadcal);
	 		sleep(10);
		     }
	    
	system("cls");		
		
	}
	
	return 0;
}
