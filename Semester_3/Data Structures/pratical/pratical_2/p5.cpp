/*
Write a program to insert string and character. Display index of the first occurrence of the character in string.
*/
#include<iostream>
#include<string.h>
using namespace std;
class string_char_index
{
	
	char name[100],search[100];
	
	public:
	
	string_char_index()
	{
		getdata();
	}
	
	void getdata();

};
void string_char_index::getdata()
{	
	int i;

	cout << "Enter String = ";
	gets(name);
	
	cout << "Enter Search = ";
	gets(search);
		
		for(i=0;name[i]!='\0';i++)
		{
			if(search[0]==name[i])
			{
				cout << search[0] << "  Index Is = " << i << "\n";
			}
			
		}
}
int main()
{
	string_char_index obj;
	
return 0;
}
/*
Output

Enter String = HELLO INDIA
Enter Search = L

L  Index Is = 2

*/