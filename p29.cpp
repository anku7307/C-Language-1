//WAP  to  Concatenate one string to another string.
#include<stdio.h>
#include<string.h>
main(){
	char Fname[50] , Lname[50];
	printf("Enter first name :");
	 gets(Fname);
	printf("Enter last name:");
	 gets(Lname);
	strcat(Fname, Lname);
	printf("Your Full name=%s\n",Fname);
}
