#include<iostream>
#include<string.h>
using namespace std;
class string_upper_print
{
	char name[];
	
	public:
	
	string_upper_print()
	{
		getdata();
	}
	
	void getdata();
		
};
void string_upper_print::getdata()
{	
	cout << "Enter String = ";
	gets(name);
					
	cout << "\n" << strupr(name);
}
int main()
{
	 string_upper_print obj;
	
return 0;
}
/*
Enter String = hello

HELLO
*/