#include<stdio.h>
void main()
{
	int array1[10];
	int start;
	for(start=0;start<10;start++)
	{
		scanf("%d",&array1[start]);
	}
	
	printf("Enter element to be searched\n");
	
	int search;
	scanf("%d",&search);

	for(start=0;start<10;start++)
	{
		if(array1[start]==search)
		{
			printf("Element Found at array1[%d]\n",start);
		}
			start++;
	}
}
