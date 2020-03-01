#include<iostream>
#include<string.h>
using namespace std;
class string_reverse_print
{
	char name[];
	
	public:
	
	string_reverse_print()
	{
		getadata();
	}
	
	void getdata();
		
};
void string_reverse_print::getdata()
{
	int i;
	
	cout << "Enter String = ";
	gets(name);
			
		cout << "\n";	
		
		for(i=strlen(name);i>=0;i--)
		{					
			cout << name[i];
		}
		
		cout << "\n";
}
int main()
{
	 string_reverse_print obj;
	
return 0;
}
/*
Enter String = HELLO

OLLEH
*/