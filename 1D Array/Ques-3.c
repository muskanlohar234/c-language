#include<stdio.h>
#include<conio.h>

void main()
{
	int n,sum;
	
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	int a[n];
	int i;

	for(i=0;i<n;i++)
	{
		printf("Enter a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{		
		printf("%d ",a[i]);
	}
	
	printf("\n");
	
	for(i=0;i<n;i++)
	{		
		sum=sum+a[i];
	}
		printf("The sum is %d ",sum);
}