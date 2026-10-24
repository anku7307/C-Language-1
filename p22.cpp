// WAP to search a number in array.
#include<stdio.h>
main(){
	int arr[10],i,num;
	printf("Enter 10 numbers\n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter a number to be search\n");
	 scanf("%d",&num);
	 for(i=0;i<10;i++){
	 	if(num==arr[i]){
	 		printf("Number is found at position : %d\n",(i+1));
	 		return 0;
		 }
	 }
	 printf("Number is not found\n");
}
