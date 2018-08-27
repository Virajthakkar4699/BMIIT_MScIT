#include<stdio.h>
void main()
{
	int num1;
	int num2;
	int num3;

	printf("Enter First Number=");
	scanf("%d", &num1);

	printf("Enter Second Number=");
	scanf("%d", &num2);

	printf("Enter Third Number=");
	scanf("%d", &num3);

	if(num1==num2 && num2==num3)
	{
		printf("all three are equal");
	}
	else if(num1==num2 && num2>num3)
	{
		printf("Num1 and Num2 are greater");
	}

	else if(num1==num2 && num2<num3)
	{
		printf("Num 3 is greater");
	}

	else if(num2==num3 && num2>num1)
	{
		printf("Num2 and Num3 are greater");
	}

	else if(num2==num3 && num2<num1)
	{
		printf("Num 1 is greater");
	}
	else if(num1==num3 && num1>num2)
	{
		printf("Num1 and Num3 are greater");
	}
	else if(num1==num3 && num1<num2)
	{
		printf(" Num2 is greater");
	}

	else if(num1>num2 && num1>num3)
	{
		printf("Num1 is Greater");
	}

	else if(num2>num1 && num2>num3)
	{
		printf("Num2 is Greater");
	}

	else if(num3>num1 && num3>num2)
	{
		printf("Num3 is Greater");
	}




































}
