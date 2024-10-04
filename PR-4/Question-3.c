#include<stdio.h>
#include<conio.h>

void main()
{
	int m,n,o;
	
	for(m=5;m>=1;m--)
	{
		for(o=2;o<=m;o++)
		{
			printf("  ",o);
		}
		for(n=m;n<=5;n++)
		{
		   printf("%d ",n);		
		}
		printf("\n");
	}
	
}
