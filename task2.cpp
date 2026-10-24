#include<stdio.h>
main(){
	 int a,b, res, ch=0;
	 printf("Enter a two number \n");
	 scanf("%d %d",&a, &b);
	     printf("1. Enter for Addition\n");
		 printf("2. Enter for Subtraction\n");
		  printf("3. Enter for Multiplication\n");
		 printf("4. Enter for DIvison\n");
	     printf("5.Enter for reminder");
	   
	   
	   printf("Enter a choice\n");
	   scanf("%d",&ch);
	  switch(ch){
	  	      
		case 1:
		   res=a+b;
			printf("Sum %d",res);
	   
	break;
	   	case 2:
		   res=a-b;
 			printf("Subtraction %d",res);
	break;
	    case 3:
	 	 res=a*b;
	 	   printf("multiplication %d", res);
	break;
	    case 4:
	    	 res=a/b;
	    	printf("Division of number %d",res);
			break;
		case 5:
		 res=a%b;
		  printf("Modular %d",res);
		  break;
		  default:
		   printf("Invalid choice");
		   break;

   }
}
