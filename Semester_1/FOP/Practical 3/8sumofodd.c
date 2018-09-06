#include<stdio.h>
void main()
{
	printf("Printing sum of all numbers till N\n");
	int value1;
	printf("Enter Value1=");
	scanf("%d",&value1);
	int counter=0;
	int sum=0;
	while(counter<=value1)
	{
	if(counter%2==1)
	{
	sum=sum+counter;
	counter++;
	}
	else
	{counter++;}
	}
	printf("%d\n",sum);

}
