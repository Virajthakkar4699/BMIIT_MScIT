#include<iostream>
#include<string.h>
using namespace std;
class string_length
{
	char name[];
	
	public:
	
	string_length()
	{
		getdata();
	}
	
	void getdata();
		
};
void string_length::getdata ()
{
	int count;
	
	cout << "Enter String = ";
	gets(name);
			
		for(count=0;name[count]!='\0';count++)
	
		cout << "\nYour String Length = " << count << "\n";
}
int main()
{
	 string_length obj;
	
return 0;
}
/*
Enter String = HELLO WORLD

Your String Length = 11
*/