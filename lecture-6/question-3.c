#include<stdio.h>

void main()
{
	float maths,science,english,sum,result;
	
	printf("Enter The Marks Of Maths: ");
	scanf("%f",&maths);
	printf("Enter The Marks Of Science: ");
	scanf("%f",&science);
	printf("Enter The Marks Of English: ");
	scanf("%f",&english);
	
		sum=maths+science+english;
		result=sum/3;
		
		printf("The Result is %.2f\n",result);
		
		if(result>=90 && result<=100)
		{
			printf("The Grade Is A1");
		}
		else if (result>=80 && result<=90)
		{
			printf("The Grade Is A2");
		}
		else if (result>=70 && result<=80)
		{
			printf("The Grade Is B1");
		}
		else if(result>=60 && result<=70)
		{
			printf("The Grade Is B2");
		}
		else if(result>=50 && result<=60)
		{
			printf("The Grade Is C1");
		}
		else if (result>=33 && result<=50)
		{
			printf("The Grade Is C2");
		}
		else
		{
			printf("You Are Failed");
		}
		
		
}