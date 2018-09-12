#include<stdio.h>
void main()
{
	int num1;
	printf("Enter Number 1=");
	scanf("%d",&num1);
	
	int counter=0;
	
	while(num1>0)
	{
		num1=num1/10;
		counter++;
	}
		printf("%d\n",counter);
	
}
