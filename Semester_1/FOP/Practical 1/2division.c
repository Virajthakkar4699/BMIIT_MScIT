#include<stdio.h>
void main()

{
	printf("Find Divison of two number");
	int a;
	int b;

	printf("Enter Value of a=");
	scanf("%d", &a);
	
	printf("Enter Value of b=");
	scanf("%d", &b);

if(a>b)
{

	int c=a/b;
	printf("Value of c =%d\n",c);
}

else 
{	
	printf("Pls Give Proper input where A is Greater Than B");
}	
}
