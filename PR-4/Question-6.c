#include<stdio.h>
#include<conio.h>

void main()
{
	int m,n,o,p,q;
	
	for(m=1;m<=5;m++)
	{
		for(n=1;n<=m;n++)
		{
			printf("%d ",n);
		}
		for(o=m;o<=4;o++)
		{
			printf("  ",o);
		}
		for(q=m;q<=4;q++)
		{
			printf("  ",q);
		}
		for(p=m;p>=1;p--)
		{
			printf("%d ",p);
		}
		printf("\n");
	}
	
}
