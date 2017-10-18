#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float c[]={},s,prom; 
int i;
s=0;
i=0;
  do{
  printf("Introduce un numero ");
  scanf("%f",&c[i]);
  
  s = s + c[i];
  i++;
  printf("\n");
  }
  while( c[i-1] !=0);
  prom=s/(i-1);
  printf("Tu promedio es de: %f y la suma es %f\n",prom,s);
  system("PAUSE");	
  return 0;
}
