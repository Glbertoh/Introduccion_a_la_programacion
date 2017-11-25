#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char linea[]="Electroencefalografista";
	int a=0,e=0,i=0,o=0,u=0,j,longitud=strlen(linea);
	longitud=strlen(linea);
	for(j=0;j<longitud;j++){
			if(linea[j]=='a'){
				a++;
			}
			if(linea[j]=='e'){
				e++;
			}
			if(linea[j]=='i'){
				i++;
			}
			if(linea[j]=='o'){
				o++;
			}
			if(linea[j]=='u'){
				u++;
			}
			if(linea[j]=='A'){
				a++;
			}
			if(linea[j]=='E'){
				e++;
			}
			if(linea[j]=='I'){
				i++;
			}
			if(linea[j]=='O'){
				o++;
			}
			if(linea[j]=='U'){
				u++;
			}	
	}
	printf("La frase es: %s\n",linea);
	printf("y los numeros de vocales son: a:%i e:%i i:%i o:%i u:%i",a,e,i,o,u);
	
	
	return 0;
}
