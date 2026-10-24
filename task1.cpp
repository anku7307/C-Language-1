#include<stdio.h>
main(){
	int a ,b, c;
	printf("Enter three unequal number\n");
	scanf("%d %d %d",&a,&b,&c);
	  if(a>b && a>c){
	  	printf("Greatest nuber is a :%d",a);
	  }
	  else if(b>a && b>c){
	  	printf("Greatest number is b : %d",b);
	  }
	  else{
	  	printf("Greatest number is c :%d",c);
	  }
}
