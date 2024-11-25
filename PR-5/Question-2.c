#include<stdio.h>
#include<conio.h>
	// Wap to find the largest element from a given 2D array.
void main()
{
	int r,c,i,j,largest;
	
	printf("Enter the array's row size: ");
	scanf("%d",&r);
	printf("Enter the array's column size: ");
	scanf("%d",&c);
	
	printf("\n");
	printf("Enter the array's element:\n");
	
	int a[i][j];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	} 
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\n",a[i][j]);
		}
	}
	
	for(i=1;i<r;i++)
	{
		for(j=1;j<c;j++)
		{
			if(largest<a[i][j])
			{
				largest = a[i][j];
			}
		}
	}
	
	printf("The largest element is %d: ",largest);
}
