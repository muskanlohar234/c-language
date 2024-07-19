#include<stdio.h>
#include<conio.h>

void main()
{
	float area,radius;
	const float pi=3.14;
	printf("Enter the area of circle");
	scanf("%f",&radius);
	area=pi*radius*radius;
	printf("The area of circle is %.2f",area);
}
