#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,count;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	while(i>n)
	{
		count++;
	}
	
	printf("count = %d",count);
}