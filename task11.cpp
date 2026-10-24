// WAP to create an array AR of ten numbers by user input .Now copy even numbers in array EAR and odd numbers
//in array OAR.

#include<stdio.h>
  main(){
  	int AR[10] , EAR[10],OAR[10];
	int i, e=0,o=0;
  	    printf("Enter 10 numbers\n");
  	    for(i=0;i<10;i++){
  	    	scanf("%d\n",&AR[i]);
  	    	if(AR[i]%2==0){
  	    		EAR[e]=AR[i];
  	    		 e++;
			}
		  	else {
		  	  OAR[o]=AR[i];
  	    		 o++;
		  	}
		   	
		    
     	}
     	
     	printf("Even numbers\n");
		     for(i=0;i<e;i++){
		     	printf("%d",EAR[i]);
			 }
			 printf("Odd numbers\n");
		     for(i=0;i<o;i++){
		     	printf("%d",OAR[i]);
			 }
  }
