#include<stdio.h>
#include<conio.h>

void main()
	// wap to find the transpose matrix of a given 2D array.
{
	int r,c,i,j;
	
	printf("Enter r: ");
	scanf("%d",&r);
	printf("Enter c:");
	scanf("%d",&c);
	
	printf("Enter array's elements:\n");
	int a[i][j];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("The transpose matrix of an array:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",a[i][j]);
		}
			printf("\n");
	}
}
