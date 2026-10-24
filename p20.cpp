//WAP to store ten numbers in array and find gretest number.
#include<stdio.h>
main(){
	int arr[10],i,max;
	printf("Enter a ten numbers\n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	  max=arr[0];
	  for(i=1;i<10;i++){
	  	if(max<arr[i]){
	  		max=arr[i];
		  }
	  }
	  printf("Maximum number=%d\n",max);
}
