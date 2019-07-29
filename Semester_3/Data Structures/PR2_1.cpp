#include<iostream>
#include<cstring>
#define size 5
using namespace std;

class stackopr
{
	int stack[size];
	int top;
	
	public:
	stackopr()
	{
		top=0;
	}
	
	bool status()
	{
		 if(top==size)
			{
			 cout<<"stack is full"<<endl;
			 return false;
			}
		else
		 {
		 		return true;
		 }
		
	}
	
	void push()
	{	
		bool result=status();
		
		if(result==true)
			{
			int key;
			cout<<"PLease Enter Element"<<endl;
			cin>>key;
			top++;
			stack[top]=key;
			cout<<"Elememt Inserted successfully"<<endl;
			}
	}
	
	void pop()
	{
		if(top==0)
			{cout<<"Stack is empty"<<endl;}
		else 
			{
				int item=stack[top];
				top--;
				cout<<"Item POPed is: "<<item<<endl;
			}
	}
	
	void display()
	{
		if(top==0)
			{
				cout<<"Stack is empty"<<endl;
			}
		else
			{
				int i=top;
				while(i>0)
				{
					cout<<stack[i]<<endl;
					i--;
				}
			}
	}
};

int main()
{
	stackopr stackobj1;
	int choice;
	
	while(1)
	{	
		cout<<"Press 1 for Push Operation"<<endl ;
		cout<<"Press 2 for POP OPeration"<<endl ;
		cout<<"Press 3 for Display Operation"<<endl ;
		cout<<"Press 4 to Exit"<<endl;
		
		cout<<"PLease Enter Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1: 
			stackobj1.push();
			break;
			
			case 2:
			stackobj1.pop();
			break;
			
			case 3:
			stackobj1.display();
			break;
			
			case 4:
			return 0;
			
			default:
			cout<<"Print Valid Choice"<<endl;
		}
	}
}
