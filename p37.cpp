//WAP a program to create an array of ten numbers by user input . Now finds greatest  and smallest number
#include<stdio.h>
main(){
	int arr[10],i ,max,min;
	printf("Enter a array\n");
	 for(i=0;i<10;i++){
	 	scanf("%d",&arr[i]);
	}
	 max=arr[0];
	 min=arr[0];
	 for(i=0;i<10;i++){
	 	if(max<arr[i]){
	 		max=arr[i];
		 }
		 if(min>arr[i]){
		 	min=arr[i];
		 }
	 }
	  printf("Greatest number=%d\n",max);
	  printf("Smallest number=%d\n",min);
	 }
