//WAP to store 10 numbers in array by user input  , now find sum and array.
#include<stdio.h>
main(){
	int arr[10],i,sum=0;
	 float avg;
	printf("Enter a 10 numbers in array\n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
		sum=sum+arr[i];
	}
	avg=(float)sum/10; //typecasting :- canvert one data type to another data type  Ex:-sum=(float)sum/10
	printf("sum=%d\n",sum);
	printf("Average=%.2f\n",avg);
}
