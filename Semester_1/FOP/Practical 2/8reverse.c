#include<stdio.h>
void main()
{
	/* int num1;
	printf("Enter Number To be reversed");
	scanf("%d",&num1);
	
	int a=num1%10;
	int num1div=num1/10;

	int b=num1div%10;
	int c=num1div/10;

	printf("%d%d%d",a,b,c);*/


	
	int num1;
	printf("Enter Number To be reversed=");
	scanf("%d",&num1);
	
	int digit;
	int remainder;
	int i=1;
	for(num1;num1>0;num1=num1/10)
	{	
		remainder=num1%10;
		
		digit=(digit+(remainder*i));
		i=i*10;

		
		
	}	
 		printf("%d\n",digit);

	
}

