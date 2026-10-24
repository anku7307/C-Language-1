/*WAP to generate fibonacci up to series up to n trems.
  0,1,1,2,3,5,8,........................*/

#include<stdio.h>
main(){
	int n1=0,n2=1,n3,n,i;
	printf("How many terms you want in series :");
	scanf("%d",&n);
	printf("%d %d ",n1,n2);
     for(i=1;i<=n-2;i++){
     	n3=n1+n2;
     	printf("%d ",n3);
     	n1=n2;
     	n2=n3;
	 }
}

