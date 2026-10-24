//WAP to reverse the digits of given number.
#include<stdio.h>
main(){
	int n,rev=0,d;
	printf("Enter a number\n");
	 scanf("%d",&n);
	 
	  while(n!=0){
	  	 d=n%10;
	  	 
	rev=rev*10+d;
	n=n/10;
	  }
	 	printf("Reverse number=%d",rev);
}
