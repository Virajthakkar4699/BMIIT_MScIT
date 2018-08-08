#include<stdio.h>
void main()

{
	printf("Calculation of simple interest\n");

	float amt;
	float time;
	float rate;

	printf("Enter Value of Amount=");
	scanf("%f",&amt);

	printf("Enter Value of years=");
	scanf("%f",&time);

	printf("Enter Value of interest rate=");
	scanf("%f",&rate);

	float interest=((amt*time*rate)/100);
	printf("Interest Amount is= %f\n",interest);
	
	float totalamt=amt+interest;
	printf("Total Payable is= %f\n",totalamt);
}
