#include<stdio.h>
#include<conio.h>

void main()
{
	int start,end;
	printf("Enter start: ");
	scanf("%d",&start);
	printf("Enter end: ");
	scanf("%d",&end);


	while(start<=end)
    {
    	if(start%4==0)
        {
        	printf("%d\n",start);
		} 
    	start++;
	}
}