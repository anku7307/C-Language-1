//WAP to compare two strings are equality.
#include<stdio.h>
#include<string.h>
 main(){
 	char str1[50] , str2[50];
 	printf("Enter first string :");
 	 gets(str1);
 	printf("Enter second string :");
 	 gets(str2);
 	 if(strcmp(str1,str2)==0){
 	 	printf("Both string are equal\n");
	  }
	  else{
	  	 printf("Both string are not equal");
	  }
}
