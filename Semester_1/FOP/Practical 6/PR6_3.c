#include<stdio.h>
void main()
{
	int array1[5];
	int start;
	int temp=0;
	for(start=0;start<5;start++)
	{
		scanf("%d",&temp);
		array1[start]=temp*temp;
	}
	printf("=================================\n");
	printf("Printing Array\n");
	printf("=================================\n");
	for(start=0;start<5;start++)
	{
		printf("%d\n",array1[start]);
	}
}
