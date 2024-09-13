#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("a = %d\n",a);
	printf("b = %d",b);
	
}