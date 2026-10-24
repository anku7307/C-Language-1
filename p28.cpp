//WAP  to  Concatenate one string to another string.
#include<stdio.h>
#include<string.h>
main(){
	char str1[50] , str2[50];
	printf("Enter a first string :");
	 gets(str1);
	printf("Enter a second string :");
	 gets(str2);
	strcat(str1, str2);
	printf("Concatenate of Two strings=%s\n",str1);
}
