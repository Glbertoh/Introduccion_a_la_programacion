#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int base,exponente;
int main(int argc, char *argv[]) {
	printf("Este programa recibe calcula un entero a una potencia, para ello\nse le pedira que ingrese la base y luego el\nexponente.\n");
	printf("Por favor ingrese la base: ");scanf("%i",&base);
	printf("Por favor ingrese el exponente: ");scanf("%i",&exponente);
	printf("\nEl resultado de %i^%i es: %i",base,exponente,entero_potencia(base,exponente));
	return 0;
}
int entero_potencia(base,exponente){
	return pow(base,exponente);
}
