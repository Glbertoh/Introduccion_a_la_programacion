#include <stdio.h>
#include <stdlib.h>
#define SUBM(fil,col,A) for()
int main(int argc, char *argv[])
{
  float deta,detb,detc,detA,a[2][2],b[2][2],c[2][2],A[3][3]={{1,2,0},{0,1,4},{4,5,0}};
  int i,j,k;
  printf("La matriz A es:\n");
  for (i=0;i<3;i++){
      for(j=0;j<3;j++){
       printf("\t%f",A[i][j]);                
      }
      printf("\n");
  }
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        if(i==0 && j==0){
             a[i][j]=A[i+1][j+1];
             }
        if(i==0 && j==1){
             a[i][j]=A[i+1][j+1];
             }
        if(i==1 && j==0){
             a[i][j]=A[i+1][j+1];
             }
        if(i==1 && j==1){
             a[i][j]=A[i+1][j+1];
             }                 
    }
  }
  printf("Submatriz a:\n");
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
       printf("\t%f",a[i][j]);              
    }
    printf("\n");                 
  }
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        if(i==0 && j==0){
             b[i][j]=A[i+1][j];
             }
        if(i==0 && j==1){
             b[i][j]=A[i+1][j+1];
             }
        if(i==1 && j==0){
             b[i][j]=A[i+1][j];
             }
        if(i==1 && j==1){
             b[i][j]=A[i+1][j+1];
             }                 
    }
  }
  printf("Submatriz b:\n");
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
       printf("\t%f",b[i][j]);              
    }
    printf("\n");                 
  }
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        if(i==0 && j==0){
             c[i][j]=A[i+1][j];
             }
        if(i==0 && j==1){
             c[i][j]=A[i+1][j];
             }
        if(i==1 && j==0){
             c[i][j]=A[i+1][j];
             }
        if(i==1 && j==1){
             c[i][j]=A[i+1][j];
             }                 
    }
  }
  printf("Submatriz b:\n");
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
       printf("\t%f",c[i][j]);              
    }
    printf("\n");                 
  }
  deta = (a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
  detb = (b[0][0]*b[1][1])-(b[0][1]*b[1][0]);
  detc = (c[0][0]*c[1][1])-(c[0][1]*c[1][0]);                  
  detA = A[0][0]*deta-A[0][1]*detb+A[0][2]*detc;
  printf("El determinante de A es: %f\n",detA);
  
  system("PAUSE");	
  return 0;
}
