// WAP to find sum f digit og given number

#include<stdio.h>
main(){
	int n, sum=0,res;
	printf("Enter a number :");
	scanf("%d",&n);
	while(n>0){
		res=n%10;
		sum=sum+res;
		n=n/10;
	}
	printf("sum of digit=%d\n",sum);
}
