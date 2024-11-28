#include<stdio.h>
#include<conio.h>
	// wap to find even number in udf.
void main()
{
   even("10");
}

int even(int i, int n)
{
	printf("Enter n: ");
	scanf("%d",&n);
	
	printf("The Even number is: ");
	printf("\n");
	for(i=0; i<=n; i++)
	{
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
	
}