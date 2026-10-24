//WAP to find factorial of given numbers.
#include<stdio.h>
main(){
	int n ,f=1;
	printf("Enter a number :");
	scanf("%d",&n);
	while(n>0){
		f=f*n;
	  n--;
	}
	printf("Factorial=%d\n",f);
}
