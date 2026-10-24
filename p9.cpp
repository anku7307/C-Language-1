//WAP to print series of odd numbers in given range.
 #include<stdio.h>
 main(){
 	int ll, ul, i;
 printf("Enter a lower limit :");
  scanf("%d",&ll);
  printf("Enter a upper limit :");
   scanf("%d",&ul);
   for(i=ll;i<=ul;i++){
   	if(i%2!=0){
   		printf("%d ",i);
	   }
   }
 }
