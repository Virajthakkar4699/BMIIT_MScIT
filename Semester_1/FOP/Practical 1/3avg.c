#include<stdio.h>
void main()
{
	int num1;
	int nume2;	
	
	printf("enter num1= ");
	scanf("%d", &num1);

	printf("enter num2= ");
	scanf("%d", &num2);

	int num3=num1+num2;
	int num4=num1*num2;
	
	printf("%d\n", num1);
	printf("%d\n", num2);
	printf("x+y = %d\n", num3);
	printf("x*y = %d\n", num4);

	printf("Average Marks Programme\n");	

	int S1;
	int S2;
	int S3;
	int S4;
	int S5;
	int S6;

	printf("enter S1= ");
	scanf("%d", &S1);

	printf("enter S2= ");
	scanf("%d", &S2);

	printf("enter S3= ");
	scanf("%d", &S3);

	printf("enter S4= ");
	scanf("%d", &S4);

	printf("enter S5= ");
	scanf("%d", &S5);

	printf("enter S6= ");
	scanf("%d", &S6);

	int avg= ((S1+S2+S3+S4+S5+S5)/6);

	printf("Average Marks are %d\n",avg);
	
	printf("End Of Average programme\n");
	printf("\n");

	
	

	
}
