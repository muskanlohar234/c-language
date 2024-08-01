#include<stdio.h>
#include<conio.h>

void main()
{
	int ans;
	
	printf("Name Of The Months: \n");
	printf("Enter the Number Between 1-12: ");
	scanf("%d",&ans);
	
	switch(ans)
	{
		case 1:printf("The Month is January");
		break;
		case 2:printf("The Month is February");
		break;
		case 3:printf("The month is march");
		break;
		case 4:printf("The Month is April");
		break;
		case 5:printf("The Month is May");
		break;
		case 6:printf("The Month is June");
		break;
		case 7:printf("The Month is July");
		break;
		case 8:printf("The Month is August");
		break;
		case 9:printf("The Month is September");
		break;
		case 10:printf("The Month is october");
		break;
		case 11:printf("The Month is November");
		break;
		case 12:printf("The Month is Dcember");
		break;
		default:printf("Enter The Valid Input");
	}
}
