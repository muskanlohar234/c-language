#include<stdio.h>
#include<conio.h>
	//Write a C Program to print total number of days in a month using switch case.

void main()
{
	int n;
	
	printf("Enter n: ");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
		     printf("The Day is Sunday");
		break;
		
		case 2:
		    printf("The Day is Monday");
		break;
		
		case 3:
		   printf("The Day is wednesday");
		break;
		
		case 4:
		   printf("The Day is Thursday");
		break;
		
		case 5:
		   printf("The Day is Friday");
		break;
		
		case 6:
		   printf("The Day is Saturday");
		
		default:printf("Enter The Valid Number:");
	}


}