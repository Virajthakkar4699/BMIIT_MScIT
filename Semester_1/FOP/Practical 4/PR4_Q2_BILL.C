#include<stdio.h>
int main()
{
	//ELECTRICITY BILL
	
	char cusnum;
	printf("Input Customer number:-\n");
	scanf(" %c",&cusnum);
	
	
	char cusname;
	printf("Input Customer Name:-\n");
	scanf(" %c",&cusname);

	int pastreading;
	printf("Enter Last Reading=\n");
	scanf("%d",&pastreading);

	int presentreading;
	printf("Enter Present Reading=\n");
	scanf("%d",&presentreading);
	
	int chargeperunit;
	printf("Enter Charge Per unit\n");
	scanf("%d",&chargeperunit);

	int usedunit=presentreading-pastreading;
	int amt=usedunit*chargeperunit;
	
	printf("	Your Electricity Bill\n");
	printf("=====================================\n");
	printf("Customer Number     :%c\n",cusnum);
	printf("Customer Name       :%c\n",cusname);
	printf("Past Reading        :%d\n",pastreading);
	printf("Present Reading     :%d\n",presentreading);
	printf("unit consumed       :%d\n",usedunit);
	printf("Charge Per Unit     :%d\n",chargeperunit);
	printf("Amount To be Paid   :%d\n",amt);	
}
