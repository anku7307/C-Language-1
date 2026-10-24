

// WAP to check given two matrix are equal or not.
#include<stdio.h>
 main(){
 	 int A[3][3],B[3][3] ,i,j,f=0;
 	 printf("Enter First matrix of 3x3\n");
 	  for(i=0;i<3;i++){
 	  	for(j=0;j<3;j++){
 	  		scanf("%d",&A[i][j]);
		   }
	   }
	   printf("Enter Second matrix of 3x3\n");
 	  for(i=0;i<3;i++){
 	  	for(j=0;j<3;j++){
 	  		scanf("%d",&B[i][j]);
		   }
	   }
	   printf("To check the matrix are equal or not\n");
	     for(i=0;i<3;i++){
 	  	for(j=0;j<3;j++){
 	  		if(A[i][j]==B[i][j]){
 	  			continue;
			   }
			   else{
			   	  f=1;
			   	  break;
			   }
		   }
	   }
	      if(f==0){
	      	printf("Both matrix are equal\n");
		  }
		  else{
		  	printf("Both matrix are not equal\n");
		  }
 }
