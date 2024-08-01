#include<stdio.h>
#include<conio.h>

void main()
{
	int Num1,Num2;
	
	printf("Enter The Num1: ");
	scanf("%d",&Num1);
	printf("Enter The Num2: ");
	scanf("%d",&Num2);
	
	(Num1>=Num2)? printf("The Maximum Number is %d"):printf("The Minimum Number is %d");
}
