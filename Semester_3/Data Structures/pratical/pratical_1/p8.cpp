#include<iostream>
#include<string.h>
using namespace std;

class pattern
{
	char word[100];
	int len,i,j;
	public :
	
		void display()
		{
		
		cout<<"enter the pattern name :";
		cin>>word; 
			
			for(i=0;i<strlen(word);i++)
			{	for(int k=i;k<strlen(word);k++)
			{cout<<" ";}
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