#include<iostream>
#include<string.h>
using namespace std;
class string_operation
{
	char name[];
	
	public:
	
	string_operation()
	{
		Getdata();
	}
	
	void Getdata()
	{
	
	int i,count=0;
	
	cout << "Enter String = ";
	gets(name);
			
		for(i=0;name[i]!='\0';i++)
		{					
			cout << name[i] << "\n";
		}
	}
		
};

int main()
{
	 string_operation obj;
	
	
return 0;
}
/*
Enter String = HELLO
H
E
L
L
O
*/