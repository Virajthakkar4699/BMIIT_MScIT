#include<stdio.h>
void main()
{
	int num1;
	printf("Enter Number To be reversed and check for palindrome=");
	scanf("%d",&num1);
	int num2=num1;
	int digit=0;
	int remainder=0;
		
	while(num1>0)
	{	
		remainder=num1%10;
		digit=(digit*10)+remainder;
		num1=num1/10; 
	}	
		if(num2==digit)
		printf("It is palindrome.");
		else
		printf("It is not a palindrome");
}

