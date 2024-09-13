#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	
	printf("Enter n: ");
	scanf("%d",n);

   do
   {
   	 n=n%2==0;
   }while(i<=n);
   n--;
    
   printf("The number is %d",i); 
   
}