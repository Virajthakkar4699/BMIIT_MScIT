#include<stdio.h>
void main()
{
	//Salesman commission
	
	char salesnum;
	printf("Input Customer number:-\n");
	scanf(" %c",&salesnum);
	
	
	char salesname;
	printf("Input Customer Name:-\n");
	scanf(" %c",&salesname);

	int salesamt;
	printf("Enter Last Reading=\n");
	scanf("%d",&salesamt);
	
	char salestype;
	printf("Input Customer number:-\n");
	scanf(" %c",&salestype);
	
	if(salestype=='P')
	int comm=9;
	else if(salestype=='D')
	int comm=5;
	else if(salestype=='W')
	int comm=2;	
	else 
	int comm=0;
	
	commissionamt=(salesamt/100)*9;
		
	printf("       Salesman Report");
	printf("==============================");
	printf("Salesman Number 	:%c",salesnum);
	printf("Salesman Name 		:%c",salesname);
	printf("Salesman Amount 	:%d",salesamt);
	printf("Commission (%) 		:%d",comm);
	printf("Commission (Rs.)	:%d",comissionamt);
	printf("==============================");	
	printf("Net Amount 		:%d",comissionamt+salesamt);
}

























