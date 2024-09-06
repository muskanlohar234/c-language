#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		i++;
	}
	printf("%d",i);
}

