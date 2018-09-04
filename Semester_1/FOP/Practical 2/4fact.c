#include<stdio.h>
void main()
{
	int val1;
	printf("Find Factorial of =");
	scanf("%d", &val1);

	int factorial=0;
	
	while(val1>1)
	{
		
		factorial=factorial*(val1*(val1-1));
		val--;
			
	}
	
		printf("%d", factorial);
	
}
