#include<stdio.h>
#include<conio.h>

void main()
{
	char i='a';
	
	do
	{
		printf("%c ",i);
		i+=4;
	}while(i<='z');
}