#include<stdio.h>
void main()
{
	int val1;
	printf("Find Factorial of =");
	scanf("%d", &val1);

	int factorial=1;
	
	while(val1>0)
	{
		
		factorial=factorial*(val1);
		val1--;
			
	}
	
		printf("%d", factorial);
	
}
