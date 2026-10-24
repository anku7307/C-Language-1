//WAP to take a string as input . now find length of string without using build - in  function.
 
 #include<stdio.h>
 main(){
 	char str[100];
	 int l=0;
	 printf("Enter a string\n");
	  gets(str);
	  while(str[l]!='\0'){
	  	l++;
	  } 
	  printf("length of string=%d\n",l);
 }
