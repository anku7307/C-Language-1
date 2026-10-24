//WAP to demostrate concept of matrix.
#include<stdio.h>
main(){
	int A[3][3], i,j;
	printf("Enter a matrix of 3x3\n");
	 for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	      scanf("%d" ,&A[i][j]);
		 }
	 }
	 printf("You have entered following matrix\n");
	  for(i=0;i<3;i++){
	 	for(j=0;j<3;j++){
	 	 printf("%d ",A[i][j]);
       }
       printf("\n");
       
     }
    
   }
