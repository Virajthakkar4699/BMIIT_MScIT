#include<stdio.h>
void main()
{	
	printf("Printing Square=");	
	int value1;
	printf("Enter Value=");
	scanf("%d",&value1);
	int counter=1;
	while(counter<=value1)
	{
		printf("%d\n",counter*counter);
		counter++;
	}
	
	
}
