#include<iostream>
#include<cstring>
#define size 5
using namespace std;

class student
{
	int enro;
	char sname[25];
	int marks;
	
	public:
	void getdata(int,const char* ,int);
	void display();
};

void student::getdata(int number, char const* name,int mark )
{
	enro=number;
	strcpy(sname,name);
	marks=mark;
}

void student::display()
{
	cout<<"Enrollment Number : "<<enro<<endl;
	cout<<"Name of Student : "<<sname<<endl;
	cout<<"Marks : "<<marks<<endl;
}

class student_stack
{
	public:
	int top;
	student stack[size];
	
	student_stack()
	{
		top=0;
	}
	
	void push(student &s)
		{
			if (top>=size)
				{cout<<"stack is full \n";}
			else
				{
					top++;
					stack[top]=s;
				}
		}
	student& pop()
		{
			if(top==0)
				{cout<<"Stack is empty";}
			else 
				{
					student &s=stack[top];
					top--;
					return s;
				}
		}
	void display()
		{
			for(int i=top;i>=1;i--)
				stack[i].display();
		}
};

int main()
{
	student s1[size];
	student_stack s2;
	
	
	s1[0].getdata(1,"Viraj",50);
	s1[1].getdata(2,"Pratik",50);
	
	s2.push(s1[0]);
	s2.push(s1[1]);
	s2.display();
	
	s2.pop();
	
	cout<<"===================="<<endl;
	s2.display();
	return 0;
}


