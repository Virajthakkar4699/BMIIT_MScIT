#include<iostream>
using namespace std;

int main()
{
	int farenheit;	
	int celsius;	
	
	cout<<"please enter temperature in farenheit :-";
	cin>>farenheit;
	
	celsius=((farenheit*9)/5+32);
	
	cout<<"Temperature in degree celsius is "<<celsius<<endl;	

	return 0;
	
}
