//Explicit_type_conversion
#include<iostream>
using namespace std;

//base type to class type
class length
{
	int meter,cm;
	public:
	length()
	{
		meter=cm=0;
	}
	length(int a)
	{
		meter=a/100;
		cm=a%100;
	}
	void display()
	{
		cout<<"\nMeter : "<<meter;
		cout<<"\nCentimeter : "<<cm<<endl;
	}
};

int main()
{
	length l1;
	int x=560;
	length l2=x;
	length l3=1050;
	l1.display();
	l2.display();
	l3.display();
	
	return 0;
}



