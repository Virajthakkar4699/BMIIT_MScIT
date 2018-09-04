#include<stdio.h>
void main()
{
	int val1;
	printf("Till how many values do you want to add=");
	scanf("%d", &val1);

	int sum1=(val1*(val1+1))/2;
	printf("%d\n", sum1);
}
