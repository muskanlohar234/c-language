#include<stdio.h>
#include<conio.h>

void main()
{
	float perimeter,radius;
	const float pi=3.14;
	printf("Enter the perimeter of circle");
	scanf("%f",&radius);
	perimeter=2*pi*radius;
	printf("The perimeter of circle is %.2f",perimeter);
}
