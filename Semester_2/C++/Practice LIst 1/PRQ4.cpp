#include<iostream>
using namespace std;
int main()
{
	int C,D,temp;
	cout<<"Enter Value of C:-";
	cin>>C;
	
	cout<<"Enter Value of D:-";
	cin>>D;
	
	temp=C;
	C=D;
	D=temp;

	cout<<"Value of C= "<<C<<"\n";
	cout<<"Value of D= "<<D<<"\n";
	
	return 0;

}
