//WAP to create an array of ten numbers by user input . Now a search in array.
#include<stdio.h>
main(){
	int arr[10],i,num,f=0;
	printf("Enter a array\n");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter a number for searching in aray:");
	  scanf("%d",&num);
	  for(i=0;i<10;i++){
	  	if(arr[i]==num){
	  		printf("Number is found at position =%d\n",i+1);
	  		 f=1;
	  		return 0;
		  }
	  }
	  if(f==0){
	  	printf("Number is not found\n");
	  }
	  
}
