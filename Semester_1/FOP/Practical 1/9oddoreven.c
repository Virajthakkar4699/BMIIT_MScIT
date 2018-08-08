#include<stdio.h>
void main()

{
	printf("To Check Number is Even or odd\n");
	int a;

	printf("Enter Value of A=");
	scanf("%d", &a);

if(a>0 && a<100)
{

	int r=a%2;

	if(r==0)
	{
	printf("A is Even number\n");
	}

	else
	{
	printf("A is odd number\n");
	}	
}
else 
{	printf("Please Give input between 0 and 100");
}

}

