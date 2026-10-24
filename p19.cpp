//WAP to store 10  number input by user,reverse of array.
#include<stdio.h>
main(){
	int arr[5],i;
	printf("Enter a number in array\n");
	 for(i=0;i<5;i++){
	 	scanf("%d",&arr[i]);
	 }
	 printf("Reverse element of array :\n");
	 for(i=4;i>=0;i--){
	printf("%d\n",arr[i]);
	}
 }  
