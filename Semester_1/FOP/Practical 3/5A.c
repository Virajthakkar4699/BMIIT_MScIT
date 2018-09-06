#include<stdio.h>
void main()
{
	int ending;
	printf("Enter Value=");
	scanf("%d",&ending);
	int factor=1;
	int counter=1;	
	
	while(counter<=ending)
	{
		factor=factor*counter;
		printf("%d\n",factor);
		counter++;
	}
}
