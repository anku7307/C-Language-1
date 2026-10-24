//WAP to find area and perimeter of ractangle user  two user defined  function area() and perimeter
#include<stdio.h>
main(){
	int area(int , int);
	int peri(int,int);
   int l,b,a,p;
   printf("Enter length of ractangle :");
    scanf("%d",&l);
    printf("Enter breadth of ractangle :");
    scanf("%d",&b);
    a=area(l,b);
    p=peri(l,b);
    printf("Area of ractangle=%d\n",a);
    printf("Perimeter of ractangle=%d\n",p);
}
 int area(int x, int y){
 	return x*y;
 }
 int peri(int x, int y){
 	return 2*(x+y);
 }
