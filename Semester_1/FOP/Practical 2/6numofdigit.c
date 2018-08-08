#include<stdio.h>
void main()
{
	int num1;
	printf("Enter Number 1=");
	scanf("%d",&num1);

	if(num1>=0 && num1<=9)
	
	{
	printf("It is 1 digit Number\n");
	}

	else if(num1>=10 && num1<=99)
	{
	printf("It is 2 digit Number\n");
	}

	else if(num1>=100 && num1<=999)
	{
	printf("It is 3 digit Number\n");
	}
	
	else
	{
	printf("PLease Check Your Input --> 0-999\n");
	}
	
}
