#include<stdio.h>
void main()
{
	printf("Sum of digits");
	printf("\n");
	int value1=0;
	printf("Enter Value=");
	scanf("%d",&value1);
	int sum=0;
	int rem;
	while(value1>0)
	{
	//printf("viraj");
	rem=value1%10;
	value1=value1/10;
	sum=sum+rem;
	}
	printf("%d\n",sum);	
	
}