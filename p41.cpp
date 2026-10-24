//WAP to find cubiod valume of using function
#include<stdio.h>
main(){
	int vol(int ,int,int);//Declaration of function 
	int l,w,h,v;
	printf("Enter a length :");
	scanf("%d",&l);
		printf("Enter a width :");
	scanf("%d",&w);
		printf("Enter a height:");
	scanf("%d",&h);
	v=vol(l,w,h);
		printf("Result=%d\n",v);
}
 int vol(int x,int y,int z)
 {
 	return x*y*z;
 }
