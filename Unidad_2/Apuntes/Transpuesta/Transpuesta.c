#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int i,j;
  float A[2][3]={{2,4,6},{8,10,12}};
  printf("A=\n");
  for(i=0;i<2;i++){
                   for (j=0;j<3;j++){
                       printf("\t%f",A[i][j]);                   
                   }
  printf("\n");                                   
  }
  printf("A'=\n");
  float At[3][2];
  for(j=0;j<3;j++){
                   for (i=0;i<2;i++){
                       At[j][i]=A[i][j];                   
                   }                                  
  }
  for(i=0;i<3;i++){
                   for (j=0;j<2;j++){
                       printf("\t%f",At[i][j]);                   
                   }
  printf("\n");                                   
  }
    
  system("PAUSE");	
  return 0;
}
