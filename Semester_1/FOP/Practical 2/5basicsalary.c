#include<stdio.h>
void main()
{	
	int basicsalary;
	printf("Enter Basic salary=");
	scanf("%d", &basicsalary);

	float hra=((10*basicsalary)/100);
	float pf=((12.5*basicsalary)/100);
	float da=((90*basicsalary)/100);
	float ma=((100*basicsalary)/100);

	float Gross_salary=(da+hra+ma)-(ma+pf);
	printf("%f\n", Gross_salary);
}
