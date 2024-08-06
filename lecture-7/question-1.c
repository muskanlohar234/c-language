#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	printf("Enter C: ");
	scanf("%d",&c);
	
	//a,b,c
	if(a<b)
	{
		//a,c
		if(a<c)
		{
			//a
			printf("A is min");
		}
		else
		{
			//c
			printf("C is min");
		}
	}
	else
	{
		//b,c
		if(b<c)
		{
			//b
			printf("B is min");
		}
		else
		{
			//c
			printf("C is min");	
		}
	}
}





