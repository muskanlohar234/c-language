#include<stdio.h>
#include<conio.h>

void main()
{
	int m,n,o;
	
	for(m=1;m<=5;m++)
	{
		for(o=m;o<5;o++)
		{
			printf("  ",o);
		}
		for(n=1;n<=m;n++)
		{
			if(n%2==0)
			{
					printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
	
}
