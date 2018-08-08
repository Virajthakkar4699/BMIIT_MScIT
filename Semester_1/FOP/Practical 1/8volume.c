#include<stdio.h>
void main()

{
	printf("to find volume of sphere\n");
	
	float radius;
	
	printf("Enter Radius=");
	scanf("%f",&radius);

	float volume=((4*3.14*radius*radius*radius)/3);

	printf("Volume of sphere %f\n", volume);

}
