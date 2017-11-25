#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char frase[]="Polvo eres y en polvo te convertiras";
	char *token = strtok(frase," ");
	while(token!=NULL){
		printf("%s\n",token);
		token=strtok(NULL," ");
	}
	return 0;
}
