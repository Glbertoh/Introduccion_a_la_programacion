#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char linea[]="25/11/17";
	printf("%s es equivalente a ",linea);
	char *dia=strtok(linea,"/");
	char *mes=strtok(NULL,"/");
	char *anio=strtok(NULL,"/");
	printf("%s de ",dia);
	if(strcmp(mes,"01")==0){
		printf("Enero");
	}
	if(strcmp(mes,"02")==0){
		printf("Febrero");
	}
	if(strcmp(mes,"03")==0){
		printf("Marzo");
	}
	if(strcmp(mes,"04")==0){
		printf("Abril");
	}
	if(strcmp(mes,"05")==0){
		printf("Mayo");
	}
	if(strcmp(mes,"06")==0){
		printf("Junio");
	}
	if(strcmp(mes,"07")==0){
		printf("Julio");
	}
	if(strcmp(mes,"08")==0){
		printf("Agosto");
	}
	if(strcmp(mes,"09")==0){
		printf("Septiembre");
	}
	if(strcmp(mes,"10")==0){
		printf("Octubre");
	}
	if(strcmp(mes,"11")==0){
		printf("Noviembre");
	}
	if(strcmp(mes,"12")==0){
		printf("Diciembre");
	}
		printf(" de 20%s",anio);
	
	return 0;
}
