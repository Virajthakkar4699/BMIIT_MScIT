#include<stdio.h>
#define a 5

void main()
{
	int num1;
	printf("Enter Number 1=");
	scanf("%d",&num1);
	
	if(num1>0)
	{
		int div=num1/a;
		
		if(div==0)
		{printf("Number is Divisible by 5\n");}
		else
		{printf("NUmber is not divisible 5\n");}
	}
	else
	{	
		printf("Please Check Your Input\n");
	}
}
