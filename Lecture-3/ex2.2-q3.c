#include<stdio.h>
#include<conio.h>

void main()
{
	float triangle,b,l;
	printf("Enter the area of b");
	scanf("%f",&b);
	printf("Enter the area of l");
	scanf("%f",&l);
	triangle=0.5*b*l;
	printf("The area of triangle is %.2f",triangle);
}
