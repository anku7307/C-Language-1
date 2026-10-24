#include<stdio.h>
 main(){
 	int num ,i ;
 	printf("Enter a number to check prime:\n");
 	scanf("%d",&num);
 	  if(num==1){
		printf("Not a prime");
		return;
	   }
	   
	   	for( int i=2;i<=num/2;i++){
	   		if(num%i==0){
	   	       printf("Not a prime");
			   return;
	   			
			   
		   }
	   }
	  printf("Prime number");
 }
