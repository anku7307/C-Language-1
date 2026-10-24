//WAP to print  table of given number .
  
#include<stdio.h>
main(){
	int num ,c ,table;
	printf("Enter a number :");
	scanf("%d",&num);
	c=1;
	while(c<=10){
	  table=num*c;
	  printf("%dx%d=%d\n", num,c,table);
	   c++;
     } 
	}
