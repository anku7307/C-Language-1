// WAP to print of Series of even numbers is given range :
  #include<stdio.h>
  main(){
  	int upper, lower, i;
  	printf("Enter a Upper numbers :\n");
  	scanf("%d",&upper);
  	printf("Enter a lower number:\n");
  	scanf("%d",&lower);
  	 for(i=upper;i<=lower;i++){
  	 	  if(i%2==0){
  	 	  	 printf("%d\n",i);
			 }
		
	   }
  }
