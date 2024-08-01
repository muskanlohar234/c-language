#include<stdio.h>
#include<conio.h>

void main()
{
	int ans;
	
	printf("Name Of The Days Of The Weeks: \n");
	printf("Enter the Number Between 1-7: ");
	scanf("%d",&ans);
	
	switch(ans)
	{
		case 1:printf("The Day Is Monday");
		break;
		case 2:printf("The Day Is Tuesday");
		break;
		case 3:printf("The Day Is Wednesday");
		break;
		case 4:printf("The Day Is Thursday");
		break;
		case 5:printf("The Day Is Friday");
		break;
		case 6:printf("The Day Is Saturday");
		break;
		case 7:printf("The Day Is Sunday");
		break;
		default:printf("Enter The Valid Input");
	}
}
