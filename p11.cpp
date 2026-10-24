//WAP to reverse the digit of given numbers .
#include<stdio.h>
main(){
	int n, d ,rev=0;
	printf("Enter a numbers :");
	scanf("%d",&n);
	while(n>0){
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	printf("Reverse of digit=%d\n",rev);
}
