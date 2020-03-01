

#include<iostream>
#include<string.h>
using namespace std;
class check_string_palindrome
{
	char name[];
	
	public:
	
	check_string_palindrome()
	{
		input_string_and_display();
	}
	
	void input_string_and_display();
		
};
void check_string_palindrome::input_string_and_display()
{
	int check=0;
	int i;
	cout << "Enter String = ";
	gets(name);
	
	int length = strlen(name);
			
		for(i=0;name[i]!='\0';i++)
		{
			if(name[i]!=name[length-1])
			{
				check = 1;
				break;
			}
			length--;
		}
		if(check==1)
		{
			cout << "\n String Is Not Palindrome \n";
		}	
		else
		{
			cout << "\n String Is Palindrome \n";	
		}	
		
}
int main()
{
	 check_string_palindrome obj;
	
return 0;
}	
/*
Output

Enter String = ABCBA

String Is Palindrome

Enter String = Hello

String Is Not Palindrome

*/