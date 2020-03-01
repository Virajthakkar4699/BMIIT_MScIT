#include<iostream>
#include<string.h>
using namespace std;
class string_word
{
	char name[];
	
	public:
	
	string_word()
	{
		getdata();
	}
	
	void getdata();
		
};
void string_word::getdata()
{
	int word=0,i;
	
	cout << "Enter String = ";
	gets(name);

			i=0;

			do
			{
				
					if(name[i]==' ')
					{
						if((name[i+1]!=' ' && name[i+2] !=' '))
							word++;
					}
					
					
					i++;
			}
			while(name[i]!='\0');
		
		if(name[0]==' ')
			cout << "\nYour String Word = " << word-1 << "\n";
		else
			cout << "\nYour String Word = " << word << "\n";
}
int main()
{
	 string_word obj;
	
return 0;
}
/*
Enter String = HE LL O

Your String Word = 2
*/