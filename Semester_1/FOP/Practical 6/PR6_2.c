#include<stdio.h>
void main()
{
	int array1[5]={1,2,3,4,5};
	

	int array2[5];
	int start=0;
	int i=4;
	
	for(start=0;start<5;start++,i--)
	{	
	array2[start]=array1[i];
	}
	
	for(start=0;start<5;start++)
	{	
	printf("%d\n",array2[start]);
	}
}
