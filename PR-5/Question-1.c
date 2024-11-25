#include<stdio.h>
#include<conio.h>
	// Wap to finds all the negative elements from a given 1D array.
void main()
{
	int n;
	
	printf("Enter the aaray's size:\n");
	scanf("%d",&n);
	
	printf("Enter the array's element:\n");
	
	int a[n];
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	
	printf("\nNegative elements from an Array: ");
	
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			printf("%d",a[i]);
		}
	}
	
}
