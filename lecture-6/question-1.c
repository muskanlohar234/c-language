#include<stdio.h>

void main()
{
	int number1,number2;
	
	printf("Enter First Number: ");
	scanf("%d",&number1);
	printf("Enter Second Number: ");
	scanf("%d",&number2);
	
	if(number1<number2)
	{
		printf("First Number Is Minimum");
	}
	else if(number1==number2)
	{
		printf("Both Number Are Same");
	}
	else
	{
		printf("Second Number Is Minimum");
	}
}