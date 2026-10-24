// WAP to find  sum of two numbers using function
#include<stdio.h>
main(){
	int add(int,int);//Declaration of function
	int a,b,c;
	printf("Enter first number :");
	scanf("%d",&a);
	printf("Enter second number :");
	scanf("%d",&b);
	c=add(a,b);//Calling of function
	printf("Result=%d\n",c);
}
 int add(int x , int y)//Definition of finction
 {
 	return x+y;
 }
