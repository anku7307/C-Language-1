//WAP to print series of even number in given range

#include<stdio.h>
main(){ 
    int ll ,ul, c;
	printf("Enter a lower limit : ");
	scanf("%d", &ll);
	printf("Enter a upper limit : ");
	scanf("%d", &ul);
	c=ll;
	while(c<=ul){
		if(c%2==0){
			printf("%d ",c);
		}
		  c++;
	}
}
