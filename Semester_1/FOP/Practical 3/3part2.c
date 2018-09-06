#include<stdio.h>
void main()
{
	printf("addition of odd or even\n");
	printf("Enter Value=");
	int value1;
	scanf("%d",&value1);
	int sumodd=0;
	int sumeven=0;
	int rem;
	while(value1>0)
	{
	rem=value1%10;
	if(rem%2==0)
	{sumeven=sumeven+rem;}
	else
	{sumodd=sumodd+rem;}
	value1=value1/10;	
	}
	printf("sum of odd digits are %d\n",sumodd);
	printf("sum of even digits are %d\n",sumeven);
}