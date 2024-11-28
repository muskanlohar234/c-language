#include<stdio.h>
#include<conio.h>
	// wap to find maximum num & sum of num in 1d. 
void main()
{
	int i,max,n,sum=0;
	
	printf("Enter The Size Of Array: ");
	scanf("%d",&n);
	
	printf("Enter The Array's Elements: ");
	printf("\n");
	
	int a[n];
	for(i=0; i<=n; i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<=n; i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	
	max=a[0];
	
	for(i=0; i<=n; i++)
	{
		if(a[i]>max)
		{
			printf("%d\n",max);
		}
	}
	   printf("The maximum elemets is %d",max);
	
	printf("\n");
		for(i=0; i<=n; i++)
	{
		sum=sum+a[i];
	}
	   printf("The sum of number is %d",sum);
}