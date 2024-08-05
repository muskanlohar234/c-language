#include<stdio.h>

void main()
{
	int number;
	
	printf("Enter The Number: ");
	scanf("%d",&number);
	
	if(number>0)
	{
		printf("The Number Is Positive");
	}
	else if(number==0)
	{
		printf("The Number Is Neutral");
	}
	else
	{
		printf("The Number Is Negative");
	}
}