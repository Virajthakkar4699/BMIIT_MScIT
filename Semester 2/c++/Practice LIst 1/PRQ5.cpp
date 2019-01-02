#include<iostream>
using namespace std;
int main()
{
	int pamt,time,rate;
	cout<<"Enter value of Principal Amount:-";
	cin>>pamt;
	cout<<"Enter value of Time Period in years:-";
	cin>>time;
	cout<<"Enter value of Interest Rate:-";
	cin>>rate;

	int simple_interest=(pamt*time*rate)/100;
	cout<<"Simple Interest amount is :- "<<simple_interest<<"\n";
	
	return 0;
	
	
}
