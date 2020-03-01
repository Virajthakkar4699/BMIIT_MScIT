

#include<iostream>
#include<string.h>
using namespace std;
class string_find_char_symbol
{
	char name[];
	
	public:
	
	string_find_char_symbol()
	{
		getdata();
	}
	
	void getdata();
		
};
void string_find_char_symbol::getdata()
{	
	int i,upper=0,lower=0,digit=0,symbol=0;

	cout << "Enter String = ";
	gets(name);
					
	for(i=0;name[i]!='\0';i++)
	{
		if(isupper(name[i]))
			upper++;
		if(islower(name[i]))
			lower++;
		if(isdigit(name[i]))
			digit++;
		if(ispunct(name[i]))
			symbol++;
	}

	cout << "\nTotla Capital Alphabet = " << upper << endl;
	cout << "\nTotla Small Alphabet = " << lower << endl;
	cout << "\nTotla Digit = " << digit << endl;
	cout << "\nTotla Special Symbol = " << symbol << endl;

	
}
int main()
{
	 string_find_char_symbol obj;
	
return 0;
}
/*
Output

Enter String = Hello123@gmail.com

Totla Capital Alphabet = 1

Totla Small Alphabet = 12

Totla Digit = 3

Totla Special Symbol = 2

*/