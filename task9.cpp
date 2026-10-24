// WAP to create an array of ten numbers by user input to count positive , negative and zero.
#include<stdio.h>
 int main(){
	int arr[10];
	 int i,positive=0,negative=0 , zero=0;
	printf("Enter 10 numbers :\n");
	  for(i=0;i<10;i++)
	  {
	  	scanf("%d",&arr[i]);
	  	
	      if(arr[i]>0){
	   	     positive++;
	   }
	      else if(arr[i]<0)
	       {
	   	   negative++; 
	   }
	     else {
	     	zero++;
		 }
		 printf("Positive numbers=%d\n",positive);
		 printf("Negative numbers =%d\n",negative);
		 printf("Zero numbers=%d\n",zero);
   }
   
}

