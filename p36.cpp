,// WAP To print Two array are equal or not.
#include<stdio.h>
main(){
	int A[10] ,  B[10],i, f=0;
	printf("Enter first number in array\n");
	 for(i=0;i<10;i++){
	 	scanf("%d",&A[i]);
	 }
	 printf("Enter Second number in array\n");
	 for(i=0;i<10;i++){
	 	scanf("%d",&B[i]);
	 }
	  for(i=0;i<10;i++){
	  	if(A[i]==B[i]){
	  		continue;
		  }
		  else{
		  	 f=1;
		  	 break;
		  }
	  }
	  if(f==0){
	  	printf("Both array are equal\n");
	  }
	  else{
	  	printf("Both array are not equal\n");
	  }
}
