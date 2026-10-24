// WAP to create an array of ten numbers by users input Now search a number in array using linear search.
#include<stdio.h>
main(){
	int arr[10] ,i,search ,found=0;
	//Input array element 
	printf("Enter 10 numbers\n");
	 for(i=0;i<=10;i++){
	 	scanf("%d",&arr[i]);
	 }
	 printf("Enter a search number \n");
	 scanf("%d",&search);
	 
	 for(i=0;i<10;i++){
	 	if(arr[i]==search){
	 		printf("Number found at position %d\n" ,i+1);
	 		found=1;
		 }
	 }
	 if(found==0){
	 	printf("Number not found in the array\n");
	 }
	 
}
