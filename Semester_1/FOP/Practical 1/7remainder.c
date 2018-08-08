#include<stdio.h>
void main()

{
	printf("To find Remainder");

	int a;
	int b;

	printf("Enter Value of Number1=");
	scanf("%d", &a);
	
	printf("Enter Value of Number2=");
	scanf("%d", &b);

	int c=a%b;
	printf("Value of Remainder =%d\n",c);
	
}
