// WAP to make simple calculator using switch with functions
#include<stdio.h>
 int main(){
	int add(int, int);
	int sub(int , int);
    int mul(int, int);
	int div(int , int);
	int mod(int,int);
	int a,b,res,ch=0;
	printf("Simple calculator :\n");
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("5.modulo\n");
	printf("Enter First number :");
	 scanf("%d",&a);
	 printf("Enter Second number :");
	 scanf("%d",&b);
	 printf("Enter a choice :");
	 scanf("%d",&ch);
     
    switch(ch){
 	case 1:
 		 res=add(a,b);
 		 printf("Results=%d\n",res);
 		 break;
    case 2:
    	 res=sub(a,b);
 		 printf("Results=%d\n",res);
 		  break;
    case 3:
 		  res=mul(a,b);
 		 printf("Results=%d\n",res);
 		  break;
 	case 4:
 		 res=div(a,b);
 		 printf("Results=%d\n",res);
 		   break;
 	case 5:
 		 res=mod(a,b);
 		 printf("Results=%d\n",res);
 		 break;
    default:{
    	printf("Invalid choice :\n");
		break;
	}
	 return 0;
 }
}
// Function difinition
  int add(int x,int y){
  	return x+y;
  }
   int sub(int x,int y){
   	 return x-y;
   }   
   int mul(int x,int y){
   	 return x*y;
   }
   int div(int x,int y){
   	 return x/y;
   }
   int mod(int x, int y){
   	   return x%y;
   }

      
