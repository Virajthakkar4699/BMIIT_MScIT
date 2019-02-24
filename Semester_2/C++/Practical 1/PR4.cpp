#include<iostream>
using namespace std;
	
int main()
{
	int finaldigit;
	int index=0;
	cout<<"Please Enter Last Digit. ";
	cin>>finaldigit;
	
	if(index<50)
		{
			for(index=0;index<=finaldigit;index++)
				{
					if(index%2==0)
						cout<<index<<endl;
				}
		}
	else
		{cout<<"Please Enter Number Between 1 to 50. "<<endl;}
	
	return 0;
}
