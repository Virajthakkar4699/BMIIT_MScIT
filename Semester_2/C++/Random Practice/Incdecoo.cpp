#include<iostream>
#include<cstring>
#include<ctype.h>
using namespace std;

class student
{
	int enro;
	string name;
	public:
	friend void operator >>(istream &in,student &s)
	{
		cout<<"Enter the enro: ";
		in>>s.enro;
		cout<<"Enter The Name: ";
		in>>s.name;
	}
	friend void operator <<(ostream &out,student &s)
	{
		cout<<"Enro: ";
		out<<s.enro<<endl;
		cout<<"Name: ";
		out<<s.name<<endl;
	}
};
int main()
{
	student s1;
	cin>>s1;
	cout<<s1;
	return 0;
}
