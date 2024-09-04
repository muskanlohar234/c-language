#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,sum=0;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("The Sum is %d",sum);
	
}
