#include<stdio.h>
void main()
{
	int array1[5];
	int start;
	int value;
	for(start=0;start<5;start++)
	{
		scanf("%d",&value);
		array1[start]=value*value;
	}


	for(start=0;start<5;start++)
	{
		printf("%d\n",array1[start]);
	}	
}
