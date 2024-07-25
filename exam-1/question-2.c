#include<stdio.h>
#include<conio.h>

void main()
{
	int hra,da,ta;
	float salary,grosssalary,total;
	
	printf("enter the salary: ");
	scanf("%f",&salary);
	printf("enter the hra: ");
	scanf("%d",&hra);
	hra=(salary*hra)/100;
	printf("enter the da: ");
	scanf("%d",&da);
	da=(salary*da)/100;
	printf("enter the ta: ");
	scanf("%d",&ta);
	ta=(salary*ta)/100;
	
	total=salary+hra+da+ta;
	
	printf("the gross salary is %.2f",total);
}