#include<stdio.h>
void main()
{
	int array1[5];
	int start;
	for(start=0;start<5;start++)
	{
		scanf("%d",&array1[start]);
	}
	printf("==========================\n");
	printf("-----Printing Array-------\n");
	printf("==========================\n");
	for(start=0;start<5;start++)
	{
		printf("%d\n",array1[start]);
	}
	printf("\n");
	printf("==========================\n");
	printf("----Printing greatest-----\n");
	printf("==========================\n");

	int max=0;
	for(start=0;start<5;start++)
	{
		if(array1[start]>max)
			{
				max=array1[start];
			}
	}
		
	printf("%d\n",max);
	
	printf("==========================\n");
	printf("-----Printing minimum-----\n");
	printf("==========================\n");
	
	int min=max;
	for(start=0;start<5;start++)
	{
		if(array1[start]<min)
			{
				min=array1[start];
			}
	}
	printf("%d\n",min);
}

void avg()
{
}
