//WAP to convert binary to decimal equivalent.

#include<stdio.h>
#include<math.h>
main(){
	int bnum, dec=0,r,p=0;
	printf("Enter a binary number :");
	scanf("%d",&bnum);
	while(bnum>0){
		r=bnum%10;
		dec=dec+r*(int)pow(2,p);
		bnum=bnum/10;
		p++;
	}
	printf("Decimal number=%d\n",dec);
}
