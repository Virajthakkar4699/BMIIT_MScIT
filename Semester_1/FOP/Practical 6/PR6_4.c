#include<stdio.h>
int inputarr(int size);
int max(int array1[],int size);
void main()
{	printf("Enter Size of Array:-\n");
	int size;
	scanf("%d",&size);
	int maximum=inputarr(size);
	printf("Maximum Element is %d \n",maximum);
	
}
int inputarr(int size)
{
	int array1[size];
	int temp=0;
	printf("Enter Elements in array:-\n");
	for(int start=0;start<size;start++)	
	{
		scanf("%d",&array1[start]);
	}
	printf("printing Elements in array:-\n");
	for(int start=0;start<size;start++)	
	{
		printf("%d\n",array1[start]);
	}
	
	int maximum=max(array1,size);
	return maximum;
}
int max(int array1[],int size)
{
	int maximum=array1[0];
	for(int start=0;start<size;start++)	
	{
		if(array1[start]>maximum)
			{
				maximum=array1[start];
			}
	}
	return maximum;
}
