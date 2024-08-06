#include<stdio.h>

void main()
{
	int a,b,c,d;
	
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	printf("Enter C: ");
	scanf("%d",&c);
	printf("Enter D: ");
	scanf("%d",&d);
	
	//a,b,c,d
	if(a>b)
	{
		//a,c,d
		if(a>c)
		{
			//a,d
			if(a>d)
			{
				//a
				printf("A is max");
			}
			else
			{
				//d
				printf("D is max");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				//c
				printf("C is max");
			}
			else
			{
				//d
				printf("D is max");
			}
		}
	}
	else
	{
		//b,c,d
		if(b>c)
		{
			//b,d
			if(b>d)
			{
				//b
				printf("B is max");
			}
			else
			{
				//d
				printf("D is max");
			}
		}
		else
		{
		//c,d
		if(c>d)
		{
			//c
			printf("C is max");
		}
		else
		{
			//d
			printf("D is max");
		}
	}	
}
}