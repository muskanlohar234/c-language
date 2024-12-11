#include<stdio.h>
#include<conio.h>
   //Write a program in C to make such a pattern using loop concept.
  
void main()
{
	int i,j;
	
	for(i=5; i>=1; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}