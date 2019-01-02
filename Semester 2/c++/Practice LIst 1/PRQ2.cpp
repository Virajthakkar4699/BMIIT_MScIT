#include<iostream>
#define pi 3.14
using namespace std;
int main()
{	
	cout<<"Enter radius of circle\n";
	float radius;
	cin>>radius;
	
	float area=pi*radius*radius;
	cout<<"Area of circle is "<<area;
	
	return 0;
}
