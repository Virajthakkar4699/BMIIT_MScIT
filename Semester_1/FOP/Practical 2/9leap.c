#include<stdio.h>
void main()
{
	int year;
	printf("Enter Your Year=\n");
	scanf("%d",&year);
	
	if(year%4==0)
	{printf("It is Leap Year\n");}
	else
	{printf("It is not a leap year\n");}
}
