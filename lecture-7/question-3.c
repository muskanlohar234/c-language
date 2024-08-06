#include<stdio.h>

void main()
{
	int a,b,c,d,e;
	
	printf("Enter A: ");
	scanf("%d",&a);
	printf("Enter B: ");
	scanf("%d",&b);
	printf("Enter C: ");
	scanf("%d",&c);
	printf("Enter D: ");
	scanf("%d",&d);
	printf("Enter E: ");
	scanf("%d",&e);
	
	//a,b,c,d,e
	if(a>b)
	{
		//a,c,d,e
		if(a>c)
		{
			//a,d,e
			if(a>d)
			{
				//a,e
				if(a>e)
				{
					//a
					printf("A is max");
				}
				else
				{
					//e
					printf("E is max");
				}
			}
			else
			{
				//d,e
				if(d>e)
				{
					//d
					printf("D is max");
				}
				else
				{
					//e
					printf("E is max");
				}
			}
		}
		else
		{
			//c,d,e
			if(c>d)
			{
					//c,e
				if(c>e)
				{
					//c
					printf("C is max");
				}
				else
				{
					//e
					printf("E is max");
				}
			}
			else
			{
				//d,e
				if(d>e)
				{
					//d 
					printf("D is max");
				}
				else
				{
					//e
					printf("E is max");
				}
			}
		}
		
	}
	else
	{
		//b,c,d,e
		if(b>c)
		{
			//b,d,e
			if(b>d)
			{
				//b,e
				if(b>e)
				{
					//b
					printf("B is max");
				}
				else
				{
					//e
					printf("E is max");
				}
			}
			else
			{
				//c,d,e
				if(c>d)
				{
					//c,e
					if(c>e)
					{
						//c
						printf("C is max");
					}
					else
					{
						//e
						printf("E is max");
					}
				}
				else
				{
					//d,e
					if(d>e)
					{
						//d
						printf("D is max");	
					}
					else
					{
						//e
						printf("E is max");
					}
				}
			}
		}
		else
		{
			//c,d,e
			if(c>d)
			{
				//c,e
				if(c>e)
				{
					//c
					printf("C is max");
				}
				else
				{
					//e
					printf("E is max");
				}
			}
			else
			{
				//d,e
				if(d>e)
				{
					//d
					printf("D is max");
				}
				else
				{
					//e
					printf("E is max");
				}
			}
		}
	}
}





