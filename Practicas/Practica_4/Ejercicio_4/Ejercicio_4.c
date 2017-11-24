#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

char opcion;
float calcular_resistencia(float voltaje,float corriente){
	return voltaje/corriente;
}
float calcular_voltaje(float resistencia,float corriente){
	return resistencia*corriente;
}
float calcular_corriente(float voltaje,float resistencia){
	return voltaje/resistencia;
}
int main(int argc, char *argv[]) {
	float resistencia,voltaje,corriente;
	printf("Este programa utiliza la ley de ohm para calcular resistencia, voltaje o\n corriente, dependiendo de lo que desee obtener el usuario");
	printf("\nPor favor seleccione que desea calcular(I para corriente,V para voltaje\n y R para resistencia): ");scanf("%c",&opcion);
	switch(opcion){
		case 'R':
			printf("\nPor favor ingrese el voltaje: ");scanf("%f",&voltaje);
			printf("Por favor ingrese la corriente: ");scanf("%f",&corriente);
			printf("\nEl voltaje es %fV y la corriente %fA, por lo cual la resistencia es de %f",voltaje,corriente,calcular_resistencia(voltaje,corriente));
			break;
		case 'V':
			printf("\nPor favor ingrese la resistencia: ");scanf("%f",&resistencia);
			printf("Por favor ingrese la corriente: ");scanf("%f",&corriente);
			printf("\nLa resistencia es de %fOhms y la corriente de %fA, por lo cual el voltaje es de %f",resistencia,corriente,calcular_voltaje(resistencia,corriente));
			break;
		case 'I':
			printf("\nPor favor ingrese el voltaje: ");scanf("%f",&voltaje);
			printf("Por favor ingrese la resistencia: ");scanf("%f",&resistencia);
			printf("\nEl voltaje es %fV y la resistencia de %fOhms, por lo cual la corriente es de %f",voltaje,resistencia,calcular_corriente(voltaje,resistencia));
			break;
		default:
			printf("\nUsted a seleccionado mal");
			break;
	}
	return 0;
}



