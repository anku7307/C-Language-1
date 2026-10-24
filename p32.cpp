//WAP to find sum of two matrix.
#include<stdio.h>
main(){
	int A[3][3], B[3][3],c[3][3],i,j;
	printf("Enter first matrix of 3x3\n");
	 for(i=0;i<3;i++){
	  for(j=0;j<3;j++){
	  	scanf("%d",&A[i][j]);
	  }
     }
     
  printf("Enter second matrix of 3x3\n");
	 for(i=0;i<3;i++){
	  for(j=0;j<3;j++){
	  	scanf("%d",&B[i][j]);
	  	  c[i][j]=A[i][j]+B[i][j];
	  }
     }
     
     printf("Resultant matrix\n");
       for(i=0;i<3;i++){
	  for(j=0;j<3;j++){
	  	printf("%d ",c[i][j]);
     }
       printf("\n");
     }
    }

