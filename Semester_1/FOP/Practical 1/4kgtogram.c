#include<stdio.h>
void main()

{
	printf("Coversion of Kilogram Into Grams\n");
	
	float kg;
	
	printf("Enter Value of KG=");
	scanf("%f",&kg);
	
	float grams=1000*kg;

	printf("Grams available are %f\n",grams);	
}
