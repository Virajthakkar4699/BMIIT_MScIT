#include<stdio.h>
void main()

{
	printf("Find Area of Rectangle\n");

	int length;
	printf("Enter the length of Rectangle:- ");
	scanf("%f", &length);

	int width;
	printf("Enter the Width of Rectangle:- ");
	scanf("%f", &width);


	float area=(length*width);
	printf("Area of Rectangle is %f\n",area);

}
