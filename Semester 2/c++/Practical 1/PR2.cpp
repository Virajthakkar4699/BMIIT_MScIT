#include<iostream>
using namespace std;

int main()
{
	int number;
	cout<<"Enter NUmber to be checked for Armstrong Number:- ";
	cin>>number;
	int lastdigit;
	int sum=0;
	int digit=number;	
	while(number>0)
	{
		lastdigit=number%10;
		sum=sum+(lastdigit*lastdigit*lastdigit);
		number=number/10;
		
	}
	
	if(digit==sum)
		{cout<<"The Number is Armstrong Number ."<<endl;}
	else
		{cout<<"The Number in not Armstrong. "<<endl;}
	
	

	cout<<"This is end of Programmer "<<endl;
	return 0;
	
}
