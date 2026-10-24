//WAP to store five numbers in array and display those numbers.
#include<stdio.h>
main(){
	int arr[5],i;
	printf("Enter a five numbers in array\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
	}
	printf("Element of array\n");
		for(i=0;i<5;i++){
	 printf("%d\n",arr[i]);
	}
}
