//WAP to store ten numbers in array and find Minimum number.
#include<stdio.h>
main(){
	int arr[10],i,min;
	printf("Enter a ten numbers\n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	  min=arr[0];
	  for(i=1;i<10;i++){
	  	if(min>arr[i]){
	  		min=arr[i];
		  }
	  }
	  printf("Minimum number=%d\n",min);
}
