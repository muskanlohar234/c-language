#include<stdio.h>
#include<conio.h>
	// WAP in c to make such a pattern using the loop concept.
void main()
{
	int i,j;
	
	for(i=5; i>=1; i--)
	{
		for(j=i; j>=5; j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}