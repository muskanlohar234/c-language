#include<stdio.h>
#include<conio.h>

void main()
{
	float celsius,fahrenheit;
	
	printf("enter the celsius temperature");
	scanf("%f",&celsius);
	
	fahrenheit=(1.8*celsius)+32;
	
	printf("the fahrenheit temperature is%.2f",fahrenheit);
}