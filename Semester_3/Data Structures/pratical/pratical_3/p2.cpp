/*
Write a menu driven program to implement stack using student class. Student class conations property like studentid, name and marks. Following operation should be performed:
A. Insert Student (Push)
B. Remove Student (Pop)
C. Display
*/

#include<iostream>
#define size 5
using namespace std;
class student
{
	public:

	int id,mark;
	string name;

};

class student_stack
{
	int top;

	student stack[size];

	public:
	
	student_stack()
	{
		top = -1;
	}
	
	void push(student s)
	{
		if(top>=size-1)
		{
			cout << "Class Is Over Flow";	
		}
		else
		{
			top = top + 1;
			
			stack[top].id = s.id;
			stack[top].mark = s.mark;
			stack[top].name = s.name;
			
		}
	}
	
	student pop()
	{
		if(top==-1)
		{
			cout << "Class is under flow\n";
		}
		else
		{
	    		 student obj;
	
			 obj = stack[top];
			
			 top--;		

			 return obj;
		}
	}
	
	void display()
	{
		int i;

		for(i=top;i>=0;i--)
		{
			cout << "--------------------\n";
			cout << "Student Id = " << stack[top].id << "\n";
			cout << "Mark  = " << stack[top].mark << "\n";
			cout << "Student Name = " << stack[top].name << "\n";
			cout << "--------------------\n";
		}
	}

};

int main()
{

	student_stack s_t;

	student s;

	
	int choice , value;

	char ch = 'y';
	
	cout << "\n---Your Stack Size Is 5---\n\n";
	
	while(ch=='y')
	{
		cout << "---------------------\n";
		cout << "Press 1 For Push\n";
		cout << "Press 2 For Pop\n";
		cout << "Press 3 For Display\n";
		cout << "---------------------\n";

		cout << "Enter Choice = ";
		cin >> choice;
		
		switch(choice)
		{
			case 1:
				cout << "\n------------------\n";
				cout << "Enter Student ID = ";
				cin >> s.id;
				cout << "Enter Student Mark = ";
				cin >> s.mark;
				cout << "Enter Student Name = ";
				cin >> s.name;
				s_t.push(s);
				break;
			case 2:
				
				s = s_t.pop();
				cout << "\n---Deleted Student---\n";
				cout << s.id << "\n";
				cout << s.mark << "\n";
				cout << s.name << "\n\n";
				break;
			case 3:
				s_t.display();
				break;
			default:
				cout << "Enter Right Choice\n";
				break;
				
		}
		cout << "\n*****************************\n";
		cout << "DO YOU WANT TO CONTINUE PRESS y = ";
		cin >> ch;
		
	}
	
return 0;
}


/*
32
---------------------
Press 1 For Push
Press 2 For Pop
Press 3 For Display
---------------------
Enter Choice = 3
--------------------
Student Id = 1
Mark  = 50
Student Name = hemin
--------------------

---------------------
Enter Choice = 2

---Deleted Student---
1
50
hemin

---After Push 5 value---

Class Is Over Flow

---After Pop 5 Value---

Class is under flow

*/