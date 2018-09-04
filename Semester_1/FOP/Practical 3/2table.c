#include<stdio.h>
void main()
{
	printf("Printing multiplication table\n");
	int tableof;
	printf("Print table of = ");
	scanf("%d",&tableof);
	int counter=1;
	
	printf("Here is table of %d\n",tableof);
	
	while(counter<=10)
	{
		printf("%d x %d = %d\n",tableof,counter,tableof*counter);
		counter++;
	}
}
