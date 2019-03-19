//class type to base type
#include<iostream>
using namespace std;

class length
{
	int meter,cm;
	public:
		length()
		{
			meter=cm=0;
		}
		length(int m,int c)
		{
			meter=m;
			cm=c;
		}
		operator int() //conversion function
		{
			int c;
			c=meter*100;
			c=c+cm;
			return c;
		}
};

int main()
{
	length l1(5,50);
	int x=l1;
	cout<<x<<endl;
	return 0;
}


