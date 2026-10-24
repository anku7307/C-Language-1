//WAP tp store 10 numbers in array by user input, now count even and odd numbers
#include<stdio.h>
main(){
	int arr[10],i,ec=0,oc=0;
    printf("Enter a 10 numbers in array\n");
	  for(i=0;i<10;i++){
    	scanf("%d",&arr[i]);
    	if(arr[i]%2==0){
    		ec=ec+1;
		}
		else{
			oc=oc+1;
		}
	}
	printf("Even count=%d\n",ec);
	printf("Odd count=%d\n",oc);
	
}
