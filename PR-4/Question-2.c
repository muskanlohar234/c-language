#include<stdio.h>
#include<conio.h>

void main()
{
	int m,n,o=11;
	
	for(m=1;m<=4;m++)
	{
		for(n=1;n<=m;n++)
		{
			printf("%d ",o);
			o++;
		}
		printf("\n");
	}
	
}
