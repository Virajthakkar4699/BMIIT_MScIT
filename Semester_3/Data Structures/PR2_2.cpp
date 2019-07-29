#include<iostream>
#include<cstring>
#define size 5
using namespace std;

class stackopr
{
	int ststudid[size];
	string ststudname[size];
	int ststudmarks[size];
	
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
			int id;
			string name;
			int marks;
			cout<<"PLease Enter id"<<endl;
			cin>>id;
			cout<<"PLease Enter name"<<endl;
			cin>>name;
			cout<<"PLease Enter marks"<<endl;
			cin>>marks;
			top++;
			ststudid[top]=id;
			ststudname[top]=name;
			ststudmarks[top]=marks;
			cout<<"Elememt Inserted successfully"<<endl;
			}
	}
	
	void pop()
	{
		if(top==0)
			{cout<<"Stack is empty"<<endl;}
		else 
			{
				int id=ststudid[top];
				string name=ststudname[top];
				int marks=ststudmarks[top];
				top--;
				cout<<"=================================="<<endl;
				cout<<"Student POPed is: "<<id<<"\n Name : "<<name<<"\n marks: "<<marks<<endl;
				cout<<"=================================="<<endl;
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
					cout<<"=================================="<<endl;
					cout<<"ID :"<<ststudid[i]<<endl;
					cout<<"Name :"<<ststudname[i]<<endl;
					cout<<"Marks :"<<ststudmarks[i]<<endl;
					cout<<"=================================="<<endl;
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
