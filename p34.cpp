//WAP to find transpose of given matrix.
#include<stdio.h>
main(){
	int A[3][3],i,j;
	printf("Enter a matrix of 3x3\n");
	 for(i=0;i<3;i++){
	  for(j=0;j<3;j++){
	  	scanf("%d",&A[i][j]);
	  }
     }
     
     
     printf("Transpose matrix\n");
       for(i=0;i<3;i++){
	  for(j=0;j<3;j++){
	  	printf("%d ",A[j][i]);
     }
       printf("\n");
     }
    }

