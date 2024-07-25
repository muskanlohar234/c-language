#include<stdio.h>
#include<conio.h>

void main()
{
	float a1,a2,a3;
	
	printf("Enter the a1: ");
	scanf("%f",&a1);
	printf("Enter the a2: ");
	scanf("%f",&a2);

	a3=180-(a1+a2);
	printf("the triangle of angle is %f",a3);
}