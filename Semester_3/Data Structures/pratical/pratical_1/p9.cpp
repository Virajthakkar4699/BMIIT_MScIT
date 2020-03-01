#include<iostream>
using namespace std;
class swastic
{
	int n;
	
	public:
	
	void print_swastic()
	
 {	
	cout << "Enter Number = ";
	cin >> n;
	
	int row,col;
	
	if(n%2!=0 && n>4)
	{	
		for(row=1;row<=n;row++)
		{		
			for(col=1;col<=n;col++)
			{
				if(row==n/2+1 || col==n/2+1)
				{
					cout << "*";
				}
				else
				{
					if(col>n/2+1 && row==1)
						cout << "*";
					else if(col<=n/2 && row==n)
						cout << "*";
					else if(row<=n/2 && col==1)
						cout << "*";
					else if (row>n/2+1 && col==n)
						cout << "*";
					else
						cout << " ";
				}
			}
			cout << "\n";
		}
	
	}
	else
	{
		cout << "\nPlease Enter Odd Number\n";
	}
}
};
int main()
{
	swastic obj;
	obj.print_swastic();
return 0;	
}