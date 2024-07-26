#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	int y;
	int ans;
	printf("Enter the value of x: ");
	scanf("%d",&x);
	printf("Enter the value of y: ");
	scanf("%d",&y);
	ans=(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);
	printf("ans=%d",ans);
}

	
