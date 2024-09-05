#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,m;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		m=i*n;
		printf("%d*%d=%d\n",n,i,m);
	}
}