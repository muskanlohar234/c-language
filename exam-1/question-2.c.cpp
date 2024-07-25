#include<stdio.h>
#include<conio.h>

void main()
{
	float HRA,DA,TA,discount;
	float salary,gross salary;
	
	printf("Enter the salary");
	scanf("%f",&salary);
	printf("Enter the HRA");
	scanf("%f",&HRA);
	printf("Enter the DA");
	scanf("%f",&DA);
	printf("Enter the TA");
	scanf("%f",&TA);
	
	gross salary=salary+HRA+DA+TA;
	
	printf("the gross salary is %f",gross salary); 
}