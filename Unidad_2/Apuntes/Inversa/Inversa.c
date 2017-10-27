#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float A[3][3]={{1,2,-1},{2,2,4},{1,3,-3}},a[2][2],b[2][2],c[2][2],d[2][2],e[2][2],f[2][2],g[2][2],h[2][2],l[2][2],adj[3][3],inv[3][3],deta,detb,detc,detd,dete,detf,detg,deth,detl,detA;
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
  //--------------------------------------------------Hasta ahora esto seguro esta bien
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        if(i==0 && j==0){
             d[i][j]=A[i][j+1];
             }
        if(i==0 && j==1){
             d[i][j]=A[i][j+1];
             }
        if(i==1 && j==0){
             d[i][j]=A[i+1][j+1];
             }
        if(i==1 && j==1){
             d[i][j]=A[i+1][j+1];
             }                 
    }
  }
  
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        if(i==0 && j==0){
             e[i][j]=A[i][j];
             }
        if(i==0 && j==1){
             e[i][j]=A[i][j+1];
             }
        if(i==1 && j==0){
             e[i][j]=A[i+1][j];
             }
        if(i==1 && j==1){
             e[i][j]=A[i+1][j+1];
             }                 
    }
  }
  
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        if(i==0 && j==0){
             f[i][j]=A[i][j];
             }
        if(i==0 && j==1){
             f[i][j]=A[i][j];
             }
        if(i==1 && j==0){
             f[i][j]=A[i+1][j];
             }
        if(i==1 && j==1){
             f[i][j]=A[i+1][j];
             }                 
    }
  }
  //---------------------------------------------------------------------------------------ei
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        if(i==0 && j==0){
             g[i][j]=A[i][j+1];
             }
        if(i==0 && j==1){
             g[i][j]=A[i][j+1];
             }
        if(i==1 && j==0){
             g[i][j]=A[i][j+1];
             }
        if(i==1 && j==1){
             g[i][j]=A[i][j+1];
             }                 
    }
  }
  
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        if(i==0 && j==0){
             h[i][j]=A[i][j];
             }
        if(i==0 && j==1){
             h[i][j]=A[i][j+1];
             }
        if(i==1 && j==0){
             h[i][j]=A[i][j];
             }
        if(i==1 && j==1){
             h[i][j]=A[i][j+1];
             }                 
    }
  }
  
  for(i=0;i<2;i++){
    for(j=0;j<2;j++){
        if(i==0 && j==0){
             l[i][j]=A[i][j];
             }
        if(i==0 && j==1){
             l[i][j]=A[i][j];
             }
        if(i==1 && j==0){
             l[i][j]=A[i][j];
             }
        if(i==1 && j==1){
             l[i][j]=A[i][j];
             }                 
    }
  }
  
  deta = (a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
  detb = (b[0][0]*b[1][1])-(b[0][1]*b[1][0]);
  detc = (c[0][0]*c[1][1])-(c[0][1]*c[1][0]); 
  detd = (d[0][0]*d[1][1])-(d[0][1]*d[1][0]);
  dete = (e[0][0]*e[1][1])-(e[0][1]*e[1][0]);
  detf = (f[0][0]*f[1][1])-(f[0][1]*f[1][0]);
  detg = (g[0][0]*g[1][1])-(g[0][1]*g[1][0]);
  deth = (h[0][0]*h[1][1])-(h[0][1]*h[1][0]);
  detl = (l[0][0]*l[1][1])-(l[0][1]*l[1][0]);                 
  detA = A[0][0]*deta-A[0][1]*detb+A[0][2]*detc;
  printf("El determinante de A es: %f\n",detA);  
  
  //------------------------------------------------ adjunta
  adj[0][0]=deta;
  adj[0][1]=-detd;
  adj[0][2]=detg;
  adj[1][0]=-detb;
  adj[1][1]=dete;
  adj[1][2]=-deth;
  adj[2][0]=detc;
  adj[2][1]=-detf;
  adj[2][2]=detl;
  //-------------------------------------------------
  for (i=0;i<3;i++){
      for(j=0;j<3;j++){
       inv[i][j]=adj[i][j]/detA;                
      }
  }
  //-------------------------------------------
  
  printf("La matriz Adjunta es:\n");
  for (i=0;i<3;i++){
      for(j=0;j<3;j++){
       printf("\t%f",adj[i][j]);                
      }
      printf("\n");
  }
  printf("La matriz A inversa es:\n");
  for (i=0;i<3;i++){
      for(j=0;j<3;j++){
       printf("\t%f",inv[i][j]);                
      }
      printf("\n");
  }
  
  system("PAUSE");	
  return 0;
}
