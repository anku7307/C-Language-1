// WAP to swap two numbers using call by reference.
   #include<stdio.h>
   main(){
   	 void swap(int*,int*);
   	int a,b;
   	printf("Enter a first number :");
   	  scanf("%d",&a);
   	printf("Enter a Second number :");
   	  scanf("%d",&b);
   	  swap(&a,&b);
   	  printf("Value of first number=%d\n",a);
   	  printf("Value of second number=%d\n",b);
   	 
   }
   void swap(int *x , int *y){
   	    int temp;
   	    temp=*x;
   	    *x=*y;
   	    *y=temp;
   }
