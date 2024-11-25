#include<stdio.h>
#include<conio.h>
	// wap to create simple calculator with using udf.

int add(int num1,int num2)
{
	int Add;
	Add=num1+num2;
	return Add;
}
int sub(int num1,int num2)
{
	int Sub;
	Sub=num1-num2;
	return sub;
}
int mul(int num1,int num2)
{
	int Mul;
	Mul=num1*num2; 
	return mul;
}
int div(int num1,int num2)
{
	int Div;
	Div=num1/num2;
	return div;
}
int module(int num1,int num2)
{
	int Module;
	Module=num1%num2;
	return module;
}
	
void main()
{
	int choice,num1,num2,ans;
	
	
	printf("Enter Num1: ");
	scanf("%d",&num1);
	printf("Enter Num2: ");
	scanf("%d",&num2);
	
	printf("Enter the Choice: ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("The Addition is %d",add(num1,num2));
	}
	else if(choice==2)
	{
		printf("The Subraction is %d",sub);
	}
	else if(choice==3)
	{
		printf("The Multiplication is %d",mul);
	}
	else if(choice==4)
	{
		printf("The Division is %d",div);
	}
	else if(choice==5)
	{
		printf("The Module is %d",module);
	}
	else("Enter valid number between 1 to 5.");
}
