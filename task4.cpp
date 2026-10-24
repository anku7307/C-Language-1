#include<stdio.h>
main(){
	int x,y;
	printf("Enter a first number X:\n");
	 scanf("%d",&x);
	 printf("Enter a second number Y:\n");
	  scanf("%d",&y);
	  if( x>0&&y>0){
	  	printf("Points line in 1st quardent\n");
	  }
	  else if(x<0&&y>0){
	  	printf("Points line in 2nd Quardent\n");
	  }
	  else if(x<0&&y<0){
	  	  printf("Points line in 3rd Quardent\n");
	  }
	  else if(x>0&&y<0){
	  	 printf("Points line in 4rth Quardent\n");
	  }
	    else if(x==0){
	    	printf("Points line in Y-axis\n");
		}
		else if(y==0){
			printf("Points line in X-axis\n");
		}
	  else{
	  	printf("Points line in Origine\n");
	  }
}
