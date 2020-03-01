#include<iostream>
#include<string.h>
using namespace std;

class pattern
{
	char word[100];
	int i,j;
	public :
	
	//public:
	
		void display()
		{
		
		cout<<"enter the pattern name :";
		cin>>word; 
			
			for(i=0;i<strlen(word);i++)
			{
				for(j=0;j<=i;j++)
				{
					cout<<" "<<word[j];
				}
				cout<<"\n";
			}
		}	
} p;
int main()
{
	p.display();
	cout<<"the pattern is here:\n";
 
 return 0;
 }