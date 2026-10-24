//WAP to store 10  number input by user,now count positive, negative ,zero.
#include<stdio.h>
main(){
	int arr[10],i, pos=0,neg=0,zero=0;
	printf("Enter a number in array\n");
	 for(i=0;i<10;i++){
	 	scanf("%d",&arr[i]);
	 	if(arr[i]>0){
	 		pos=pos+1;
	 	 }
	 	 else if(arr[i]<0){
	 	 	neg=neg+1;
		  }
		  else{
		  	zero=zero+1;
		  }
	 }
	 printf("Positive number=%d\n",pos);
	 printf("Negative number=%d\n",neg);
	 printf("Zero=%d\n",zero);
} 
