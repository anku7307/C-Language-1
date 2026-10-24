// WAP to copy one string to another string.
#include<stdio.h>
#include<string.h>
 main(){
 	char str1[50],str2[50];
 	printf("Enter source string :");
 	 gets(str1);
 	strcpy(str2,str1);
 	printf("Source string=%s\n",str1);
 	printf("Target string=%s\n",str2);
 }
