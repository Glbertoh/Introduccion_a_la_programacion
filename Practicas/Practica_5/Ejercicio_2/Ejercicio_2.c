#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char linea[]="anita lava la tina";
	int longitud=strlen(linea),i;
	for(i=0;i<longitud;i++){
		printf("%c",linea[longitud-i-1]);
	}
	return 0;
}
