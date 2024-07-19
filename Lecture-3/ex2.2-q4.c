#include<stdio.h>
#include<conio.h>

void main()
{
	float interest,p,r,n;
	printf("Enter the simple interest of p");
	scanf("%f",&p);
	printf("Enter the simple interest of r");
	scanf("%f",&r);
	printf("Enter the simple interest of n");
	scanf("%f",&n);
	interest=p*r*n/100;
	printf("The Simple interest is %.2f",interest);
}
