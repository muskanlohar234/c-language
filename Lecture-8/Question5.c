#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	do
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
		n--;
	}while(n>=1);

}