#include<stdio.h>
void main()
{
	printf("count odd or even\n");
	printf("Enter Value=");
	int value1;
	scanf("%d",&value1);
	int odd=0;
	int even=0;
	int rem;
	while(value1>0)
	{
	rem=value1%10;
	if(rem%2==0)
	{even++;}
	else
	{odd++;}
	value1=value1/10;	
	}
	printf("number odd digits are %d\n",odd);
	printf("number even digits are %d\n",even);
}