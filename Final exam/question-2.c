#include<stdio.h>
#include<conio.h>
	//C program to find sum of elements of a matrix.

void main()
{
	int n;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	int a[n],i,sum=0;
	
	for(i=0; i<=n; i++)
	{
		printf("Enter a[%d]",i);
		scanf("%d",&a[i]);
	    printf("\n");
	}	
	for(i=0; i<=n; i++)
	{
		printf("%d",a[i]);
	}
	
	printf("\n");
	
	for(i=0; i<=n; i++)
	{
		sum=sum+a[i];
	}
	
		printf("The sum is %d ",sum);
}