// WAP demostrate concept of pointer.
#include<stdio.h>
main(){
	int x=100;
	int *p;
	p=&x;
	printf("The value=%d\n",x);
	printf("The value=%d\n",*p);
}
