#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year:\n");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("This year is leap year\n");
	}
	else
	{
		printf("This year is not leap year\n");
	}
	return 0;
}
